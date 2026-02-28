#include <iostream>
using namespace std;

int main() {
    int num, temp, digitSum = 0;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    while (temp != 0) {
        digitSum += temp % 10;
        temp /= 10;
    }

    bool div3 = (digitSum % 3 == 0);
    bool div5 = (num % 5 == 0);

    if (div3 && div5)
        cout << num << " is divisible by 15";
    else
        cout << num << " is not divisible by 15";

    return 0;
}
