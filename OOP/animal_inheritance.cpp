#include <iostream>
using namespace std;

class Animal {
public:
    string name;
    Animal(string n) : name(n) {}
    virtual void speak() { cout << name << " makes a sound." << endl; }
};

class Dog : public Animal {
public:
    Dog(string n) : Animal(n) {}
    void speak() override { cout << name << " says: Woof!" << endl; }
};

int main() {
    Dog d("Rex");
    d.speak();
    return 0;
}
