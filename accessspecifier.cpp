#include<iostream> 
using namespace std; 
class MyClass
{ 
 public: 
  int publicVar; 
 private: 
  int privateVar; 
 protected: 
     int protecteVar; 
 public: 
     void setPrivateVar(int val){ 
      privateVar=val; 
  } 
  int getPrivateVar(){ 
   return privateVar; 
  } 
}; 
int main()
{ 
 MyClass obj; 
 obj.publicVar=10; 
 obj.setPrivateVar(20); 
 cout<<"Public var:"<<obj.publicVar<<endl; 
 cout<<"Private var:"<<obj.getPrivateVar()<<endl; 
 return 0; 
}
