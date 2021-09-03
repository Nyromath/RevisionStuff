#include <iostream>
using namespace std;

class A {
public:
    int x;
    int y;

    void read() {
        cout << "Input two integers 0-1000\n";

        do {
            cout << "Enter X:\t";
            cin >> x;
        } while (x < 0 || x > 1000);
        do {
            cout << "Enter Y:\t";
            cin >> y;
        } while (y < 0 || y > 1000);
    }
};

class B {
public:
    string s;

    void read() {
        do {
            cout << "Enter String:\t";
            cin >> s;

            if (s.size() >= 50) {
                cout << "String is too long. Under 50 characters only\n";
            }
        } while (s.size() >= 50);
    }
};

class C : public A, public B {
public:
    int sum() {
        return x + y;
    }

    void display() {
        cout << s << endl;
        cout << x << endl;
        cout << y << endl;
    }
};

int main()
{
    C c;
    c.A::read();
    c.B::read();

    cout << "\nSUM:\t";
    cout << c.sum() << endl;

    cout << "\nDISPLAY:\n";
    c.display();
}