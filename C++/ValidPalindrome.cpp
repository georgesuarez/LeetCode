#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


class Solution {
    public:
        bool isPalindrome(string s) {
            if (s == " ")
                return true;

            string reversedStr = "";

            for (int i = 0; i < s.length(); i++) {
                if (ispunct(s[i]) || isspace(s[i])) {
                    continue;
                } else {
                    reversedStr.push_back(tolower(s[i]));
                }
            }

            s = reversedStr;

            reverse(reversedStr.begin(), reversedStr.end());

            return (s == reversedStr) ? true : false;    
        }
};
