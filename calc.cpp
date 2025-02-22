#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int choice;
    double amount, result;
    
    cout << "BTC/Satoshi Converter" << endl;
    cout << "1. BTC to Satoshis" << endl;
    cout << "2. Satoshis to BTC" << endl;
    cout << "Enter your choice (1 or 2): ";
    cin >> choice;
    
    switch(choice) {
        case 1:
            cout << "Enter BTC amount: ";
            cin >> amount;
            result = amount * 100000000;
            cout << fixed << setprecision(0); // No decimal places for satoshis
            cout << amount << " BTC = " << result << " Satoshis" << endl;
            break;
            
        case 2:
            cout << "Enter Satoshi amount: ";
            cin >> amount;
            result = amount / 100000000;
            cout << fixed << setprecision(8); // 8 decimal places for BTC
            cout << amount << " Satoshis = " << result << " BTC" << endl;
            break;
            
        default:
            cout << "Invalid choice! Please select 1 or 2." << endl;
    }
    
    return 0;
}
