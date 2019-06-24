class Solution
{
public:
    string toLowerCase(string str)
    {
        string lowerCaseStr = "";
        for (int i = 0; i < str.length(); i++)
        {
            lowerCaseStr += tolower(str[i]);
        }
        return lowerCaseStr;
    }
};