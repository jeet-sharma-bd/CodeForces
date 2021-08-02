// C++ program to sort a string of characters 
#include<bits/stdc++.h> 
using namespace std; 
  

void sortString(string &str) 
{ 
   sort(str.begin(), str.end()); 

} 

int main() 
{ 
    string s;
    cin>>s;
    sortString(s);  
    	
    	for(int i=s.size()/2;i<s.size();i++){
    		
    		cout<<s[i];
    		if(i+1 != s.size()){
    			cout<<"+";
			}
		}
    cout<<endl;
    return 0; 
} 
