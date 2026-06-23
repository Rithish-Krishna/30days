#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cout<<"Enter the lenght of the array: ";
	cin>>n;
	cout<<"Enter array elements\n";
	int arr[n];
	for(int i = 0; i<n; i++){
		cin>>arr[i];
	}
	//precomputing the hashtable
	map<int,int>mp;
	for(int i = 0;i<n;i++){
		mp[arr[i]]++;
	}
	cout<<"Number of occurence of each number\n";
	int l = 0;
	int ln = 0;
	int s = 9999999;
	int sn = 0;
	for(auto x: mp){
		if(x.second>l){
			ln = x.first;
			l = x.second;
		}
		if(x.second<s){
			s = x.second;
			sn = x.first;
		}
		cout<<x.first<<" "<<x.second<<"\n";
	}
	cout<<"The number with the highest repeates freq: "<<ln;
	cout<<"\n The number with the lowest freq: "<<sn;
	
	
}