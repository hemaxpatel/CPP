#include<iostream>
using namespace std;

class complex {
    private:
    int real;
    int img;

    public:

    complex() {
        real = 0;
        img = 0;
    }
    complex(int a,int b) {
        real = a;
        img = b;
    }
    friend complex operator - (complex &c);

    void print() {
        cout<<"("<<real<<")"<<"+"<<"("<<img<<")"<<"i"<<endl;
    }
};

complex operator - (complex &c) {
    return complex(-(c.real), -(c.img));
}

main() {

    int a,b;
    cout<<"enter real num :";
    cin>>a;
    cout<<"enter img num :";
    cin>>b;
    complex c(a,b);
    cout<<"before: ";
    c.print();
    complex c1 = -c;
    cout<<"after: ";
    c1.print();

}
