#include <iostream>

using namespace std;

int main() {

    int turnips_bought {6000};
    int current_price_per_turnip {0};
    int initial_price_per_turnip {94};

    // cout << "How much was the cost per turnip: " << endl;
    // cin >> initial_price_per_turnip;
    // cout << "How turnips did you buy: ";
    // cin >> turnips_bought;

    cout << "What is the current price: ";
    cin >> current_price_per_turnip;

    int initial_cost = turnips_bought * initial_price_per_turnip;

    int current_total = current_price_per_turnip * turnips_bought;

    int final_profit = current_total - initial_cost;

    int make_initial_cost_back = (initial_cost)/ current_price_per_turnip;

    cout << "Your profit is: " << final_profit << endl;
    cout << "To make moeny back and wait for stalk price increase, sell: "
         << make_initial_cost_back << " turnips." << endl;


    return 0;
}
