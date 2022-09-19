#include "app.h"

#include <cstring>
#include <iostream>
#include <map>
#include <memory>
#include <stdexcept>
#include <string>
#include <variant>
#include <vector>

using namespace std;

class NestedClass {
   public:
    NestedClass(const NestedClass& c) {
        cout << "nested copy constructor" << endl;
    }

    NestedClass& operator=(const NestedClass& c) {
        cout << "nested copy assign" << endl;
    }

    NestedClass(NestedClass&& c) {
        cout << "nexted move constructor" << endl;
    }

    NestedClass& operator=(NestedClass&& c) {
        cout << "nested move assign" << endl;
    }
};
class MyClass {
   private:
    NestedClass num;

   public:
    MyClass(const MyClass& c) : num{c.num} {
        cout << "class copy constructor" << endl;
    }

    MyClass(MyClass&& a) : num{a.num} {
        cout << "class move constructor" << endl;
    }

    MyClass& operator=(const MyClass& a) {
        this->num = a.num;
        cout << "class copy assignment" << endl;
        return *this;
    }

    MyClass& operator=(MyClass&& a) {
        num = a.num;
        // a.num = 0;
        cout << "class move assignment" << endl;
        return *this;
    }

    // MyClass operator+(const MyClass& a) {
    //     cout << "operator +" << endl;
    //     MyClass ret(num + a.num);
    //     return ret;
    // }

    // void print() {
    //     cout << num << endl;
    // }
};

MyClass get_my_class() {
    MyClass ret;
    return ret;
}

// should be ran with -fno-elide-constructors flag
int main() {
    MyClass a = get_my_class();
    // a.print();
    return 0;
}