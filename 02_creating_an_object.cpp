//let us make a class of student which gives age and roll_no. of the student
class student{
// by default all the properties of thenclass is private..
// to make it public.. follow the below rule ....

    public:
	int age;
	int roll_no;
	
	
	
	
};







#include <iostream>
using namespace std;
int main(){
	
//craeting object statically....
	// as we use to write to make variable as 
	//int a=5;       we follow thw same rule here...
	student s1; //craeting an object
	
	/*
	as object is created as 
	_______________
	| age ;    
	|  roll_no;
	|
	|______________
          s1
	*/
	 
	 s1.age=23; // assigning value...
	 s1.roll_no=1;
	 cout<<"statically"<<endl;
	
	 cout<<"age of s1 : "<<s1.age<<endl;
	 cout<<"roll number of s1 : "<<s1.roll_no<<endl;
	
	

	student s2,s3,s4; //we can also make multiple class 
	
	
	
	
	// creating object dynamically...
	// as we use to write to make variable as 
	// int *a=new int;   we r going the follow the same rule here....
	student *s5=new student;
	
		(*s5).age=27;
	(*s5).roll_no=2;
	 cout<<"dynamically"<<endl;
	cout<<"age of s5 : "<<	(*s5).age<<endl;
	 cout<<"roll number of s5 : "<<(*s5).roll_no<<endl;
	 
	 //we also assign by this way 
	 s5->age=28;
	 s5->roll_no=3;
	 cout<<"age of s5 by using this operator : "<<	s5->age<<endl;
	 cout<<"roll number of s5 using this operator : "<< s5->roll_no<<endl;
	 
	
	
	
	
	
	
	
	
	
	
	
	
	
}




