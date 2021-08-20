#include<bits/stdc++.h>
using namespace std;

int main(){
srand(time(NULL));
int n,k,i;
cin>>n>>k;
int  v=0;
	string str="abcdefghijklmnopqrstuvwxyz";
string vec;
	while(1){
	
		
			for( i=0;i<k;i++){
				
				vec.push_back(str[i]);
				v++;
					if(v==n){
						break;
					} 
			}
			
			if(v==n){
				break;
			}
		
	}
	
	
cout<<vec<<endl;

}
