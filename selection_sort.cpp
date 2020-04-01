#include <iostream>
using namespace std;

int *sorted(int array[],int n){
	int min=0;
	for(int i=0;i<n-1;i++){
		min=i;
		for(int j=i+1;j<n;j++){
			if(array[j]<array[min])
				min=j;
			swap(array[i],array[min]);
		}
	}
	return array;
};

void print_array(int array[],int n){
	for(auto i=0;i<n;i++)
		cout<<array[i]<<" ";
	cout<<endl;
};

int main(){
	int arry[] = {5,2,6,6,6,1,9,3};
	auto size = sizeof(arry) / sizeof(arry[0]);
	print_array(arry,size);
	int *sort = sorted(arry,size);
        print_array(sort,size);	
}
	
