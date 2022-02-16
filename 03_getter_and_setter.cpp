
// hoe to get the private value and how to set the private value
#include <iostream>
using namespace std;
class student{
	
	private :
		int age;
		public:
	int rollno;
		void display(){
			
			cout<<"age : "<< age<<" "<<" rollno : "<<rollno<<endl;
		}
		void set_age( int a){
			age=a;
		}
		int get_age(){
			return age;
		}
	
};






int main(){
	//statically
	student s1;
	s1.set_age(28);
	s1.rollno=1;

	
	
	
	//dynamocally
	student *s2=new student;  
	s2->set_age(25);
	(*s2).rollno=2;
	cout<<" data of s1"<<endl;
		
	s1.display();
		cout<<" data of s2"<<endl;
	s2->display();	
	
	
}
