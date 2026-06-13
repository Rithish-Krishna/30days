#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int left = n;
	int right = left;
	cout<<left;
	cout<<right<<endl;
	for(int i=0;i<n;i++){
		for(int j=1;j<=(n*2)-1;j++){
			if(j>=left&&j<=right){
				cout<<"*";
			}
			else{
				cout<<" ";
			}	
		}
		left-=1;
		right+=1;
		cout<<endl;
	}


}