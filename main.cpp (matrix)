#include "matrix.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    // ===== INT =====

    int rows, cols;

    cout << "Введите количество строк: ";
    cin >> rows;

    cout << "Введите количество столбцов: ";
    cin >> cols;

    Matrix<int> A(rows, cols);
    Matrix<int> B(rows, cols);

    cout << "\nВведите элементы матрицы A:\n";
    cin >> A;

    cout << "\nВведите элементы матрицы B:\n";
    cin >> B;

    cout << "\nМатрица A:\n";
    cout << A;

    cout << "\nМатрица B:\n";
    cout << B;

    Matrix<int> C = A + B;

    cout << "\nA + B:\n";
    cout << C;

    Matrix<int> D = A * B;

    cout << "\nA * B:\n";
    cout << D;

    int i, j;

    cout << "\nВведите индекс строки: ";
    cin >> i;

    cout << "Введите индекс столбца: ";
    cin >> j;

    cout << "Элемент: " << A.Get(i, j) << "\n";


    // ===== STRING =====

    cout << "\n===== Строковые матрицы =====\n";

    Matrix<string> S1(2, 2);
    Matrix<string> S2(2, 2);

    cout << "Введите элементы первой строковой матрицы:\n";
    cin >> S1;

    cout << "Введите элементы второй строковой матрицы:\n";
    cin >> S2;

    cout << "\nПервая матрица:\n";
    cout << S1;

    cout << "\nВторая матрица:\n";
    cout << S2;

    Matrix<string> S3 = S1 + S2;

    cout << "\nСложение строковых матриц:\n";
    cout << S3;

    return 0;
}



