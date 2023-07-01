#include<iostream>
using namespace std;

struct college_details
{
    char college_name[10];
    char college_code[10];
    char department[5];
    int intake;
};

main()
{
    struct college_details c;
    cout<<"+++++ Enter the College Information +++++"<<endl<<endl;
    cout<<"Name of the college: ";
    cin>>c.college_name;
    cout<<"College code: :";
    cin>>c.college_code;
    cout<<"Department: ";
    cin>>c.department;
    cout<<"Department In-take: ";
    cin>>c.intake;

    cout<<"\n\n********* College Information *********"<<endl<<endl;
    cout<<"Name of the college: "<<c.college_name<<endl;
    cout<<"College University Code: "<<c.college_code<<endl;
    cout<<"Name of the Department: "<<c.department<<endl;
    cout<<"The department of "<<c.department<<"has in-take: "<<c.intake<<endl;
    cout<<"Id-22DCE069";
}
