#include <iostream>
#include "luhn/luhn.hpp"
#include "util/card.hpp"

int main() {
    long long int card_number;
    int digits;

    std::cout << "Enter a card number: ";
    std::cin >> card_number;

    if (luhn::is_valid(card_number)) {
        std::cout << card::get_type(card_number) << std::endl;
        return 0;
    } 

    std::cout << "invalid card number" << std::endl;
}