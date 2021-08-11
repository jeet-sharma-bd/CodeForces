#include<bits/stdc++.h>
using namespace std;

int main(){
	string str,s;
	cin>>str;
	for(int i=0;i<str.size();i++){
	 if(str[i]=='-' and str[i+1]=='.'){
			s.push_back('1');
			i++;
		}else if(str[i]=='-' and str[i+1]=='-'){
			s.push_back('2');
			i++;
		}else if((str[i]=='.' )||( str[i]=='.' and str[i+1]=='.')){
			s.push_back('0');
		}
	}
	cout<<s<<endl;
}
