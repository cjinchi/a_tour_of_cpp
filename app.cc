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
class Less_than {
    const T val;

   public:
    Less_than(const T& v) : val{v} {}
    bool operator()(const T& x) const {
        return x < val;
    }
};

int main() {
    Less_than lti{100};
    cout << lti(150) << endl;
    Less_than lts{"b"s};
    cout << lts("abc"s) << endl;
    cout << lts("c"s) << endl;

    return 0;
}