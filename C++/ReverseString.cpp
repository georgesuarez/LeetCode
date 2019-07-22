class Solution
{
public:
    void swap(char &a, char &b)
    {
        char temp = a;
        a = b;
        b = temp;
    }

    void reverseString(vector<char> &s)
    {
        int startIndex = 0;
        int lastIndex = s.size() - 1;
        for (int i = 0; i < s.size() / 2; i++)
        {
            swap(s[startIndex], s[lastIndex]);
            startIndex++;
            lastIndex--;
        }
    }
}