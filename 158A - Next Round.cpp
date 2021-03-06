#include<iostream>
using namespace std;

int main(){
	int n,p;
	cin>>n>>p;
	int cnt=0;
	
	int arr[n+1];
	
		for( int j=0;j<n;j++){
			cin>>arr[j];
		}
		
		for( int i=0;i<n;i++)
		{
			if(arr[i] >= arr[p-1] && arr[i] > 0)
			{
				cnt++;		
			}
	}

	
	cout<<cnt<<endl;
}
