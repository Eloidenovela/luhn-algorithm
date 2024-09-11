#include "luhn.hpp"
#include "../util/util.hpp"

namespace luhn {

    bool checker(long long card_number) {
        auto right_digits = 0, left_digits = 0, check_sum = 0;
        auto len = util::len(card_number);

        for (int digit = 1; digit <= len; digit++) {

            if (digit % 2 == 0) {
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

        return (check_sum % 10 == 0);
    }
}