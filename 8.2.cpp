#include<iostream>
#include<cstring>
using namespace std;

class medicine{
    char type[20],companyname[50];
    int dom;

public:

    void getdata(){
        cout<<"Enter the name of the company:";
        cin>>companyname;
        cout<<"Enter the manufacturing date:";
        cin>>dom;
    }

    void putdata(){
        cout<<"\nName of the company is "<<companyname;
        cout<<"\nManufacture date is "<<dom;
    }
};

class tablet:public medicine{
    char tabname[25];
    int tab_quantity,price;

public:
    void tgetdata(){
        medicine::getdata();
        cout<<"Enter the name of the tablet: ";
        cin>>tabname;
        cout<<"Enter quantity per pack: ";
        cin>>tab_quantity;
        cout<<"Enter price: ";
        cin>>price;
    }

    void tputdata(){
        medicine::putdata();
        cout<<"\nName of tablet is "<<tabname;
        cout<<"\nQuantity per pack is "<<tab_quantity;
        cout<<"\nPrice is "<<price;
    }
};

class syrup:public medicine{
    int sy_quan,dosage;

public:
    void sgetdata(){
        medicine::getdata();
        cout<<"Enter syrup quantity: ";
        cin>>sy_quan;
        cout<<"Enter dosage in ml: ";
        cin>>dosage;
    }

    void sputdata(){
        medicine::putdata();
        cout<<"\nQuantity per bottle is "<<sy_quan;
        cout<<"\nDosage in ml is "<<dosage;
    }
};

int main(){
    char type[20];
    cout<<"Enter the type of medicine:";
    cin>>type;

    if(strcmp("tablet",type)==0){
    tablet t;
    t.tgetdata();
    t.tputdata();
    }
    else if(strcmp("syrup",type)==0){
    syrup s;
    s.sgetdata();
    s.sputdata();
    }
    return 0;
}
