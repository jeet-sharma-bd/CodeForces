#include<bits/stdc++.h>
using namespace std;

int main(){
int t,c=0;
cin>>t;
	while(t--){
		int n;
			cin>>n;
			int arr[n*2];
			for(int i=0;i<n*2;i++){
				cin>>arr[i];
			}
			
			
				int odd=0,even=0;	
					for(int j=0;j<n*2;j++){
							if(arr[j] %2 ==0){
								even++;
							}							
							else{
								odd++;
							}
					}
				if((odd==even)){
					cout<<"YES"<<endl;
				}else{
						cout<<"NO"<<endl;
				}
			
				
	}
}
