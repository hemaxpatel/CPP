#include<iostream>
using namespace std;

class vegetable{
    char color[10];

public:
    getdata(){
    cout<<"Enter the color:";
    cin>>color;
    }

    putdata(){
        cout<<"Color is "<<color;
    }
};

class tomato : public vegetable
{
    int weight,Size;
public:

    gtdata(){
        vegetable::getdata();
        cout<<"\nEnter the weight(kg) of tomato: ";
        cin>>weight;
        cout<<"Enter the size of tomato: ";
        cin>>Size;
    }

    ptdata(){
        vegetable::putdata();
        cout<<"\nWeight of tomato in kg is "<<weight;
        cout<<"\nSize of tomato is "<<Size;
    }
};

int main(){
    tomato t1;
    t1.gtdata();
    t1.ptdata();
    return 0;
}
