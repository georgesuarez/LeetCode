#include <iostream>
#include <string>
#include <map>

using namespace std;

int firstUniqChar(string s) {
    map<char, int> uniqueCharMap;

    for (int i = 0; i < s.length(); i++) {
       map<char, int>::iterator pos = uniqueCharMap.find(s[i]);
       if (pos == uniqueCharMap.end()) {
           uniqueCharMap[s[i]] = 1;
       } else {
           (*pos).second++;
       }
    }

    for (int i = 0; i < s.length(); i++) {
        if (uniqueCharMap[s[i]] == 1) {
            return i;
        }
    }
    return -1;
}

int main() {

    string s = "leetcode";

    int result = firstUniqChar(s);

    cout << result << endl;

    return 0;
}
