#include<iostream>
#include<cstring>
using namespace std;

class strng
{
    char str[50];
    int n;

public:

    void getstr(){
        cin>>str;
    }

    strng operator ==(strng s){
        n=strcmp(str,s.str);
        if(n==0)
            cout<<"Both strings are same";
        else
            cout<<"Strings are diiferent";
    }

    strng operator+(strng s){
        strng obj;
        strcat(str,s.str);
        strcpy(obj.str,str);
        return obj;
    }

    void displaystr(){
        cout<<"\nFinal string: "<<str;
    }
};

 int main()
 {
     strng str1,str2,str3;
     str1.getstr();
     str2.getstr();
     str1==str2;
     str3=str1+str2;
     str3.displaystr();
     return 0;
 }
