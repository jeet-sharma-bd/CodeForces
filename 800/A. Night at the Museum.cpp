#include<bits/stdc++.h>
using namespace std;

int main(){
 string str("0abcdefghijklmnopqrstuvwxyz");
	string x;
	cin>>x;
int n;
	int s;	
		int r=str.find(x[0]);
			s=str.find('a');
			if(abs(s-r) > 13){
				s=abs(s-r);
				n=abs(s-26);
			}else{
				n=abs(s-r);
			}
		for(int i=0;i<x.size()-1;i++){	
			r=str.find(x[i]);
			s=str.find(x[i+1]);
			if(abs(s-r) > 13){
				s=abs(s-r);
				n+=abs(s-26);
			}else{
				n+=abs(s-r);
			}
		}
		cout<<n<<endl;
		
}
