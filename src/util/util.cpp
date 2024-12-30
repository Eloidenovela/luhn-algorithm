#include "util.hpp"

namespace util {
    int len(long long number) {
        int digits = 0;
        while (number != 0) {
            number = number / 10;
            digits++;
        }
        return  digits;
    }
}