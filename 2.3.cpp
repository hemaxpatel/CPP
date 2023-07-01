#include<iostream>
using namespace std;

class swap1
{
    public:
    int a,b;

    void swap2(int a,int b)
    {
        cout<<"\nBefore swapping"<<endl;
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;

        a=a+b;
        b=a-b;
        a=a-b;

        cout<<"After swapping"<<endl;
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
};

main()
{
    int a,b;
    swap1 s;
    cout<<"Enter the value of 'a': ";
    cin>>a;
    cout<<"Enter the value of 'b': ";
    cin>>b;
    s.swap2(a,b);

    cout<<"Id-22DCE069";
}
