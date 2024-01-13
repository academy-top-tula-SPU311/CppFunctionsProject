#include <iostream>

int globalVar{ 100 };

void PrintCharsN(char ch = '*', int n = 10);
double Power(double x, int n = 2);
void Swap(int a, int b);

int Counter()
{
    static int count{};
    return ++count;
}

int main()
{
    
    std::cout << Counter() << "\n";
    std::cout << Counter() << "\n";
    std::cout << Counter() << "\n";
    std::cout << Counter() << "\n";


    globalVar = 200;

    int n{ 17 };

    std::cout << n << "\n";

    PrintCharsN();
    std::cout << Counter() << "\n";

    double radius{ 50.5 };

    std::cout << 3.14 * Power(radius) << "\n";

    PrintCharsN('-', n + n);

    int a{ 10 }, b{ 20 };
    std::cout << a << " " << b << "\n";
    Swap(a, b);
    std::cout << a << " " << b << "\n";
}

void PrintCharsN(char ch, int n)
{
    Counter();
    for (int i{}; i < n; i++)
        std::cout << ch;
    std::cout << "\n";
}

double Power(double x, int n)
{
    globalVar = 300;

    double power{ 1 };
    for (int i = 0; i < n; i++)
        power *= x;
    return power;
}

int Func100()
{
    PrintCharsN('$', 5);
    return 100;
}

void Swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}