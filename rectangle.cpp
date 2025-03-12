#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    double length, width;

    // Запрашиваем длину прямоугольника
    do {
        cout << "Enter the length of the rectangle (positive number): ";
        cin >> length;
        if (length <= 0) {
            cout << "Length must be a positive number. Please try again." << endl;
        }
    } while (length <= 0); // Повторяем ввод, пока длина не будет положительной

    // Запрашиваем ширину прямоугольника
    do {
        cout << "Enter the width of the rectangle (positive number): ";
        cin >> width;
        if (width <= 0) {
            cout << "Width must be a positive number. Please try again." << endl;
        }
    } while (width <= 0); // Повторяем ввод, пока ширина не будет положительной

    // Вычисления: периметр, площадь и длина диагонали
    double perimeter = 2 * (length + width);
    double area = length * width;
    double diagonal = sqrt(length * length + width * width);

    // Вывод результатов
    cout << "Perimeter of the rectangle: " << perimeter << endl;
    cout << "Area of the rectangle: " << area << endl;
    cout << "Length of the diagonal: " << diagonal << endl;

    return 0;
}
