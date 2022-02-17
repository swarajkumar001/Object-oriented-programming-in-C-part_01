//copy assignment operator .....




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
	student s2=s1; // by using this we can get our desired result ...think how this line is interpreting
	cout<<" s2 : ";
	s2.display();
	//dynamically
	
	student (*s3)=new student(39,10034);
	cout<<" s3 : ";
	s3->display();
	student (*s4)= new student (100,4567);
	(*s4)=(*s3);
	cout<<" s4 : ";
	s4->display();
	student (*s5)= new student (100,4567);
	(*s5)=s1;
	cout<<" s5 : ";
	s5->display();
	
	
	
	
	
}
