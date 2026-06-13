//patern solved
//     *
//    ***
//   *****
//  *******
// *********
		
// LEARNED 
// THE FIRST LOOP USED TO CONTROL NO.OF LINES
// THE SECOND LOOP IS FOR THE COLUMN CONTROL
		
// USED VARIABLE LEFT AND RIGHT TO CONTROL THE STARS AT LEFT AND RIIGHT 
// STARTS WITH LEFT = N RIGHT = N
// THE STAR IS PRINTED IF IT'S POSITION IS GREATER THAN OR EQUAL TO LEFT AND LESS THAN OR EQUAL TO RIGHT 
		
// 12345(*)6789      LEFT = 5 RIGHT = 5
// 1234(*)5(*)6(*)789  LEFT = 4 RIGHT = 6
// 123(*)4(*)5(*)6(*)7(*)89	LEFT = 3 RIGHT = 7	
		
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
