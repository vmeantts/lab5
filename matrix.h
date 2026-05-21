#pragma once
#include <iostream>
#include <string>

using namespace std;

template <typename T>
class Matrix
{
private:

    int rows;
    int cols;

    T** data;

public:

    // Конструктор
    Matrix(int r = 0, int c = 0)
    {
        rows = r;
        cols = c;

        data = new T * [rows];

        for (int i = 0; i < rows; i++)
        {
            data[i] = new T[cols];
        }
    }

    // Конструктор копирования
    Matrix(const Matrix& other)
    {
        rows = other.rows;
        cols = other.cols;

        data = new T * [rows];

        for (int i = 0; i < rows; i++)
        {
            data[i] = new T[cols];

            for (int j = 0; j < cols; j++)
            {
                data[i][j] = other.data[i][j];
            }
        }
    }

    // Деструктор
    ~Matrix()
    {
        for (int i = 0; i < rows; i++)
        {
            delete[] data[i];
        }

        delete[] data;
    }

    // Set
    void Set(int i, int j, T value)
    {
        data[i][j] = value;
    }

    // Get
    T Get(int i, int j) const
    {
        return data[i][j];
    }

    // Сложение матриц
    Matrix operator+(const Matrix& other)
    {
        Matrix result(rows, cols);

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                result.data[i][j] =
                    data[i][j] + other.data[i][j];
            }
        }

        return result;
    }

    // Умножение матриц
    Matrix operator*(const Matrix& other)
    {
        Matrix result(rows, other.cols);

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < other.cols; j++)
            {
                result.data[i][j] = 0;

                for (int k = 0; k < cols; k++)
                {
                    result.data[i][j] +=
                        data[i][k] * other.data[k][j];
                }
            }
        }

        return result;
    }

    // Вывод
    friend ostream& operator<<(ostream& out,
        const Matrix& m)
    {
        for (int i = 0; i < m.rows; i++)
        {
            for (int j = 0; j < m.cols; j++)
            {
                out << m.data[i][j] << " ";
            }

            out << "\n";
        }

        return out;
    }

    // Ввод
    friend istream& operator>>(istream& in,
        Matrix& m)
    {
        for (int i = 0; i < m.rows; i++)
        {
            for (int j = 0; j < m.cols; j++)
            {
                in >> m.data[i][j];
            }
        }

        return in;
    }
}; 
