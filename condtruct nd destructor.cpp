#include<iostream>
using namespace std;
class student{
	private:
		string name;
		int roll;
		
	public:
		//constructor
	 student(string n,int r){
	 	name=n;
	 	roll=r;
	 	cout<<"Constructor called for "<<name<<endl;
	 }
	//member function to display student details 
	    void display(){
	    	cout<<"Name:"<<name<<", Roll: "<<roll<<endl;
		}
	//Destructor
	~student(){
		cout<<"destructor called for "<<name<<endl;
	}
};
int main(){
	student s1("Alice", 101);
    //constructer is called 
    student s2("Bob", 102);
    //constructer is called
    s1.display();
    s2.display();
    return 0;
}
