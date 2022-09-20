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

template <typename Sequence, typename Value>
Value my_sum(const Sequence& seq, Value value) {
    for (const auto& x : seq) {
        value += x;
    }
    return value;
}

int main() {
    vector<int> a{1, 2, 3, 4, 5};
    cout << my_sum(a, 0) << endl;
    vector<string> b{"foo"s, "bar"s, "hello"s};
    cout << my_sum(b, ""s) << endl;
    return 0;
}