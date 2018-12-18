#include <iostream>
using namespace std;

void heap_adjust(int *raw, size_t depth, size_t parent)
{
	int tmp = raw[parent];
	size_t child = parent * 2 + 1; // left child
	while (child < depth){
		/* if there is right child, and is bigger than left, then choose the right one*/
		if ((child+1)<depth && raw[child]<raw[child+1]){
			child++;
		}
		cout<<"..."<<endl;
		/*make sure that parent is bigger than children*/
		if (tmp >= raw[child]){
			break;
		}
		raw[parent] = raw[child];

		parent = child;
		child = parent * 2 + 1;
	}
	raw[parent] = tmp;
}

void heap_sort(int *raw, size_t length)
{
	/*init the heap*/
	for (size_t i=length/2; i>=1; i--){
		heap_adjust(raw, length, i-1);
	}
	for (int a=0; a<length; a++){
		cout<<raw[a]<<" ";
	}
	cout<<endl;
	int tmp;

	for (size_t i=length-1; i>0; i--) {
		/*the fist element must be the biggest one, so we store it*/
		tmp = raw[i];
		raw[i] = raw[0];
		raw[0] = tmp;
		heap_adjust(raw, i, 0);

		cout<<length-i<<": ";
		for (int a=0; a<length; a++){
			cout<<raw[a]<<" ";
		}
		cout<<endl;

	}
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

	heap_sort(aa, sizeof (aa) / sizeof (int));
	cout<<"after"<<endl;
	for (auto &i : aa){
		cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}
