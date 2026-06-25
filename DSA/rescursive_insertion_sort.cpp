#include<iostream>
#include <bits/stdc++.h>
using namespace std;
void is(arr,i){
	if(i==n) return;
	int temp = arr[i];
	int j=i-1;
	while(j>=0&&temp<arr[j]){
		arr[j+1] = arr[j];
		j--;
	}
	arr[j+1] = temp;
	is(arr,i+1);
	
}

int main(){
	
}