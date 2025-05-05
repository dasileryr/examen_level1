#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cout << "Введите значения A ";
    cin >> A ;
    cout << "Введите значения B ";
    cin >> B;
    cout << "Введите значения C ";
    cin >> C;

    int t = A;

    A = C;
    C = B;
    B = t;

    cout << "Новые значения:\n";
    cout << "A = " << A << endl;
    cout << "B = " << B << endl;
    cout << "C = " << C << endl;

    return 0;
}