#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	int a=1;
int arr[t];
		while(t--){
			cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
				int a=max(arr[0],arr[1]);
				int b=max(arr[2],arr[3]);
				int r=min(a,b);
				
				for(int i=0;i<4;i++){
					if(((arr[i]>a) || (arr[i]> b )) and (arr[i] !=a) and (arr[i] != b)){
						cout<<"NO"<<endl;
						a=0;
						break;
					}
				}
				
				if(a){
					cout<<"YES"<<endl;
				}
						
		}
}
