#include<iostream>
#include <bits/stdc++.h>
using namespace std;
int main(){
	int arr[4] = {6,4,3,1};
	int n = 4;
	for(int i=1;i<n;i++){
		int temp = arr[i];
		int j=i-1;
		while(j>=0&&temp<arr[j]){
			arr[j+1] = arr[j];
			j--;
			
		}
		arr[j+1] = temp;
	}
	
	for(int i=0;i<n;i++){
		cout<<arr[i];
	}
}