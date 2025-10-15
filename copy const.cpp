//copy constructor
#include<iostream>
using namespace std;
class student{
	private:
		string name;
		int roll;
	public:
		//parameterized constructor
		student(string n,int r){
			name = n;
			roll = r;
			cout<<"Parameterized constructor called."<<endl;
		}	
		//copy constructor
		student(const student&s){
			name = s.name;
			roll = s.roll;
			cout<<"copy constructor called."<<endl;
		}
		void display(){
			cout<<"Name:"<<name<<", Roll:"<<roll<<endl;
		}
};
int main()
{
	student s1("Alice",101);//calls parameterized constructor
	student s2=s1;//copy constructor
	s1.display();
	s2.display();
	return 0;
}
