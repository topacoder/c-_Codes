#include<iostream>

using namespace std;

class Complex{
    int no;
    int Cno;
    
    public:
    
    Complex(){
        no = 0;
        Cno = 0;
    }
    
    Complex(int no, int Cno){
        this -> no = no;
        this -> Cno = Cno;
    }
    
    void Accept(){
        cout<<"Enter real no \n";
        cin>>no;
        
        cout<<"Enter img no \n";
        cin>>Cno;
    }
    
    void Display(){
        cout<<"Complex number are: "<<no<<" + "<<Cno<<"j \n"; 
    }
    
    Complex operator+(const Complex temp){
        Complex result;
        
        result.no = this -> no + temp.no;
        result.Cno = this -> Cno + temp.Cno;
        
        return result;
    }
    
    Complex operator*(const Complex temp){
        Complex result;
        
        result.no = this -> no * temp.no;
        result.Cno = this -> Cno * temp.Cno;
        
        return result;
    }
    Complex operator-(const Complex temp){
        Complex result;
        
        result.no = this -> no - temp.no;
        result.Cno = this -> Cno - temp.Cno;
        
        return result;
    }

};

int main(){
    
    Complex a(10, 20);
    // a.Display();
    
    Complex b(5, 4);
    Complex c = a + b;
    c.Display();
    
    Complex m = a * b;
    m.Display();
    
    Complex s = a - b;
    s.Display();
    
    
    
    
    
    
    return 0;
}
