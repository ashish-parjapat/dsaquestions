#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int l,int m,int h){
	int n1=m-l+1,n2=h-m;
	int left[n1];
	int right[n2];
	//int complete[n+n2];

	for(int i=0;i<n1;i++){
		left[i]=arr[l+i];
	}

for(int j=0;j<n1;j++){
		right[j]=arr[m+j+1];
	}


	int i=0,j=0,k=0;
	while(i<n1&&j<n2){
		if(left[i]>right[j]){
			arr[k]=right[j];
			j++;
		}
		if(left[i]<=right[j]){
			arr[k]=left[i];
			i++;
		}
		k++;
	}while(i<n1){
		arr[k]=left[i];
		i++;
		k++;
	}
	while(j<n2){
		arr[k]=right[j];
		j++;
		k++;
	}


}
void merge_sort(int arr[],int l,int h){
	if(l<h){
		int m=(l+h)/2;
		merge_sort(arr,l,m);
		merge_sort(arr,m+1,h);
		merge(arr,l,m,h);
	}
}


int main(){
	#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin); 
freopen("output.txt","w",stdout); 
#endif
	
	
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
    merge_sort(arr,0,4);
    for(int i=0;i<n;i++){
    	cout<<arr[i]<<" ";
    }
}
