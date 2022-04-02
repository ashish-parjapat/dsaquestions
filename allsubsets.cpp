#include<bits/stdc++.h>
using namespace std;
void allsubsets(string &s,string curr="",int i=0){
	if(i==s.length()){
		cout<<curr<<" ";
		return ;
	}allsubsets(s,curr,i+1);
	allsubsets(s,curr+s[i],i+1);
}
int main(){
	string s="abc";
	string curr="";
	int i=0;
	allsubsets(s,curr,i);

}