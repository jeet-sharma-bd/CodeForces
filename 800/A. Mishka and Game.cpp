#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,ms=0,cs=0;
	cin>>t;
	while(t--){
		int m,c;
		cin>>m>>c;
		if(m>c){
			ms++;
		}else if(c>m){
			cs++;
		}
	}
		
			if(ms>cs){
				cout<<"Mishka"<<endl;
			}else if(ms==cs){
				cout<<"Friendship is magic!^^"<<endl;
			}else{
				cout<<"Chris"<<endl;
			}
		
}
