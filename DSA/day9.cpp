#include<iostream>
using namespace std;
int main(){
	int a = 5;
	int b = 11;
	for(int i = a,j=b;j<=a,i>=b;i++,j--){
		if(i%2!=0){
			cout<<i<<" ";
		}
		if(j%2==0){
			cout<<j<<" ";
		}
	}

		
}