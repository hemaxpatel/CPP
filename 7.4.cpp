#include<iostream>
using namespace std;

class celsius{
    float c;

public:
    celsius(){
        c=0;
    }

    celsius(float f){
        cout<<"Enter the value of Fahrenheit: ";
        cin>>f;
        c=((f-32)*5)/9;
        cout<<"Fehrenheit is "<<f;
    }

    display(){
        cout<<"\nCelsius is "<<c;
    }
};

int main(){
    celsius c;
    float f;
    c=f;
    c.display();
}
