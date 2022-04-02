#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin); 
freopen("output.txt","w",stdout); 
#endif

	// Your code here
	int l;
	cin>>l;
	char arr[l];
	for(int i=0;i<l;i++){
		cin>>arr[i];
	}
	int cN=0,cT=0;
	for(int i=0;i<l;i++){
		if(arr[i]=='N'){
			cN++;
		}else{
			cT++;
		}
	}
	if(cN>cT){
		cout<<"Nutan"<<"\n";
	}else{
		cout<<"Tusla"<<"\n";
	}
	return 0;
}