#include<bits/stdc++.h>
using namespace std;

int main(){
	long long m,n;
vector<long long int>arr;
	cin>>m>>n;
		
		long long half=(m+1)/2;
		if(half>=n){
			cout<<n*2-1<<endl;
		}else{
			cout<<abs(n-half)*2<<endl;
		}
		
}
