#include<iostream>
using namespace std;
class ex
{
	private:
				int p;
	protected:
				int q;
	public:
				int r;
void getp()
 {
p=10;
cout<<"private="<<p<<endl;
}
void getq()
{
q=10;
cout<<"protected="<<q<<endl;
}
void getr()
{

cout<<"public="<<r<<endl;
}
};

int main()
 { 
 
 ex e; 
 e.getp();
e.getq();
e.r=100;
e.getr();
e.r=200;
e.getr();
return 0;
}

