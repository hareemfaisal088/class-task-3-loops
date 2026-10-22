#include <iostream>
using namespace std;

int main() {
    int num, count = 0;
    cout << "Input: ";
    cin >> num;

    // Handle 0 as a special case with 1 digit
    if (num == 0) {
        count = 1;
    } else {
        while (num != 0) {
            num /= 10;
            count++;
        }
    }

    cout << "Digits = " << count << endl;

    return 0;
}
