class Solution
{
public:
    int numJewelsInStones(string J, string S)
    {
        int count = 0;
        for (int i = 0; i < J.length(); i++)
        {
            count += std::count(S.begin(), S.end(), J[i]);
        }
        return count;
    }
};