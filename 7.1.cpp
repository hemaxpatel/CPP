#include <iostream>
using namespace std;
class number
{
    int num;

public:
    number()
    {
        num = 5;
    }
    number(int n)
    {
        num = n;
    }
    number(number &t)
    {
        num = t.num;
    }
    void get()
    {
        cout << "Enter the number:";
        cin >> num;
    }
    void display()
    {
        cout << "NUmber is: " << num << endl;
    }
    number operator++()
    {
        number t;
        t.num = ++num;
        return t;
    }
    number operator++(int)
    {
        number t;
        t.num = num++;
        return t;
    }
    number operator-()
    {
        number t;
        t.num = -num;
        return t;
    }
};
int main()
{
    number N1, N3;
    number N2;
    N2.get();
    N1 = N2++;
    cout << "Doing N2++:";
    N1.display();
    cout << "\nDoing ++N1: ";
    N2 = ++N1;
    N2.display();
    cout << "\nDoing -N3: ";
    N3 = -N3;
    N3.display();

    return 0;
}
