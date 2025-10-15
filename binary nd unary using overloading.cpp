#include<iostream>
using namespace std;
class number{
	private:
		int value;
	public:
		//constructor
		number(int v=0){
			value = v;
		}
		//friend funtion to overload unary minus(-)
		friend number operator-(number n);
		//friend function to overload binary plus(+)
		friend number operator+(number n1,number n2);
		//display function
		void display() const{
		cout<<"value = "<<value<<endl;
		}
};
		//unary minus operator using friend function
	number operator-(number n)
	{
		return number(-n.value);
	}
		//binary addition operator using friend function
	number operator+(number n1,number n2)
	{
		return number(n1.value + n2.value);
	}
int main()
{
	number a(15),b(5),result;
	cout<<"Original Values:"<<endl;
	a.display();
	b.display();
	//binary operator +
	result=a+b;
	cout<<"After Binary + Operator(a+b):"<<endl;
	result.display();
	//unary operator -
	result = -a;
	cout<<"After unary - operator(-a):"<<endl;
	result.display();
	return 0;
}
