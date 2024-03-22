#include <iostream>
using namespace std;

int main() {
    float num1, num2;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    if (num1 > num2) {
        float temp = num1;
        num1 = num2;
        num2 = temp;
    }

    cout << "Los numeros ordenados de mayor a menor son: " << num2 << " " << num1 <<endl;

    return 0;
}
