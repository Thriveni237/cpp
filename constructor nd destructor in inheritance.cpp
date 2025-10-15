#include<iostream>
using namespace std;
class a{
	public:
		a()
		{
			cout<<"base constructor"<<endl;
		}
		~a()
		{
			cout<<"base destructor"<<endl;
		}
};
class b:public a{
	public:
		b(){
			cout<<"derived constructor"<<endl;
		}
		~b(){
			cout<<"derived destructor"<<endl;
		}
};
int main(){
	b obj;
	return 0;
}
