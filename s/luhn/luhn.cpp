#include "luhn.hpp"

namespace luhn {

    bool checker(long long card_number, int & digits) {
        short int right_digits = 0, left_digits = 0, check_sum = 0;

        while (card_number != 0) {
            digits++;

            if (digits % 2 != 0) {
                left_digits += card_number % 10;
            } else {
                if ((2 * (card_number % 10)) > 9) {
                    right_digits += 2 * (card_number % 10) - 9;
                } else {
                    right_digits += 2 * (card_number % 10);
                }
            }

            card_number = card_number / 10;
        }

        check_sum = left_digits + right_digits;

        return (check_sum % 10 == 0);
    }
}