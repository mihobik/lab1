#include <iostream>
#include <cmath> 

using namespace std;

int main() {
    double length, width;

    // ����������� ����� � ������ ��������������
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;

    // ����������: ��������, ������� � ����� ���������
    double perimeter = 2 * (length + width);
    double area = length * width;
    double diagonal = sqrt(length * length + width * width);

    // ����� �����������
    cout << "Perimeter of the rectangle: " << perimeter << endl;
    cout << "Area of the rectangle: " << area << endl;
    cout << "Length of the diagonal: " << diagonal << endl;

    return 0;
}