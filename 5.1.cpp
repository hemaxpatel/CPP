#include<iostream>
using namespace std;

class rectangle
{
    public:
    float width;
    float height;

    void getvalues ()
    {
        cout<<"Enter the length of width: ";
        cin>>width;
        cout<<"Enter the length of height: ";
        cin>>height;
    }

    void area()
    {
        cout<<"Area of the given dimension of rectangle is "<<width*height;
    }
};

main()
{
    cout<<"Using Class in C++\n";
    rectangle r;
    r.getvalues();
    r.area();
    cout<<"\nId-22DCE069";
}
