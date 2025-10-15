#include<iostream>
using namespace std;
int divide(int a,int b){
	if(b == 0){
		throw"Division by zero error!";
	}
	return a/b;
}
int main()
{
	int x=10,y=0;
	try{
		int result = divide(x,y);
		cout<<"Result:"<<result<<endl;
	}
	catch(const char*msg){
		cout<<"Exception caught:"<<msg<<endl;
	}
	cout<<"Program continues after exception handling."<<endl;
	return 0;
}
