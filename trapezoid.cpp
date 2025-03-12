#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c, d, h;

    // Запрашиваем длины оснований и высоту трапеции
    do {
        cout << "Enter lengths of the bases of the trapezoid (a b) and height (h): ";
        cin >> a >> b >> h;
        if (a <= 0 || b <= 0 || h <= 0) {
            cout << "Lengths of bases and height must be positive numbers. Please try again." << endl;
        }
    } while (a <= 0 || b <= 0 || h <= 0);

    // Запрашиваем длины боковых сторон
    do {
        cout << "Enter lengths of the non-parallel sides (c d): ";
        cin >> c >> d;
        if (c <= 0 || d <= 0 || c < h || d < h) {
            cout << "Lengths of non-parallel sides must be positive numbers and is greater than the length of the height of the trapezoid. Please try again." << endl;
        }
    } while (c <= 0 || d <= 0 || c < h || d < h);

    // Периметр
    double perimeter = a + b + c + d;
    cout << "Perimeter: " << perimeter << endl;

    // Площадь
    double area = ((a + b) / 2) * h;
    cout << "Area: " << area << endl;

    // Длина средней линии
    double midline = (a + b) / 2;
    cout << "Length of the midline: " << midline << endl;

    return 0;
}
