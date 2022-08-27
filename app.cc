#include <iostream>
#include <string>
#include <variant>
using namespace std;

class Vector {
   public:
    Vector(int s) : s{s}, p{new int[s]} {}
    int& operator[](int i) { return p[i]; }

   private:
    int s;
    int* p;
};

enum class Fruit {
    apple,
    banana
};

enum Color {
    red,
    blue,
    green
};

int main() {
    cout << red << endl;
    // cout<<Fruit::apple<<endl; // error
    cout << (red == 0) << endl;
    // cout<< Fruit::apple==0; // error
    red;
    // apple; // error
}