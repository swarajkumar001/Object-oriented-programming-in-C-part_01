// Fraction class......
/* In this question we will add two fraction f1=f1+f2;
 and update the value of the sum in f1; */
 
 #include <iostream>
 using namespace std;
 
 class fraction{
 
 	 int numerator;
 	 int denominator;
 	 public:
 	 	
 	 	fraction( int numerator,int denominator){ // avoid to store garbage value initially....
 	 		this->numerator=numerator;
 	 		this->denominator=denominator;
		  }
 	 	void print(){
 	 	 	cout<<numerator<<"/"<<denominator<<endl;
 	 	 	
		   }
		   
		   
		void simplify(){
			int gcd=1;
			int j=min(this->numerator,this->denominator);
			for(int i=1;i<=j;i++){
				if(this->numerator%i==0&&this->denominator%i==0){
					gcd=i;
				}
			}
			//cout<<" gcd : "<<gcd<<endl;
			this->numerator=this->numerator/gcd;
			this->denominator=this->denominator/gcd;
			
			
		}   
		
		void multiply( fraction const & f2){ //we r referring here const &  to avoid changes and 
		// making extra spaces .....
			numerator=numerator*f2.numerator;
			denominator=denominator* f2.denominator;
			simplify();
		}
		   
		   
		   
		   
		void add( fraction  const & f2){
		   	int lcm=this->denominator*f2.denominator;
		   	int x=lcm/this->denominator;
		   	int y=lcm/f2.denominator;
		   	
		   	this->numerator=x*this->numerator +y *f2.numerator;
		   	this->denominator=lcm;
		   	//cout<<" this->numerator"<<this->numerator<<endl;
		   	
		   	simplify();
		   	
		   	
		   	
		   	
		   	
		   }
 };
 
 
 
 
 
 
 int main(){
 	fraction f1(10,2); 
 	cout<< " before addition : "<<endl;
 	cout<<"f1: ";
	f1.print();
 	fraction f2(14,3);
 	cout<< " before addition : "<<endl;
 	cout<<"f2: ";
 	f2.print();
 	
 	
 	f1.add(f2);
 	cout<<" after addition"<<endl;
 	cout<<"f1: ";
	f1.print();
	cout<<"f2: ";
 	f2.print();
 	
 	cout<<" on multiply"<<endl;
 	f1.multiply(f2);
 	f1.print();
	
 
 	
 	
 	
 	
 	
 }
