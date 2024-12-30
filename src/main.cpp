#include <iostream>
#include "luhn/luhn.hpp"
#include "util/card.hpp"

int main() {
    long long int card_number;
    int digits;

    std::cout << "Enter a card number: ";
    std::cin >> card_number;

    if (luhn::checker(card_number)) {
        std::cout << card::type_is(card_number) << std::endl;
        return 0;
    } 

    std::cout << "invalid card number" << std::endl;
}