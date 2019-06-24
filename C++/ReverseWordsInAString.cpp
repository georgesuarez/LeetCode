class Solution
{
public:
    void reverseWords(string &s)
    {
        stringstream ss(s);
        string word;

        ss >> s;

        while (ss >> word)
            s = word + " " + s;

        if (s[0] == ' ')
            s = "";
    }
};