#include <iostream>
#include <vector>
#include <map>

std::map<int, int> lookUpTable;

int fib(int n)
{
    auto search = lookUpTable.find(n);
    int f;

    if (search != lookUpTable.end())
    {
        return lookUpTable[n];
    }
    else if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        f = fib(n - 1) + fib(n - 2);
    }

    lookUpTable[n] = f;
    return f;
}

int main()
{
    std::cout << fib(30);
    return 0;
}