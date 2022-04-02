#include<bits/stdc++.h>
using namespace std;

 static void print(int n){
	if(n==6){
		cout<<n;
		return;
	}
	cout<<print(n)<<"\n";

}
int main(){
	int n;
	cin>>n;
	print(1);

}