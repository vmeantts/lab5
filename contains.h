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