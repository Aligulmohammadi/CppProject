#include <iostream>
using namespace std;

// تابع برای پیدا کردن بزرگترین عدد
int findMax(int a, int b, int c) {
    int maxNum = a;
    if (b > maxNum) maxNum = b;
    if (c > maxNum) maxNum = c;
    return maxNum;
}

int main() {
    int num1, num2, num3;

    cout << "سه عدد وارد کنید: ";
    cin >> num1 >> num2 >> num3;

    int maxNumber = findMax(num1, num2, num3);

    cout << "بزرگترین عدد: " << maxNumber << endl;

    return 0;
}
