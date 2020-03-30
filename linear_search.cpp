#include<iostream>
#include<vector>
using namespace std;
bool result;
void linear(vector<int> vect,int n){
	vector<int> index;
	for(auto i=0;i<vect.size();i++)
		if(n==vect[i]){
			result=n==vect[i];
			index.push_back(i);
		}
	if(result){
		cout<<"element has been found @ :";
		for(auto i: index)
			cout<<i+1<<" ";
		cout<<endl;
	}

	else
		cout<<"element not found\n";	

};

int main(){
	vector<int> vect={3,3,5,2,56,66,222};
	for(int i : vect)
		cout<<i<<" ";
	int n;
	cout<<"\nenter the number to search :";
	cin>>n;
	linear(vect,n);
}
