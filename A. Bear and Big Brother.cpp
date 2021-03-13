#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,cnt=0;
	cin>>a>>b;
	if(a<=b){
		for(;;){
			if(a>b)
			break;
			else{
				a*=3;
				b*=2;
			}
			cnt++;
		}
	}

	cout<<cnt<<endl;
	return 0;
}
