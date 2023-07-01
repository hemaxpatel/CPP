#include<iostream>
using namespace std;

class time{
public:
    int second;
    int minute;
    int hour;

    void gettime(){
        cout<<"\nEnter hour: ";
        cin>>hour;
        cout<<"Enter minute: ";
        cin>>minute;
        cout<<"Enter second: ";
        cin>>second;
    }

    void puttime(){
        cout<<"Time: "<<hour<<":"<<minute<<":"<<second;
    }
//default constructor
    time(){
        hour=11;
        minute=11;
        second=11;
        cout<<"Default Constructor";
        cout<<"\nTime: "<<hour<<":"<<minute<<":"<<second;
    }
//parameterized constructor
    time(int hr1, int min1, int sec1=52){
        hour=hr1;
        minute=min1;
        second=sec1;
        cout<<"\nParameterized Constructor";
        cout<<"\nTime: "<<hour<<":"<<minute<<":"<<second;
    }
//copy constructor
    time (time &t){
        hour=t.hour;
        minute=t.minute;
        second=t.second;
        cout<<"\nCopy Constructor";
        cout<<"\nTime: "<<hour<<":"<<minute<<":"<<second;
    }
    ~time(){
    //destructor
    }
};

main()
{
    time t1;
    time t2(10,10,10);
    time t3(t2);

    t1.gettime();
    t1.puttime();
    cout<<"\n22DCE069";
}
