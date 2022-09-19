#include "app.h"

#include <iostream>
#include <map>
#include <stdexcept>
#include <string>
#include <variant>
#include <vector>
using namespace std;

class Base {
   public:
    virtual int size() const = 0;
};

class Sub : public Base {
   public:
    int size() const override {
        return 3;
    }
};

class Child : public Base {
   public:
    int size() const override {
        return 4;
    }
};

void f(initializer_list<int> nums) {
    for (auto itr = nums.begin(); itr != nums.end(); itr++) {
        cout << *itr << endl;
    }
}

void g(Base &b) {
    cout << b.size() << endl;
}

int main() {
    Child *sub = new Child();
    Base *p = sub;
    Sub *test = dynamic_cast<Sub *>(p);
    if (test == nullptr) {
        cout << "is nullptr" << endl;
    } else {
        cout << "no" << endl;
    }
    return 0;
}