#include<bits/stdc++.h>
using namespace std;
void TOH(int n,int a,int b,int c){
	if(n==1){
		 cout<<"Move 1 from " <<  a << " to " << c << endl; 
		return;
	}TOH(n-1,a,c,b);
	 cout<<"Move " << n << " from " <<  a << " to " << c << endl; 

	TOH(n-1,b,a,c);


}

int main(){
	int n=4;
	int a=1,b=2,c=3;
	TOH(n,a,b,c);

}