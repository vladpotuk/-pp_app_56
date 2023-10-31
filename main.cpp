#include <iostream>
#include "Header.h"

// ������ ������� ��� ����������� ������
template <typename T>
T findMin(const T arr[], int size) {
    T minValue = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < minValue) {
            minValue = arr[i];
        }
    }
    return minValue;
}

// ������ ������� ��� ����������� ���������
template <typename T>
T findMax(const T arr[], int size) {
    T maxValue = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }
    return maxValue;
}

int main() {

    system("chcp 1251");
    system("cls");

    const int size = 6;
    int intArr[] = { 5, 2, 9, 1, 7, 3 };
    double doubleArr[] = { 2.5, 1.1, 3.7, 1.0, 2.8, 4.2 };

    int intMinValue = findMin(intArr, size);
    int intMaxValue = findMax(intArr, size);

    double doubleMinValue = findMin(doubleArr, size);
    double doubleMaxValue = findMax(doubleArr, size);

    std::cout << "̳���� �� �������� ��� ������ ����� �����:" << std::endl;
    std::cout << "̳����: " << intMinValue << std::endl;
    std::cout << "��������: " << intMaxValue << std::endl;

    std::cout << "̳���� �� �������� ��� ������ ������ �����:" << std::endl;
    std::cout << "̳����: " << doubleMinValue << std::endl;
    std::cout << "��������: " << doubleMaxValue << std::endl;

    return 0;
}


