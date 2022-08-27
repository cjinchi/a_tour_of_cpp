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

enum Color{
    red,
    blue,
    green
};

int main() {
    variant<int, float> v;
    v = (float)1.2;
    cout << get<float>(v) << endl;
    cout<<holds_alternative<int>(v)<<endl;
    cout<<holds_alternative<float>(v)<<endl;
}