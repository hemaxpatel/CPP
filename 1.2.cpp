#include<iostream>
#include<iomanip>
using namespace std;
main()
{
    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=4;j++)
        {
            cout<<left<<setw(3)<<i*j;
        }
        cout<<"\n";
    }
    cout<<"Id-22DCE069";
}
