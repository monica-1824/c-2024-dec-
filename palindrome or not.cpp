#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
	string str,reverse;
	cout<<"enter the string: ";
	cin>>str;
	cout<<"entered string: "<<str<<endl;
	reverse=string(str.rbegin(),str.rend());
	cout<<"reversed string: "<<str<<endl;
	if(str ==reverse){
		cout<<"the given string is palindrome"<<endl;
	}
	else{
		cout<<"the given string is not palindrome"<<endl;
	}
	return 0;
}
