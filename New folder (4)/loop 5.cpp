#include <iostream>
using namespace std;

int main() {
    int n;
    long long factorial = 1; // Use long long to handle larger outputs
    cout << "Input: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }

    cout << n << "! = " << factorial << endl;

    return 0;
}
