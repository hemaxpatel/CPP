#include<iostream>
using namespace std;

class Currency {
private:
    int rupee, paisa;
public:
    void enter() {
        cout << "Enter the amount in rupees and paisa: ";
        cin >> rupee >> paisa;
        if(paisa > 100) { // validation for paisa
            rupee += paisa / 100;
            paisa = paisa % 100;
        }
    }
    void show() {
        cout << "Amount: " << rupee << "." << paisa << endl;
    }
    Currency sum(Currency c2) {
        Currency c3;
        c3.rupee = rupee + c2.rupee;
        c3.paisa = paisa + c2.paisa;
        if(c3.paisa > 100) { // validation for paisa
            c3.rupee += c3.paisa / 100;
            c3.paisa = c3.paisa % 100;
        }
        return c3;
    }
    void add(Currency c1, Currency c2) {
        rupee = c1.rupee + c2.rupee;
        paisa = c1.paisa + c2.paisa;
        if(paisa > 100) { // validation for paisa
            rupee += paisa / 100;
            paisa = paisa % 100;
        }
    }
};

int main() {
    Currency c1, c2, c3;

    // Testing enter() and show()
    c1.enter();
    c1.show();

    // Testing sum()
    c2.enter();
    c2.show();
    c3 = c1.sum(c2);
    c3.show();

    // Testing add()
    Currency c4;
    c4.add(c1, c2);
    c4.show();
    cout<<"\nId-22DCE069";
    return 0;
}
