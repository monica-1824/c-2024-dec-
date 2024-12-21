#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3,max;
	cout<<"enter num1";
	cin>>num1;
	cout<<"enter num2";
	cin>>num2;
	cout<<"enter num3";
	cin>>num3;
	max=(num1>num2)?
	(num1>num3 ? num1:num3):
		(num2>num3 ? num2:num3);
		cout<<"the greatest among the three numbers is: "<<max<<endl;
		return 0;
	
}
