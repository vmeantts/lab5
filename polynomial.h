#pragma once
#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class Polynomial
{
private:

    vector<T> coeffs;

    void normalize()
    {
        while (coeffs.size() > 1 &&
            coeffs.back() == T(0))
        {
            coeffs.pop_back();
        }
    }

public:

    // Конструктор из вектора
    Polynomial(const vector<T>& v)
    {
        coeffs = v;
        normalize();
    }

    // Конструктор по умолчанию
    Polynomial(T value = T(0))
    {
        coeffs.push_back(value);
        normalize();
    }

    // Степень многочлена
    int Degree() const
    {
        return coeffs.size() - 1;
    }

    // Оператор []
    T operator[](int power) const
    {
        if (power < 0 ||
            power >= coeffs.size())
        {
            return T(0);
        }

        return coeffs[power];
    }

    // Вычисление значения
    T operator()(T x) const
    {
        T result = T(0);

        T power = T(1);

        for (int i = 0; i < coeffs.size(); i++)
        {
            result =
                result + coeffs[i] * power;

            power = power * x;
        }

        return result;
    }

    // ==
    bool operator==(const Polynomial& other) const
    {
        return coeffs == other.coeffs;
    }

    // !=
    bool operator!=(const Polynomial& other) const
    {
        return !(*this == other);
    }

    // +
    Polynomial operator+(const Polynomial& other) const
    {
        int maxSize =
            max(coeffs.size(),
                other.coeffs.size());

        vector<T> result(maxSize, T(0));

        for (int i = 0; i < maxSize; i++)
        {
            if (i < coeffs.size())
            {
                result[i] += coeffs[i];
            }

            if (i < other.coeffs.size())
            {
                result[i] += other.coeffs[i];
            }
        }

        return Polynomial(result);
    }

    // -
    Polynomial operator-(const Polynomial& other) const
    {
        int maxSize =
            max(coeffs.size(),
                other.coeffs.size());

        vector<T> result(maxSize, T(0));

        for (int i = 0; i < maxSize; i++)
        {
            if (i < coeffs.size())
            {
                result[i] += coeffs[i];
            }

            if (i < other.coeffs.size())
            {
                result[i] -= other.coeffs[i];
            }
        }

        return Polynomial(result);
    }

    // *
    Polynomial operator*(const Polynomial& other) const
    {
        vector<T> result(
            coeffs.size() + other.coeffs.size(),
            T(0));

        for (int i = 0; i < coeffs.size(); i++)
        {
            for (int j = 0;
                j < other.coeffs.size();
                j++)
            {
                result[i + j] +=
                    coeffs[i] *
                    other.coeffs[j];
            }
        }

        return Polynomial(result);
    }

    // +=
    Polynomial& operator+=(const Polynomial& other)
    {
        *this = *this + other;

        return *this;
    }

    // *=
    Polynomial& operator*=(const Polynomial& other)
    {
        *this = *this * other;

        return *this;
    }

    // Вывод
    friend ostream& operator<<(
        ostream& out,
        const Polynomial& p)
    {
        for (int i = p.coeffs.size() - 1;
            i >= 0;
            i--)
        {
            out << p.coeffs[i] << " ";
        }

        return out;
    }
};