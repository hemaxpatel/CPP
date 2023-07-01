#include<iostream>
using namespace std;

class child{
public:
    char nameofchild[25];
    char gender[25];

    void getchilddata(){
    cout<<"\nEnter the name of the child: ";
    cin>>nameofchild;
    cout<<"Enter the gender of the child: ";
    cin>>gender;
}

    void printchilddata(){
    cout<<"\nName of child is "<<nameofchild;
    cout<<"\nGender of child is "<<gender;
}

    friend class parent;
};



class parent{
public:

    void readchilddata(child &a){
    a.getchilddata();
    }

    void displaychilddata(child c1){
    c1.printchilddata();
    }
};



main()
{
    child c1;
    parent p1;
    cout<<"Child Class";
    c1.getchilddata();
    c1.printchilddata();
    cout<<"\nParent Class";
    p1.readchilddata(c1);
    p1.displaychilddata(c1);
    cout<<"\nId-22DCE069";
}
