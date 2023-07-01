#include<iostream>
using namespace std;

//inline puts whole function where it is called to save memory, but not in case of loop or recurrsion
inline int power(int a, int b=2)
{
    int sum=1;
    for(int i=1;i<=a;i++)
    {
        sum=sum*b;
    }
    return sum;
}

main()
{
    int a,b;
    cout<<"Enter the value of base: ";
    cin>>b;
    cout<<"Enter the value of power: ";
    cin>>a;
    cout<<power(a,b)<<endl;
    cout<<"Id-22DCE069";
}
