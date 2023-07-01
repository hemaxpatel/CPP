#include<iostream>
using namespace std;

class gate
{
public:
    int ecv_cnt=0;
    int ecs_cnt;
    static int eca_cnt;
    int rno;
    char name[20];
    char ec;

    static int total;

    void getdata()
    {
        cout<<"Enter total no of student: ";
        cin>>total;
        cout<<"Enter registration no: ";
        cin>>rno;
        cout<<"Enter the name of the student: ";
        cin>>name;
        cout<<"Enter the initial of the examination centre: ";
        cin>>ec;

        if(ec==V || ec==v)
            ecv_cnt++;
        else if(ec==S || ec==s)
            ecs_cnt++;
        else if(ec==A || ec==a)
            eca_cnt++;
    }

    void putdata()
    {
        cout<<"Registration no: "<<rno;
        cout<<"Student name: "<<name;
        cout<<"Exam centre: "<<ec;
    }

    static void getcount()
    {
        cout<<"Total student in Vadodara: "<,ecv_cnt;
        cout<<"Total student in Surat: "<,ecs_cnt;
        cout<<"Total student in Ahemdabad: "<,eca_cnt;
    }

};

static gate::ecv_cnt=0
static gate::ecs_cnt=0
static gate::eca_cnt=0

main()
{

}
