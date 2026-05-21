#include "polynomial.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    // ===== ПЕРВЫЙ МНОГОЧЛЕН =====

    int degree1;

    cout << "Введите степень первого многочлена: ";
    cin >> degree1;

    vector<int> v1(degree1 + 1);

    cout << "Введите коэффициенты первого многочлена:\n";

    for (int i = 0; i <= degree1; i++)
    {
        cin >> v1[i];
    }

    Polynomial<int> p1(v1);

    // ===== ВТОРОЙ МНОГОЧЛЕН =====

    int degree2;

    cout << "\nВведите степень второго многочлена: ";
    cin >> degree2;

    vector<int> v2(degree2 + 1);

    cout << "Введите коэффициенты второго многочлена:\n";

    for (int i = 0; i <= degree2; i++)
    {
        cin >> v2[i];
    }

    Polynomial<int> p2(v2);

    // ===== ВЫВОД МНОГОЧЛЕНОВ =====

    cout << "\nПервый многочлен:\n";
    cout << p1 << "\n";

    cout << "\nВторой многочлен:\n";
    cout << p2 << "\n";

    // ===== СЛОЖЕНИЕ =====

    cout << "\nСложение p1 + p2:\n";
    cout << p1 + p2 << "\n";

    // ===== ВЫЧИТАНИЕ =====

    cout << "\nВычитание p1 - p2:\n";
    cout << p1 - p2 << "\n";

    // ===== УМНОЖЕНИЕ =====

    cout << "\nУмножение p1 * p2:\n";
    cout << p1 * p2 << "\n";

    // ===== СРАВНЕНИЕ =====

    cout << "\nПроверка операторов == и !=:\n";

    if (p1 == p2)
    {
        cout << "Многочлены равны\n";
    }
    else
    {
        cout << "Многочлены не равны\n";
    }

    if (p1 != p2)
    {
        cout << "Оператор != работает\n";
    }

    // ===== += =====

    Polynomial<int> temp1 = p1;

    temp1 += p2;

    cout << "\nПосле temp1 += p2:\n";
    cout << temp1 << "\n";

    // ===== *= =====

    Polynomial<int> temp2 = p1;

    temp2 *= p2;

    cout << "\nПосле temp2 *= p2:\n";
    cout << temp2 << "\n";

    // ===== operator[] =====

    cout << "\nКоэффициент при x^0:\n";
    cout << p1[0] << "\n";

    cout << "\nКоэффициент при x^1:\n";
    cout << p1[1] << "\n";

    cout << "\nКоэффициент при x^2:\n";
    cout << p1[2] << "\n";

    // ===== Degree =====

    cout << "\nСтепень первого многочлена:\n";
    cout << p1.Degree() << "\n";

    // ===== operator() =====

    int x;

    cout << "\nВведите x для вычисления значения первого многочлена: ";
    cin >> x;

    cout << "Значение многочлена:\n";
    cout << p1(x) << "\n";

    // ===== DOUBLE =====

    cout << "\n===== МНОГОЧЛЕН DOUBLE =====\n";

    int degreeDouble;

    cout << "Введите степень многочлена double: ";
    cin >> degreeDouble;

    vector<double> vd(degreeDouble + 1);

    cout << "Введите коэффициенты:\n";

    for (int i = 0; i <= degreeDouble; i++)
    {
        cin >> vd[i];
    }

    Polynomial<double> pd(vd);

    cout << "\nМногочлен double:\n";
    cout << pd << "\n";

    double xd;

    cout << "\nВведите x для многочлена double: ";
    cin >> xd;

    cout << "Значение многочлена:\n";
    cout << pd(xd) << "\n";

    return 0;
}




