#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, h;

    // Запрашиваем длины оснований и высоту трапеции
    cout << "Enter lengths of the bases of the trapezoid (a b) and height (h): ";
    cin >> a >> b >> h;

    // Проверка на положительность оснований и высоты
    if (a > 0 && b > 0 && h > 0) {
        // Периметр
        double perimeter = a + b + 2 * sqrt(h * h + pow((b - a) / 2, 2));
        cout << "Perimeter: " << perimeter << endl;

        // Площадь
        double area = ((a + b) / 2) * h;
        cout << "Area: " << area << endl;

        // Длина средней линии
        double midline = (a + b) / 2;
        cout << "Length of the midline: " << midline << endl;
    }
    else {
        cout << "Lengths of bases and height must be positive numbers." << endl;
    }

    return 0;
}
