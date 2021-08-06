#include<bits/stdc++.h>
using namespace std;

int main(){
int t,n,temp,L=1,R=0;
cin>>t>>n;
temp=n;
	for(int i=1;i<=t;i++){
		for(int j=0;j<n;j++){
			if(i%2!=0){
				while(temp--){
					cout<<"#";
				}
				cout<<endl;
				temp=n;
				j=n;
			}else if(i%2==0 and R==0){
				while(--temp){
					cout<<".";
				}
				cout<<"#"<<endl;
				L=0;R=1;
				temp=n;
				j=n;
			}
			else if(i%2==0 and L==0){
				cout<<"#";
				while(--temp){
					cout<<".";
				}
				cout<<endl;
				L=1;R=0;
				temp=n;
				j=n;
			}
		}
	}
}
 
