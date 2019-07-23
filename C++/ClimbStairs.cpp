class Solution
{
public:
    map<int, int> lookUpTable;

    int climbStairs(int n)
    {
        auto search = lookUpTable.find(n);
        int f;

        if (search != lookUpTable.end())
        {
            return lookUpTable[n];
        }
        else if (n == 1)
        {
            return 1;
        }
        else if (n == 2)
        {
            return 2;
        }
        else
        {
            f = climbStairs(n - 1) + climbStairs(n - 2);
        }

        lookUpTable[n] = f;
        return f;
    }
}