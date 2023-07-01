#include<iostream>
#include<iomanip>
using namespace std;

main()
{
    float a,b;
    float *p,*q;
    cout<<"Enter number 1:";
    cin>>a;
    cout<<"Enter number 2:";
    cin>>b;
    p=&a;
    q=&b;
    cout<<"Sum using Setprecision:";
    cout<<setprecision(5)<<*p+*q<<endl;
    cout<<"Sum using Fixed:";
    cout<<fixed<<setprecision(6)<<*p+*q<<endl;
    cout<<"Sum using Scientific:";
    cout<<scientific<<setprecision(6)<<*p+*q<<endl;
    cout<<"Id-22DCE069";
}
