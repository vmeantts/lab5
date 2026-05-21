#include "contains.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    // ===== INT =====

    int size1;

    cout << "Введите размер массива int: ";
    cin >> size1;

    int* arr1 = new int[size1];

    cout << "Введите элементы массива:\n";

    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }

    int value1;

    cout << "Введите элемент для поиска: ";
    cin >> value1;

    if (contains(value1, arr1, size1))
    {
        cout << "Элемент найден\n";
    }
    else
    {
        cout << "Элемент не найден\n";
    }

    // ===== DOUBLE =====

    int size2;

    cout << "\nВведите размер массива double: ";
    cin >> size2;

    double* arr2 = new double[size2];

    cout << "Введите элементы массива:\n";

    for (int i = 0; i < size2; i++)
    {
        cin >> arr2[i];
    }

    double value2;

    cout << "Введите элемент для поиска: ";
    cin >> value2;

    if (contains(value2, arr2, size2))
    {
        cout << "Элемент найден\n";
    }
    else
    {
        cout << "Элемент не найден\n";
    }

    // ===== STRING =====

    int size3;

    cout << "\nВведите размер массива string: ";
    cin >> size3;

    string* arr3 = new string[size3];

    cout << "Введите строки:\n";

    for (int i = 0; i < size3; i++)
    {
        cin >> arr3[i];
    }

    string value3;

    cout << "Введите строку для поиска: ";
    cin >> value3;

    if (contains(value3, arr3, size3))
    {
        cout << "Элемент найден\n";
    }
    else
    {
        cout << "Элемент не найден\n";
    }

    delete[] arr1;
    delete[] arr2;
    delete[] arr3;

    return 0;
}