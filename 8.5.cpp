#include<iostream>
using namespace std;

class shape{
    char shape_name[25];

public:

    getshape(){
        cout<<"Enter shape: ";
        cin>>shape_name;
    }

    printshape(){
        cout<<"\nShape is "<<shape_name;
    }
};

class circle : public shape{
public:
    int radius;
    getcircle(){
        cout<<"\nEnter the radius: ";
        cin>>radius;
    }

    printcircle(){
        cout<<"\nRadius of the circle is "<<radius;
    }
};

class area : public circle{
    float area;

public:

    display(){
        area=3.14*radius*radius;
        cout<<"\nArea of circle is "<<area;
    }
};

int main(){
    area a;
    a.getshape();
    a.printshape();
    a.getcircle();
    a.printcircle();
    a.display();
}
