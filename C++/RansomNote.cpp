#include <iostream>
#include <map>
#include <string>

using namespace std;

bool canConstruct(string ransomNote, string magazine) {
    map<char, int> magazineMap;
    map<char, int> ransomNoteMap;

    for (int i = 0; i < ransomNote.length(); i++) {
        ransomNoteMap[ransomNote[i]]++;
    }

    for (int i = 0; i < magazine.length(); i++) {
        magazineMap[magazine[i]]++;
    }

    for (auto i : ransomNoteMap) {
        if (magazineMap.find(i.first) == magazineMap.end() || magazineMap[i.first] < ransomNoteMap[i.first]) {
            return false;
        }
    } 

    return true;
}

int main() {
    string s1 = "aab";
    string s2 = "baa";

    bool result = canConstruct(s1, s2);

    cout << result << endl;

    return 0;
}