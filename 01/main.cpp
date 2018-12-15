#include <iostream>
using namespace std;

void bubble_sort(int *list, size_t size)
{
	if (size <= 1){
		return;
	}
	int tmp;
	size_t ssize = size - 1;
	for (size_t i=0; i<ssize; i++){
		for (size_t j=0; j<ssize-i; j++){
			if (list[j] > list[j+1]){
				tmp = list[j];
				list[j] = list[j+1];
				list[j+1] = tmp;
			}
		}
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

	bubble_sort(aa, sizeof (aa) / sizeof (int));
	cout<<"after"<<endl;
	for (auto &i : aa){
		cout<<i<<" ";
	}
	cout<<endl;
	return 0;
}
