// Proba_GitHub.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale.h>
#include <cstdlib>
using namespace std;
int Multiply(int x, int y)
{
    return x * y ;

}

int Sum(int a, int b)
{
    return a + b;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int a = 2, b = 5;
    cout << "a + b = " << Sum(a, b);

    
    return 0;
}


