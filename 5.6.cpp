#include<iostream>
using namespace std;

class date
{
public:
    int dd;
    int mm;
    int yyyy;

    void getdate()
    {
        cout<<"Enter date: ";
        cin>>dd;
        cout<<"Enter month: ";
        cin>>mm;
        cout<<"Enter year: ";
        cin>>yyyy;
    }

    void putdate()
    {
        cout<<"\nDate is "<<dd<<"-"<<mm<<"-"<<yyyy<<endl;
    }

    friend void swapdates(date &d1,date &d2);

};

void swapdates(date &d1, date &d2)
{
    d1.dd=d1.dd+d2.dd;
    d2.dd=d1.dd-d2.dd;
    d1.dd=d1.dd-d2.dd;

    d1.mm=d1.mm+d2.mm;
    d2.mm=d1.mm-d2.mm;
    d1.mm=d1.mm-d2.mm;

    d1.yyyy=d1.yyyy+d2.yyyy;
    d2.yyyy=d1.yyyy-d2.yyyy;
    d1.yyyy=d1.yyyy-d2.yyyy;
}

main()
{
    date d1, d2;
    d1.getdate();
    d2.getdate();
    d1.putdate();
    d2.putdate();
    swapdates(d1,d2);
    cout<<"\nAfter Swapping";
    d1.putdate();
    d2.putdate();
    cout<<"Id-22DCE069";
}
