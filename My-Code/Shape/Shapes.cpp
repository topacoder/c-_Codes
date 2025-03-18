#include<iostream>
using namespace std;

class Shape{
    public:

    virtual void DisArea() = 0;
    virtual void DisParm() = 0;
};

class Rectangle: public Shape{
    public:
    int l;
    int b;

    Rectangle(int l, int b){
        this -> l = l;
        this -> b = b;
    }
    void DisArea()override{
        cout<<l*b<<endl;
    }

    void DisParm()override{
        cout<<(l+b) * 2<<endl;
    }
};

class Circle: public Shape{
    public:
    int r;

    Circle(int r){
        this->r = r;
    }

    void DisArea()override{
        cout<<3.14*r*r<<endl;
    }
    void DisParm()override{
        cout<<2*3.14*r<<endl;
    }
};

int main()
{
    Rectangle r(2, 3);
    r.DisArea();
    r.DisParm();
    return 0;
}