#include <iostream>
using namespace std;

class A {
public:
    void display() {
        cout << "I am the Grandparent.";
    }
};

class B : public A {
public:
    void display() {
        cout << "\n\nI am the Parent.";
    }
};

class C : public B {
public:
    void display() {
        cout << "\n\nI am the Child.";
    }
};

int main()
{
    A a;
    B b;
    C c;

    a.display();
    b.display();
    cout << "\nI am derived from Class A";
    c.display();
    cout << "\nI am derived from Class B\n";
    return 0;
}