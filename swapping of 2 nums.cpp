#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"enter the num1";
	cin>>num1;
	cout<<"enter num2";
	cin>>num2;
	cout<<"before swapping num1= "<<num1<<"num2= "<<num2<<endl;
	num1=num1*num2;
	num2=num1/num2;
	num1=num1/num2;
	cout<<"after swapping num1= "<<num1<<"num2= "<<num2<<endl;
	return 0;
	
}

