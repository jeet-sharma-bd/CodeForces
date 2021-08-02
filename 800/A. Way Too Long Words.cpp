#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
		cin>>n;
	string word;
	
			for(int i=0;i<n;i++){
				cin>>word;
				int l=word.size();
				if(l>10){
					for(int j=0;j<l;j++){
					if(j==0 || j==l-1)
						cout<<word.at(j);
					else if(j==1){
						cout<<l-2;
					}
					}
				}else
				cout<<word;
				
				cout<<endl;
				
			}
	

		
	
    return 0;
}
 
