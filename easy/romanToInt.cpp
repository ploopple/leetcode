#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    int count = 0;
    string word = "III";
    map <const char, int> romanToInt;
    romanToInt['I'] = 1;
    romanToInt['V'] = 5;
    romanToInt['X'] = 10;
    romanToInt['L'] = 50;
    romanToInt['C'] = 100;
    romanToInt['D'] = 500;
    romanToInt['M'] = 1000;


    for(int i = 0; i < word.length(); i++) {
        if(word[i+1]) {
            if(romanToInt[word[i]] < romanToInt[word[i+1]]) {
                count += romanToInt[word[i+1]] - romanToInt[word[i]];
                i++;
                continue;
            }
        }
            count += romanToInt[word[i]];
    }

    cout << count << endl;
    return 0;
}