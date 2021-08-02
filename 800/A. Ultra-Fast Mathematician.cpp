
#include<bits/stdc++.h>
using namespace std;

int main(){
	char str[1000];
	char str2[1000];
	string arr;
	
	cin>>str>>str2;
	for(int i=0;str[i]!='\0';i++){
		if(str[i] != str2[i]){
			char m='1';
			arr.push_back(m);
		}else
		arr.push_back('0');
	
	}
	
for(int i=0;i<arr.size();i++){
	cout<<arr[i];
}
cout<<endl;
arr.clear();
}
