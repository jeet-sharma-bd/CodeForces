#include<iostream>
using namespace std;

int main(){
	int n;
	int cnt=0,flag=0;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++){
		for( int j=0;j<3;j++){
			cin>>arr[j];
		}
		if(arr[0]+arr[1]+arr[2] >= 2){
			flag++;
		}
	}
	cout<<flag<<endl;
}
