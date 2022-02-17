#include <iostream>
using namespace std;
class ComplexNumbers {
      // Complete this class
    int real;
    int img;
    public :
    ComplexNumbers( int real,int img){
        this->real=real;
        this->img=img;
        
        
    }
    void print(){
        cout<<real<<" + "<<"i"<<img;
        
    }
    void plus(ComplexNumbers const &c2){
        
        
        int x=real+c2.real;
        int y=img+c2.img;
        
        this->real=x;
        this->img=y;
        
        
    }
    void multiply(ComplexNumbers const &c2){
        int x=(real*c2.real)-(img*c2.img);
        int y=(img*c2.real)+(real*c2.img);
        
        this->real=x;
        this->img=y;
        
        
        
    } 
    
    
};

int main() {
    int real1, imaginary1, real2, imaginary2;
    
    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;
    
    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);
    
    int choice;
    cin >> choice;
    
    if(choice == 1) {
        c1.plus(c2);
        c1.print();
    }
    else if(choice == 2) {
        c1.multiply(c2);
        c1.print();
    }
    else {
        return 0;
    }   
}
