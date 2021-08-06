#include<bits/stdc++.h>
using namespace std;

int main(){
int t,n;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		cin>>arr[0];
			for(int i=1;i<n;i++){
				cin>>arr[i];
			}	
			if(arr[0] !=arr[1] and arr[1]== arr[2]){
				cout<<"1"<<endl;
			}else{
				for(int j=0;j<n;j++){
					for(int k=0;k<n;k++){
						if(arr[j]!=arr[k]){
							cout<<k+1<<endl;
							k=j=n;
							break;
						}
					}				
				}
			}	
		
	}
}
 
