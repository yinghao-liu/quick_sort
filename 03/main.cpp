#include <iostream>
using namespace std;

void merge(int *raw, size_t left, size_t mid, size_t right, int *tmp)
{
	size_t i = left;
	size_t j = mid+1;
	int k = 0;
	while (i<=mid && j<=right){
		if (raw[i] < raw[j]){
			tmp[k++] = raw[i++];
		}else{
			tmp[k++] = raw[j++];
		}	
	}
	/* after the while above, either i<=mid or j<=right must be ture, 
	 * so, just one of the two while below will run
	 */
	while (i<=mid){
		tmp[k++] = raw[i++];
	}
	while (j<=right){
		tmp[k++] = raw[j++];
	}
	/*copy tmp to raw, just from left to right, that part are sorted*/
	k = 0;
	i = left;
	while (i <= right){
		raw[i++] = tmp[k++];
	}
}
void _merge_sort(int *raw, size_t left, size_t right, int *tmp)
{
	/*recursion terminal*/
	if (left == right){
		return;
	}
	size_t mid = (left + right) / 2;
	_merge_sort(raw, left, mid, tmp);    // after this, left part are sorted
	_merge_sort(raw, mid+1, right, tmp); // after this, right part are sorted
	merge(raw, left, mid, right, tmp);
}

void merge_sort(int *list, size_t size)
{
	int *tmp = new int[size];
	_merge_sort(list, 0, size-1, tmp);
	delete[] tmp;
}

int main(void)
{
	int aa[]={9,3,4,1,8,3,2};
	//int aa[]={9,3,1};
	cout<<"before"<<endl;
	for (auto &i : aa){
		cout<<i<<" ";
	}
	cout<<endl;

	merge_sort(aa, sizeof (aa) / sizeof (int));
	cout<<"after"<<endl;
	for (auto &i : aa){
		cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}
