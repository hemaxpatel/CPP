#include<iostream>
using namespace std;

class dist
{
    public:
        int feet;
        float inches;
        float scale;

    void display()
    {
        cout<<"Enter feet: ";
        cin>>feet;
        cout<<"Enter inches: ";
        cin>>inches;
        cout<<"Distance is "<<feet<<"\'-"<<inches<<"\"";
    }

    void sc(dist &d)
    {
        cout<<"\nEnter scale: ";
        cin>>scale;
        cout<<"Scale Factor is "<<scale<<endl;
        d.feet=d.feet*scale;
        d.inches=d.inches*scale;
        cout<<"Answer is "<<d.feet<<"\'-"<<d.inches<<"\"";
        cout<<"\nId-22DCE069";
    }
};

main()
{
    dist d;
    d.display();
    d.sc(d);
}
