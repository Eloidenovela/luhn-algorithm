/**  @Author Eloide Novela on 23/01/31.  **/

#include <iostream>

using namespace std;

bool luhn_check(long long int, int &);
string card_type(long long int, int);

int main() {

    long long card_number = 0;
    int digits = 0;

    cout << "Digite o codigo: ";
    cin >> card_number;
    
    if (luhn_check(card_number, digits)) {
		
		cout << card_type(card_number, digits);
	} else {
		
		cout << "Codigo Invalido!";
	}
	
    return 0;
}

bool luhn_check(long long int card_number, int & digits) {

    short int right_digits = 0, left_digits = 0, check_sum = 0;

    while(card_number != 0) {

        digits++;

        if(digits % 2 != 0) {

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

string card_type(long long int card_number, int digits) {
	
	long long int start_digits = 0;
    
    for (int i = 1 ; i <= digits - 2 ; i++) {
    	
		start_digits = card_number / 10;
        card_number = start_digits;		
	}

    if(((digits == 16) || (digits == 13)) && (start_digits >= 40 && start_digits <=49)) {

        return "VISA";

    } else if((digits == 16) && (start_digits >= 51 && start_digits <= 55)) {

        return "MASTERCARD";

    } else if((digits == 15) && (start_digits == 34 || start_digits == 37)) {

        return "AMEX";
    }
    
    return "Codigo sem tipo";
}
