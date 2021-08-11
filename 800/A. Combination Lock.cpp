#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	string arr,str;
	cin>>arr;
	cin>>str;
	
	int r=0;
	for(int i=0;i<n;i++){
		int a=(int)arr[i]-48;
		int b=(int)str[i]-48;
		int s=abs(a-b);
		if(s>4)
			s=abs(s-10);
			
		r+=s;
		
	}
	cout<<r<<endl;
}
