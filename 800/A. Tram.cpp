#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,temp=0,m=0;
	cin>>t;
	int inter,exit;
	cin>>exit>>inter;
		for(int i=0;i<t-1;i++){
			 temp=abs((temp-exit)+inter);
			 m=max(temp,m);	
			cin>>exit>>inter;
			
		}			
		cout<<m<<endl;
	return 0;
}
