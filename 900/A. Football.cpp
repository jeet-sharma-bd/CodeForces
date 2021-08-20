#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	cin>>str;
	int c=1,ma=0;
		for(int i=0;i<str.size();i++){
			
			if(str[i]==str[i+1]){
				c++;
				if(c>=7){
					ma=c;
				}
			}else{
				c=1;
			}
		}
		if(ma>=7){
			cout<<"YES"<<endl; 
		}else{			
			cout<<"NO"<<endl;
		}
}
