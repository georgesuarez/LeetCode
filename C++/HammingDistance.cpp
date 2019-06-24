class Solution
{
public:
    int hammingDistance(int x, int y)
    {
        int distance = 0;
        for (int i = x ^ y; i > 0; i /= 2)
        {
            if (i & 1)
                distance++;
        }

        return distance;
    }
};