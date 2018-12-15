#include <iostream>
using namespace std;

void insert_sort(int *list, size_t size)
{
	if (size <= 1){
		return;
	}
	int tmp  = 0;
	size_t j = 0;
	for (size_t i=0; i<size; i++){
		tmp = list[i];
		for (j=i; j>0; j--){
			if (tmp < list[j-1]){
				list[j] = list[j-1];
			}else{
				break;
			}
		}
		list[j] = tmp;
		cout<<i<<": ";
		for (int a=0; a<size; a++){
			cout<<list[a]<<" ";
		}
		cout<<endl;
	}
}
int main(void)
{
	int aa[]={9,3,4,1,8,3,2};
	//int aa[]={9,3};
	cout<<"before"<<endl;
	for (auto &i : aa){
		cout<<i<<" ";
	}
	cout<<endl;

	insert_sort(aa, sizeof (aa) / sizeof (int));
	cout<<"after"<<endl;
	for (auto &i : aa){
		cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}
