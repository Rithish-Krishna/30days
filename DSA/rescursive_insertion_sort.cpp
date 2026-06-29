#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void is(int arr[],int i,int n){
	if(i==n) return;
	int temp = arr[i];
	int j=i-1;
	while(j>=0&&temp<arr[j]){
		arr[j+1] = arr[j];
		j--;
	}
	arr[j+1] = temp;
	is(arr,i+1,n);
	
}

int main(){
	int arr[] = {5,3,52,3};
	int n=4;
	is(arr,0,n);
	
	for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}