#include<bits/stdc++.h> 

using namespace std;

int main(){
int i,j,x;
i=j=5;
	while(i){
		
		while(j){
				cin>>x;
				
			if(x==1)
			cout<<abs(i-3)+ abs(j-3)<<endl;
			
			j--;
		}
		j=5;
		i--;
	}
		

}
