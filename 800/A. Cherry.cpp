#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
	while(t--){
		long long n;
		cin>>n;
		long long arr[n];
		long long ma,mi,temp=0;
			cin>>arr[0];
			for(int i=1;i<n;i++){
				cin>>arr[i];
				ma=max(arr[i-1],arr[i]);
				mi=min(arr[i-1],arr[i]);
				if(temp<ma*mi){
					temp=ma*mi;	
				}
			}
			cout<<temp<<endl;
	}
}
