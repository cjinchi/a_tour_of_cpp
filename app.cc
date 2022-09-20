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

template<typename T>
void print(const T& v) {
    cout << v << endl;
}

int main() {
    print("hello world"s);
    return 0;
}