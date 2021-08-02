#include<bits/stdc++.h>
using namespace std;
int lastDigit(int n) 
{ 
    return (n % 10); 
} 
int main()
{
	int64_t n;
	int cnt=0;
	cin>>n;
	int size = trunc(log10(n)) + 1;
	if(n<1000 ){
		cout<<"NO"<<endl;
	}else{
		for(int i=0;i<size;i++){
			int r=n%10;
			if(r==4 or r==7){
				cnt++;
			}				
			n/=10;
		}
		if(cnt==4 or cnt == 7)
			cout<<"YES"<<endl;
		else{
			cout<<"NO"<<endl;
		}
		
	}
	


		
}
