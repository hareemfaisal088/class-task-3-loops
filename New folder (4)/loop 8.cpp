#include <iostream>
using namespace std;

int main() {
    // Fixed by changing i-- to i++ and condition to i < 5
    for (int i = 0; i < 5; i++) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
