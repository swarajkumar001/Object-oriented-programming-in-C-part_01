//default  constructor..........




#include <iostream>
using namespace std;

class student{
	
	int age;
	
	public:
		int rollno;
		
		void display(){
			
			cout<<"age : "<<age <<" "<<" roll no "<< rollno<<endl;
			
		}
		student (int age,int rollno){
			this->age=age;
			this->rollno=rollno;
			
		}
		
		
	
	
	
	
};

int main(){
	
	//statically
	student s1(23,1002);
	cout<<" s1 : ";
	s1.display();
	// if we want to copy all the value of the s1 in s2 ...
	student s2(s1);  // by using this we can get our desired result ...think how this line is interpreting
	cout<<" s2 : ";
	s2.display();
	// dynamically 
	student (*s6)=new student(25,1003);
	cout<<" s6: ";
	s6->display();
	
	student s7(*s6);
	cout<<" s7: ";
	s7.display();
	
	student (*s8)=new student(*s6);
	cout<<" s8: ";
	s8->display();
	
	student (*s9)=new student(s1);
	cout<<" s9: ";
	s9->display();
	
	
	
	
	
}
