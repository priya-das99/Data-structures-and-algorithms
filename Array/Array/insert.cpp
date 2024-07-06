#include <iostream>
using namespace std;

int main() {
    int arr[20];
    int n = 10;

    // Corrected for loop without a semicolon
    for (int i = 0; i < n; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> arr[i];
        
    }

    // Optionally, print the entered numbers to verify
    cout << "You entered: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
 return 0;
   
}
