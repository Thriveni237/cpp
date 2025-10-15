#include<iostream> 
using namespace std; 
void greet(string name, string message = "Hello")
{ 
cout<<message<<","<<name<<"!"<<endl; 
} 
int main(){ 
greet("Alice"); 
greet("Bob", "Good morning"); 
return 0; 
}
