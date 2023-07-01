#include<iostream>
using namespace std;

void divide(int a, int b)
{
    if(a%b==0)
        cout<<a<<" is divisible by "<<b<<endl;
    else
        cout<<a<<" is not divisible by "<<b<<endl;
}

void divide(int a)
{
    int flag=0;
    for (int i=2;i<=a/2;i++)
    {
       if(a%i==0)
       {
           flag=1;
            break;
       }
       else
       {
           continue;
       }

    }

       if(flag==1)
       {
           cout<<a<<" is not a Prime number"<<endl;
       }

        else
        {
            cout<<a<<" is a Prime number"<<endl;
        }
}

void divide(float a, float b, float c )
{
    cout<<"Average is "<<(a+b+c)/3<<endl;
}

main()
{
    divide(5,2);
    divide('a','b','c');
    divide(25);
    cout<<"Id-22DCE069";
}
