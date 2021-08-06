#include<bits/stdc++.h>
using namespace std;

int main(){
int t;
cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
			for(int i=0;i<n;i++){
				cin>>arr[i];
			}
			if(n%2!=0){
				if(n==1){
					cout<<arr[0];
				}
				else{
					for(int i=0,j=n-1;i<n/2+1;i++,j--){
						if(i<j){
							cout<<arr[i]<<" "<<arr[j]<<" ";
						}
						else if(i =j){
								cout<<arr[i];
							}
					}
				}
				
			}else{
				for(int i=0,j=n-1;i<n/2+1;i++,j--){
					if(i<j){
						cout<<arr[i]<<" "<<arr[j]<<" ";
					}
				}
			}
			cout<<endl;
			
	}
}
 
