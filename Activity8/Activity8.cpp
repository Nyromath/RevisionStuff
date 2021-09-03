#include <iostream>
using namespace std;

class Parent {
public:

    void whoAreYou() {
        cout << "I am the Parent\n";
    }
};

class Derived : public Parent {
public:

    void whoAreYou() {
        cout << "I am the Child\n";
    }
};

int main()
{
    Derived obj;

    obj.Parent::whoAreYou();
    obj.whoAreYou();
}