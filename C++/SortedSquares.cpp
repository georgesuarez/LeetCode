#include <iostream>
#include <algorithm>
#include <vector>

std::vector<int> sortedSquares(std::vector<int> &A)
{
    for (size_t i = 0; i < A.size(); i++)
    {
        if (A[i] < 0)
        {
            A[i] = -A[i];
        }
    }

    for (size_t i = 0; i < A.size(); i++)
    {
        A[i] = A[i] * A[i];
    }

    std::sort(A.begin(), A.end());

    return A;
}

int main()
{
    std::vector<int> A = {-4, -1, 0, 3, 10};

    A = sortedSquares(A);

    for (size_t i = 0; i < A.size(); i++)
    {
        std::cout << A[i] << " ";
    }

    return 0;
}