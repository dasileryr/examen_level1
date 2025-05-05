//Дано трехзначное число. Найти сумму и произведение его цифр.
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Введите трёхзначное число: ";
    cin >> n;

    int a = n / 100;
    int b = (n / 10) % 10;
    int c = n % 10;

    int s = a + b + c;
    int p = a * b * c;

    cout << "Сумма цифр: " << s << endl;
    cout << "Произведение цифр: " << p << endl;

    return 0;
}