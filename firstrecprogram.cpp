#include<bits/stdc++.h>
using namespace std;

static void print(int n){
	if(n==10){
		cout<<n;
		return;
	}
	cout<<n<<"\n";

	print(n+1);
}



int main(){
	print(1);
	return 0;
}
