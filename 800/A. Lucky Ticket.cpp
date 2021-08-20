#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
string str;
int a=1;
	cin>>str;
		if(t==2){
			if((str[0]=='4' or str[0]=='7' )or (str[1]=='7' or str[1]=='4')){
				if(str[0]==str[1]){
						cout<<"YES"<<endl;
				}else{
					cout<<"NO"<<endl;
				}				
			}else{
					cout<<"NO"<<endl;
				}
		}else{
				for(int i=0;i<str.size();i++){
					if(str[i]=='4' or str[i]=='7'){
					}else{
						a=0;
						break;
					}
				}
				
				int r=0,l=0;
				if(a){
				
					for(int j=0;j<str.size()/2;j++){
							l+=(int)str[j];
							l-=48;
					}
					for(int k=str.size()/2;k<str.size();k++){
							r+=(int)str[k];
							r-=48;
					}
						
				}
				if(r==l and a==1){
					cout<<"YES"<<endl;
				}else{
					cout<<"NO"<<endl;
				}
		}
	
}
