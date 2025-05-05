//Boolean. Дано целое число А. Проверить истинность высказывания: «Число.
//является нечетным»

#include <iostream>
using namespace std;

int main() {
    int A;
    cout << "Введите целое число A: ";
    cin >> A;

    bool i = A % 2 != 0;

    cout << "Число является нечетным: " << boolalpha << i << endl;

    return 0;
}