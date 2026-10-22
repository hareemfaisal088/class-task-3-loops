#include <iostream>
using namespace std;

int main() {
    double mark, sum = 0;
    int count = 0;

    cout << "Enter marks (-1 to stop): ";
    cin >> mark;

    while (mark != -1) {
        sum += mark;
        count++;
        cin >> mark;
    }

    if (count > 0) {
        double average = sum / count;
        cout << "Average = " << average << endl;
    } else {
        cout << "No marks entered." << endl;
    }

    return 0;
}
