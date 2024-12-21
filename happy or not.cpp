#include<iostream>
using namespace std;
int main()
{
	int number;
	cout<<"enter the number: ";
	cin>>number;
	if(number/10==7 &&number/7==0){
		cout<<"the given number is not a happy number ";
	}
	else{
		cout<<"the given number is a happy number";
	}
	return 0;
}
