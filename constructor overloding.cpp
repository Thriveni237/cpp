#include<iostream>
using namespace std;
class Rectangle{
	private:
		int length;
		int width;
		public:
			Rectangle(){
				length=0;
				width=0;
				cout<<"Default constructor called."<<endl;
			}
			Rectangle(int l){
				length=l;
				width=l;
				cout<<"constructor with one parameter called."<<endl;
			}
			Rectangle(int l,int w){
				length=l;
				width=w;
				cout<<"constructor with two parameters called."<<endl;
			}
			void displayarea(){
				cout<<"AREA="<<(length*width)<<endl;
			}
};
int main()
{
	Rectangle r1;
	Rectangle r2(5);
	Rectangle r3(4,6);
	r1.displayarea();
	r2.displayarea();
	r3.displayarea();
	return 0;
}
