#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
int x=5,a=0,j=1;
string arr;
 string str;
	for(int i=0;i<t;i++){
		cin>>str;
			while(j){
				if((str[0]=='O' and str[1]=='O')){
					str[0]='+';
					str[1]='+';
					j=0;
					a=1;
					break;
				}else if((str[3]=='O' and str[4]=='O')){
					str[3]='+';
					str[4]='+';
					j=0;
					a=1;
					break;
				}else{
					break;
				}
				
			}
			for(int k=0;k<5;k++){
				arr.push_back(str[k]);
			}
			
		
	}
	if(a){
			int c=0;
			cout<<"YES"<<endl;
	for(int i=0;i<arr.size();i++){
		cout<<arr[i];
		c++;
		if(c==5){
			cout<<endl;
			c=0;
		}
		
	}
	}else{
		cout<<"NO"<<endl;
	}

}
