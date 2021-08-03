#include<bits/stdc++.h>
using namespace std;

int main(){
	int t,sum=0;
		cin>>t;
		for(int i=0;i<t;i++){
			int n,m=0;
			cin>>n>>m;
			int a[n],b[n];
			for(int i=0;i<n;i++){
				cin>>a[i];
			}
				for(int i=0;i<n;i++){
				cin>>b[i];
			}
			sort(a,a+n);
			sort(b,b+n);
			
				for(int j=0;j<n;j++){
					for(int k=n-1;k>=0;k--){
							if(a[j]<b[k] and m!=0){							
									swap(a[j],b[k]);
									m--;
							}	
					}
				}
				for(int i=0;i<n;i++){
					sum+=a[i];
				}
				cout<<sum<<endl;
				sum=0;
		}
}
