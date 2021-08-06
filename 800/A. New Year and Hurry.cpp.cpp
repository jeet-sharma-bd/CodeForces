#include<bits/stdc++.h>
using namespace std;

int main(){
int n,t,p=0,temp=0;
cin>>n>>t;
	for(int i=1;i<=n;i++){
		p+=i*5;
			if(p+t<=240){
				temp=i;
			}
	}
	cout<<temp<<endl;
}
 
