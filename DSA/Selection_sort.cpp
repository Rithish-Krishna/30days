#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int arr[4] = {2,3,4,2};
	int n = 4;
	for(int i = 0;i<n;i++){
		int minindex = i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[minindex]){
				minindex = j;
			}
		}
		swap(arr[i],arr[minindex]);
	}
	for(int i = 0; i<n;i++){
		cout<<arr[i]<<" ";
	}
}