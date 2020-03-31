#include <iostream>
#include <vector>
using namespace std;
void binary(int bin[],int low,int high,int key){
	int NO;
	if(high >= low){
		int mid=low+(high-low)/2;

		if(bin[mid] == key){
			cout<<"mid";
			NO = -1;
		}
		else if(key < bin[mid])
			binary(bin,low,mid-1,key);
		else 
			binary(bin,mid+1,high,key);
	}
	else
		cout<<"not found";
		
};

int main(){
	int bin[]= {2,4,5,8,9,11,15,17,19};
	int size = sizeof(bin) / sizeof(bin[0]);
	for(auto i : bin)
		cout<<i<<" ";
	cout<<endl<<size<<endl;
	int key;
	cout<<"enter the element to search :";
	cin>>key;
	binary(bin,0,size,key);
	/*(if(result == -1)
		cout<<"element not found"<<endl;
	else
		cout<<"element fount @"<<result+1<<endl;
		*/
}
