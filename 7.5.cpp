#include<iostream>
using namespace std;

class fahrenheit;

class celsius{
    float c;

public:
    celsius(float temp=0){
        c=temp;
    }

    operator fahrenheit();

    void display(){
        cout<<"\nCelsius: "<<c;
    }
};

class fahrenheit{
    float f;
public:
    fahrenheit(float temp=0){
        f =temp;
    }

    operator celsius();

    void display(){
        cout<<"\nFahrenheit: "<<f;
    }
};
    celsius :: operator fahrenheit(){
        float temp = (c*9.0/5.0)+32.0;
        return fahrenheit(temp);
    }

     fahrenheit :: operator celsius(){
        float temp=((f-32.0)*5.0/9.0);
        return celsius(temp);
    }

    int main(){
    celsius c1,c2=5.0;
    fahrenheit f1,f2;

    f1=c2;
    c1=f2;
    f1.display();
    c1.display();
    return 0;
}
