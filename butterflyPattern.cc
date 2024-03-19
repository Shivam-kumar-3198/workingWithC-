#include <iostream>

using namespace std;

int main() {
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

    
    for (int i = 1; i <= rows * 2 - 1; i++) {
        
        int spaces = abs(rows - i);
        int stars = (i <= rows) ? 2 * i - 1 : 2 * (rows - i + 1) - 1;


        for (int j = 0; j < spaces; j++) {
            cout << " ";
        }

        
        for (int j = 0; j < stars / 2; j++) {
            cout << "*";
        }


        if (stars > 1) {
            cout << " ";
        }

        
        for (int j = (stars - 1) / 2; j > 0; j--) {
            cout << "*";
        }

        
        cout << endl;
    }

    return 0;
}

