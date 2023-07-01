#include<iostream>
using namespace std;

class hospital{
    char name[50];
    int rollno;

public:
    hgetdata(){
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the roll number: ";
        cin>>rollno;
    }

    hputdata(){
        cout<<"\nName is "<<name;
        cout<<"\nRoll number is "<<rollno;
    }
};

class ward : public hospital{
    int wardno;

public:
    wgetdata(){
        hospital::hgetdata();
        cout<<"Enter ward number: ";
        cin>>wardno;
    }

    wputdata(){
        hospital::hputdata();
        cout<<"\nWard number is "<<wardno;
    }
};

class room: public hospital{
    int bedno;
    char illness_nature[25];

public:
    rgetdata(){
        cout<<"Enter bed number: ";
        cin>>bedno;
        cout<<"Enter the nature of illness: ";
        cin>>illness_nature;
    }

    rputdata(){
        cout<<"\nBed number is "<<bedno;
        cout<<"\nNature of illness is "<<illness_nature;
    }
};

class patient : public ward, public room{
public:
    pgetdata(){
        ward::wgetdata();
        room::rgetdata();
    }

    pputdata(){
        ward::wputdata();
        room::rputdata();
    }
};

int main(){
    patient p[5];
    for(int i=0;i<5;i++){
    p[i].pgetdata();
    p[i].pputdata();
    }
    return 0;
}

