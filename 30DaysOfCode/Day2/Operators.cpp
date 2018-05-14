#include <bits/stdc++.h>

using namespace std;

int main() {
    double meal_cost;
    cin >> meal_cost;
    int tip_percent;
    cin >> tip_percent;
    int tax_percent;
    cin >> tax_percent;
    
    double total_cost;
    int output;
    
    total_cost = meal_cost * (100 + tip_percent + tax_percent)/100;
    output = round(total_cost);
    
    cout << "The total meal cost is " << output << " dollars." << endl;
    return 0;
}