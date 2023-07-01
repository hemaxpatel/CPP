#include<iostream>
using namespace std;

class tile
{
public:
    float length2;
    float width2;
    float area2;
    void nooftiles();

    void gettile()
    {
        cout<<"Enter the length of  tile: ";
        cin>>length2;
        cout<<"Enter the width of tile: ";
        cin>>width2;
    }

    void puttile()
    {
        area2=length2*width2;
        cout<<"The Area of one tile is: "<<area2;
    }

    void nooftiles(land &a1)
    {
        float area=area1/area2;
        cout<<"Number of tiles required is "<<area;
    }
};

class land
{
public:
    float length1;
    float width1;
    float area1;

    void getland()
    {
        cout<<"Enter the length of  land: ";
        cin>>length1;
        cout<<"Enter the width of land: ";
        cin>>width1;
    }

    void putland()
    {
        area1=length1*width1;
        cout<<"The Area of the land is: "<<area1;
    }
    friend void nooftiles(land &a1);
};





main()
{
    land a1;
    tile a2;
    a1.getland();
    a1.putland();
    a2.gettile();
    a2.puttile();
    a2.nooftiles(a1);
    cout<<"Id-22DCE069";
}
