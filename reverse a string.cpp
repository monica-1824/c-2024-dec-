#include<algorithm>
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str;
	cout<<"enter the string: ";
	cin>>str;
	cout<<"the given string is: "<<str<<endl;
	reverse(str.begin(), str.end());
	cout<<"reversed string: "<<str<<endl;
	return 0;
}
