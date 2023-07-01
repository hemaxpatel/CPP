#include<iostream>
using namespace std;

class alpha{
    int x;
public:
    alpha(int a){
        x=a;
    }

    aputdata(){
        cout<<"\nx="<<x;
    }
};

class beta{
    float y;

public:
    beta(float b){
        y=b;
    }

    bputdata(){
        cout<<"\ny="<<y;
    }
};

class gamma: public alpha, public beta{
    int m,n;

public:
    gamma(int p,int q, int c, int d) : alpha(p),beta(q)
    {
        m=c;
        n=d;
    }

    gputdata(){
        alpha::aputdata();
        beta::bputdata();
        cout<<"\nm="<<m;
        cout<<"\nn="<<n;
    }
};

int main(){
    gamma g(3,4,5,6);
    g.gputdata();
    return 0;
}
