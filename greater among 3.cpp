#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3;
	cout<<"enter num1";
	cin>>num1;
	cout<<"enter num2";
	cin>>num2;
	cout<<"enter num3";
	cin>>num3;
	if(num1>num2 && num1>num3){
		cout<<"the num1 greater"<<endl;
	}
	else if(num2>num3 && num2>num1){
		cout<<"the num2 is greater"<<endl;
	}
	else{
		cout<<"num3 is greater"<<endl;
	}
	return 0;
}
