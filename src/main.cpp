#include <iostream>
#include "util/util.hpp"
#include "luhn/luhn.hpp"

int main() {
    long long int card_number;
    int digits;

    std::cout << "Enter a card number: ";
    std::cin >> card_number;

    if (luhn::checker(card_number, digits)) {
        std::cout << card::type_is(card_number, digits) << std::endl;
        return 0;
    } 

    std::cout << "invalid card number" << std::endl;
}