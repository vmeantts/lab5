#pragma once
#include <iostream>
#include <string>

using namespace std;

template <typename T>
bool contains(T element, T* arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return true;
        }
    }

    return false;
}

template <typename T>
bool change(T first, T second, T* arr, int size)
{
    if (!contains(first, arr, size) ||
        !contains(second, arr, size))
    {
        cout << "Ошибка: один из элементов не найден\n";

        return false;
    }

    int firstIndex = -1;
    int secondIndex = -1;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == first)
        {
            firstIndex = i;
        }

        if (arr[i] == second)
        {
            secondIndex = i;
        }
    }

    T temp = arr[firstIndex];

    arr[firstIndex] = arr[secondIndex];

    arr[secondIndex] = temp;

    cout << "Обмен выполнен успешно\n";

    return true;
}
