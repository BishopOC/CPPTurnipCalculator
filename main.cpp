#include <iostream>

using namespace std;

int main() {

    int turnips_bought {0};
    int current_price_per_turnip {0};
    int initial_price_per_turnip {0};

    cout << "How much was the cost per turnip: " << endl;
    cin >> initial_price_per_turnip;
    cout << "How turnips did you buy: ";
    cin >> turnips_bought;

    cout << "What is the current price: ";
    cin >> current_price_per_turnip;

    int initial_cost = turnips_bought * initial_price_per_turnip;

    int current_total = current_price_per_turnip * turnips_bought;

    cout << "Your profit is: " << current_total - initial_cost << endl;


    return 0;
}
