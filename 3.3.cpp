#include<iostream>
using namespace std;
main()
{
    int n;
    int *ptr=new int[100];
    cout<<"Enter the size: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>ptr[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<" "<<ptr[i]+2;
    }
    delete ptr;
    cout<<"\nId-22DCE069";
}
