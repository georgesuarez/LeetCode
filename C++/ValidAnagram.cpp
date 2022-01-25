#include <iostream>
#include <map>
#include <string>

using namespace std;

bool isAnagram(string s, string t) {
    if (s.length() != t.length()) {
        return false;
    }

    map<char, int> sMap;
    map<char, int> tMap;

    for (int i = 0; i < s.length(); i++) {
        sMap[s[i]]++;
        tMap[t[i]]++;
    }

    for (auto i : tMap) {
        char key = i.first;
        if (sMap.find(key)->second != tMap.find(key)->second ) {
            return false;
        }
    }

    return true;
}

int main() {

    string s = "anagram";
    string t = "nagaram";

    cout << isAnagram(s, t) << endl;

    return 0;
}