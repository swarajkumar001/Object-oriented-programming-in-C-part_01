
// constructor and this keyword

#include <iostream>
using namespace std;
class student{
	int rollno;
	
	public:
	int age;
	
	
	//default constructor
	// any constructor have no return type value....
	
	
	student(){
		cout<<"default constructor called !!!!"<<endl;
	}
	
	//parametrised constructor 
	student ( int r){
		
		cout<<"parametrised constructor 1 called !!! "<<endl;
		rollno=r; // we can aslo write this here but here it is optional for us .... 
	}
	
	student( int rollno, int age ){
		
		cout<<"parametrised constructor 2 called !!! "<<endl;
		this->age =age; // here this is problem . the valuse of age is assigning to age .....so this keyword 
		//is introduce ....
		
		/*
		THIS KEYWORD :- it basically hold the addresss of the current object ....
		
		*/
		this->rollno =rollno;
		
	}
	
	
	void display(){
		cout<<"age : "<<age <<" "<< " rollnumber :  "<<rollno<<endl;
		
	}
		
	
};


int main(){
	
	
	student s1; // as soon as we removed default constructor this line will give error to us 
	
	student *s5=new student;
	s1.display();
	
	// with one argument 
	student s2(1);
	s2.display();
	
	// dynamically
	cout<<" s6 data dynamically with one argument "<<endl;
	student *s6=new student(12);
	s6->display();
	
	// with 2 argument
	student s3(4,24);
	s3.display();
	  // dynamically 
	  student *s7=new student(7,56);
	  cout<<" s7 data dynamically with two argument  argument "<<endl;
	  

	   s7->display();
	/*
	NOTE:- THERE IS ONLY ONE CONSTRUCTOR WILL BE CALLED ...IF THERE IS ANY PARAMETRISED 
	CONSTRUCTOR IS WRITTEN THEN DAFAULT CONSTRUCTOR IS REMOVED FOR THAT CLASS ..
	
	AND CONSTRUCTOR IS ALWAYS CALLED AT THE TIME OF CRAEATION........
	
	
	*/
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}
