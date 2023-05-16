 // matrix_dz.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//          ***Перемножение матриц***

#include <iostream>

int matrix() 
{
    std::size_t  row1, row2, col1, col2;
    double** a, ** b, ** c;

    std::cout << "Row1: "; // Количество строк первой матрицы
    std::cin >> row1;
    
    std::cout << "Col1: "; // Количество столбцов первой матрицы
    std::cin >> col1;
    
    std::cout << "Row2: "; // Количество строк второй матрицы
    std::cin >> row2;
    
    std::cout << "Col2: "; // Количество столбцов второй матрицы
    std::cin >> col2;

    if (col1 != row2) // Условие перемножения матриц
    {
        std::cout << "Multiplication is impossible";
        std::cin.get(); std::cin.get();
        return 0;
    }

    // Ввод элементов первой матрицы
    a = new double* [row1];
    std::cout << "Enter elements first matrix" << std::endl;
        for (std::size_t i = 0; i < row1; i++)    
        {
            a[i] = new double[col1];
            for (std::size_t j = 0; j < col1; j++)
            {
                std::cout << "a[" << i + 1 << "][" << j + 1 << "]= ";
                std::cin >> a[i][j];
            }
        }

    // Вывод элементов первой матрицы
    for (std::size_t i = 0; i < row1; i++)
    {
        for (std::size_t j = 0; j < col1; j++)
            std::cout << a[i][j] << " ";
        std::cout << std::endl;
    }

    // Ввод элементов второй матрицы
    b = new double* [row2];
    std::cout << "Enter elements second matrix" << std::endl;
    for (std::size_t i = 0; i < row2; i++)
    {
        b[i] = new double[col2];
        for (std::size_t j = 0; j < col2; j++)
        {
            std::cout << "b[" << i + 1 << "][" << j + 1 << "]= ";
            std::cin >> b[i][j];
        }
    }

    // Вывод элементов второй матрицы
    for (std::size_t i = 0; i < row2; i++)
    {
        for (std::size_t j = 0; j < col2; j++)
        {
            std::cout << b[i][j] << " ";
        }
        std::cout << std::endl;
    }

    // Умножение двух матриц
    c = new double* [row1];
    for (std::size_t i = 0; i < row1; i++)
    {
        c[i] = new double[col2];
        for (std::size_t j = 0; j < col2; j++)
        {
            c[i][j] = 0;
            for (std::size_t k = 0; k < col1; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
    }

    // Вывод матрицы произведения
    std::cout << "Multiplied Matrix" << std::endl;
    for (std::size_t i = 0; i < row1; i++)
    {
        for (std::size_t j = 0; j < col2; j++)
            std::cout << c[i][j] << " ";
        std::cout << std::endl;
    }
}

int main() 
{
    matrix();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
