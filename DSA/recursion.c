#include<stdio.h>
void bprint(int i,int n){
	if(i>n){
		return;
	}
	bprint(i+1,n);
	printf("%d",i);
}

int main(){
	bprint(1,5);
}