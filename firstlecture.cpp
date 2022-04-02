#include<bits/stdc++.h>
using namespace std;
bool binary_search(int arr[],int n,int x){
	int low=0,high=n-1;
	int mid=(low+high)/2;
	while(low<high){
		mid=(low+high)/2;
		if(arr[mid]==x){
			return true;
		}else if(arr[mid]>x){
			high=mid-1;
		}else{
			low=mid+1;
		}
	}
	return false;
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		int x;
		cin>>x;
		cout<<binary_search(arr,n,x);
	}
}
