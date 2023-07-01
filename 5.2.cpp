#include<iostream>
using namespace std;

class batsman
{
    private:
        char batsman_name[20];
        int bcode;
        int innings;
        int not_out;
        int runs;
        float batting_average;
        void calcavg();
    public:
        void getdata();
        void putdata();
};

void batsman::getdata()
{
    cout<<"Enter the batsman's name: ";
    cin>>batsman_name;
    cout<<"Enter the batsman's code: ";
    cin>>bcode;
    cout<<"Total no of innings: ";
    cin>>innings;
    cout<<"Total no of not out innings: ";
    cin>>not_out;
    cout<<"Total no of runs: ";
    cin>>runs;
}

void batsman::putdata()
{
    cout<<"\nBatsman's run: "<<batsman_name<<endl;
    cout<<"Batsman's code: "<<bcode<<endl;
    cout<<"Total no of innings: "<<innings<<endl;
    cout<<"Total no of not out innings: "<<not_out<<endl;
    cout<<"Total no of runs: "<<runs<<endl;
    calcavg();
}

inline void batsman:: calcavg()
{
    batting_average=runs/(innings-not_out);
    cout<<"Batting Average "<<batting_average;
}

main()
{
    batsman b;
    b.getdata();
    b.putdata();
    cout<<"\nId-22DCE069";
}
