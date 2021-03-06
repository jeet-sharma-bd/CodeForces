#include<bits/stdc++.h> 

using namespace std;

int main(){
	string s1,s2;
	cin>>s1>>s2;

transform(s1.begin(), s1.end(), s1.begin(),
    [](unsigned char c){ return std::tolower(c); });

transform(s2.begin(), s2.end(), s2.begin(),
    [](unsigned char c2){ return std::tolower(c2); });

	if(s1== s2){
		cout<<"0"<<endl;
	}else if(s1<s2){
		cout<<"-1"<<endl;
	}else if(s1>s2){
		cout<<"1"<<endl;
	}
}
