#include<iostream>
using namespace std;
int main()
{
	char op;
	float n1,n2;
	cout<<"Enter operator:";
	cin>>op;
	cout<<"Enter numbers:";
	cin>>n1>>n2;
	switch(op)
	{
		case '+':
			cout<<n1<<"+"<<n2<<"="<<n1+n2;
			break;
		case '-':
			cout<<n1<<"-"<<n2<<"="<<n1-n2;
			break;
		case '*':
			cout<<n1<<"*"<<n2<<"="<<n1*n2;
			break;
		case '/':
			if(n2!=0)
				cout<<n1<<"/"<<n2<<"="<<n1/n2;
			else
				cout<<"n2 is invalid!";
			break;
		default :
			cout<<"INVALID OPERATOR";
	}
	return 0;
}
