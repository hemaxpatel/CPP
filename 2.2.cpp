#include<iostream>
using namespace std;

class student
    {
        public:
        int roll_no;
        char name[20];
        int c;
        char division;

        void read()
        {
            cout<<"\nEnter the Name of the student: ";
            cin>>name;
            cout<<"Enter the roll no of the student: ";
            cin>>roll_no;
            cout<<"Enter the class of the student: ";
            cin>>c;
            cout<<"Enter the division of the student: ";
            cin>>division;
        }

        void display()
        {
            cout<<"\nName of the student: "<<name<<endl;
            cout<<"Roll no of the student: "<<roll_no<<endl;
            cout<<"Class of the student: "<<c<<endl;
            cout<<"Division of the student: "<<division<<endl;
        }
    };

main()
{
    student s1,s2,s3,s4,s5;
    s1.read();
    s2.read();
    s3.read();
    s4.read();
    s5.read();
    cout<<"Output:"<<endl;
    s1.display();
    s2.display();
    s3.display();
    s4.display();
    s5.display();
    cout<<"\nId-22DCE069";
}
