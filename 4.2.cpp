#include<iostream>
using namespace std;

int& tonLarge(int& a, int& b )
{
    if (a>b)
        a=100;
    else
        b=100;
}

main()
{
    int a=50,b=40;
    int &p=a;
    int &q=b;
    cout<<"Value of a and b before calling"<<endl;
    cout<<"a="<<a<<" b="<<b;
    tonLarge(a,b);
    cout<<"\nValue of a and b after calling"<<endl;
    cout<<"a="<<a<<" b="<<b;

    cout<<"\n\nValue of a and b before calling"<<endl;
    cout<<"a="<<a<<" b="<<b;
    tonLarge(a,b)=200;
    cout<<"\nValue of a and b after calling"<<endl;
    cout<<"a="<<a<<" b="<<b;
    cout<<"\nId-22DCE069";
}
