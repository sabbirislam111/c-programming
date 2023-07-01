#include <iostream>
using namespace std;

int main() {
    int n = 5; // Change this value to adjust the size of the diamond
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n-i; j++) {
            cout << "  "; // Print two spaces for each missing number
        }
        for (int j = 1; j <= 2*i-1; j++) {
            cout << (j+i-1) << " "; // Print the numbers in the pattern
        }
        cout << endl;
    }
//    for (int i = n-1; i >= 1; i--) {
//        for (int j = 1; j <= n-i; j++) {
//            cout << "  "; // Print two spaces for each missing number
//        }
//        for (int j = 1; j <= 2*i-1; j++) {
//            cout << (j+i-1) << " "; // Print the numbers in the pattern
//        }
//        cout << endl;
//    }
    return 0;
}
