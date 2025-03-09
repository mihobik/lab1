#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;

    // Запрашиваем стороны треугольника
    cout << "Enter sides of the triangle (a b c): ";
    cin >> a >> b >> c;

    // Проверяем существование треугольника
    if (a + b > c && a + c > b && b + c > a) {
        // Периметр
        double perimeter = a + b + c;
        cout << "Perimeter: " << perimeter << endl;

        // Площадь по формуле Герона
        double s = perimeter / 2; // полупериметр
        double area = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << "Square: " << area << endl;

        // Проверка на равнобедренность
        if (a == b || b == c || a == c) {
            cout << "A triangle is isosceles" << endl;
        }
        else {
            cout << "A triangle is not isosceles" << endl;
        }
    }
    else {
        cout << "No such triangle exists" << endl;
    }

    return 0;
}
