#include "util.hpp"

namespace card {

    std::string type_is(long long card_number) {
        long long int start_digits = 0;
        int digits = util::len(card_number);

        for (int i = 1 ; i <= digits - 2 ; i++) {
            start_digits = card_number / 10;
            card_number = start_digits;		
        }

        if (((digits == 16) || (digits == 13)) && (start_digits >= 40 && start_digits <=49)) {
            return "VISA";

        } else if ((digits == 16) && (start_digits >= 51 && start_digits <= 55)) {
            return "MASTERCARD";

        } else if ((digits == 15) && (start_digits == 34 || start_digits == 37)) {
            return "AMEX";
        }

        return "unknown card";
    }
}

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