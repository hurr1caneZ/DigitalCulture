#include <iostream>
#include "gtest/gtest.h"

const char *type_of_int(int x) {
    if(x > 0) return "positive";
    else if (x < 0) return "negative";
    else return "null";
}

const char *even(int x) {
    if(x % 2 == 0) return "true";
    else if (x % 2 != 0) return "false";
    else return "undef";
}
