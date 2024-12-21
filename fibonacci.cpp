#include<iostream>
using namespace std;
int main()
{
	int i,num;
	cout<<"enter the number: ";
	cin>>num;
	int first=0,second=1,next;
	for(i=0;i<num;i++)
	{
		if(i<=1){
			next=i;
		}
		else{
			next=first+second;
			first = second;
			second=next;
		}
		cout<<"the fibonacci series: "<<next<<endl;
	}
	
	return 0;
}
