#include "Count.h"

void Count::u_input(int& user_input) {
    count = user_input;
}

void Count::incr() {
    ++count;
}

void Count::decr() {
    --count;
}

int Count::nowis() {
    return count;
}