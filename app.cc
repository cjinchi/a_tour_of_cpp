#include "app.h"

#include <chrono>
#include <cstring>
#include <iostream>
#include <map>
#include <memory>
#include <stdexcept>
#include <string>
#include <variant>
#include <vector>

using namespace std;

template <typename T>
class Vector {
   private:
    T* eles = new T[10];
    int _size = 0;

   public:
    int size() const {
        return _size;
    }

    T* begin() {
        return _size ? &eles[0] : nullptr;
    }

    T* end() {
        return _size ? &eles[0] + _size : nullptr;
    }

    void push_back(const T& val) {
        eles[_size++] = val;
    }
};

int main() {
    Vector<string> vecs;
    vecs.push_back("hello"s);
    vecs.push_back("world"s);
    for (auto itr = vecs.begin(); itr != vecs.end(); itr++) {
        cout << *itr << endl;
    }
    for (auto& v : vecs) {
        cout << v << endl;
    }

    return 0;
}