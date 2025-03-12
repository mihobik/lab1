#include <iostream>

using namespace std;

int main() {
    const double PI = 3.1415;
    double R, angle;

    // Запрашиваем радиус и угол
    cout << "Enter the radius of the circle: ";
    cin >> R;
    cout << "Enter the angle (in degrees): ";
    cin >> angle;

    // Проверяем ввод на отрицательные значения
    if (R < 0 || angle < 0) {
        cout << "неверное значение" << endl;
        return 1; // Завершаем программу с кодом ошибки
    }

    // Вычисления: длина окружности, площадь круга, площадь кругового сектора
    double circumference = 2 * PI * R;
    double circle_area = PI * R * R;
    double sector_area = (PI * R * R * angle) / 360.0;

    // Вывод результатов
    cout << "Circumference length: " << circumference << endl;
    cout << "The area of a circle: " << circle_area << endl;
    cout << "The area of the circular sector: " << sector_area << endl;

    return 0;
}
