#include<bits/stdc++.h>
using namespace std;

int main(){
int str;
cin>>str;
	
		int a=str%10;
		if(a==0){
			cout<<str<<endl;
		}else{
			if(a>5){
				for(int i=a;i<=10;i++){
					str++;
					if(str%10 == 0){
						break;
					}
				}
			}else{
				for(int i=a;i<=10;i++){
					str--;
					if(str%10 == 0){
						break;
					}
				}
			}
				cout<<str<<endl;
		}
	
}
 
