#include<bits/stdc++.h>
using namespace std;

int main(){
int x,y,z;
cin>>x>>y>>z;
int a=x+z-y;
int b=x-z-y;
	if(b>0){
		cout<<"+"<<endl;
	}else if(a<0){
		cout<<"-"<<endl;
	}else if( a==b){
		cout<<"0"<<endl;
	}else{
			cout<<"?"<<endl;
	}
}
 
