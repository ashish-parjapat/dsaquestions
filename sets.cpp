#include<bits/stdc++.h>
using namespace std;

int makeBeautiful(string str) {
	int count=0;
    if(str[0]=='0'){
        for(int i=1;i<str.length();i++){
            if(str[i]!='1'&&str[i+1]!='0'){
                count++;
            }
            
        }
    }else{
        for(int i=1;i<str.length();i++){
             if(str[i]!='0'&&str[i+1]!='1'){
                count++;
            }
            
            
        }
    }
    return count;
}





int main(){
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin); 
freopen("output.txt","w",stdout); 
#endif


string str;
cin>>str;
cout<<makeBeautiful(str);






}