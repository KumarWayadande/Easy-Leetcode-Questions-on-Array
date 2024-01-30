/*
--------------------------------------
Code Version : 1
Author : Kumar Wayadande
Upgraded Version ? No
Test Cases : all test cases passed
--------------------------------------
*/
#include <iostream>
#include <string>
#include <set>
#include <vector>
#include <map>
using namespace std;

class Solution
{
public:
    int uniqueMorseRepresentations(vector<string> &words)
    {
        map<char, string> table;
        vector<string> characters = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
        set<string> uniquePatterns;
        string word = "";
        char ch = 'a';

        for(string x : characters){
            table[ch++] = x;
        }

        for(string x : words){
            word = "";
            for(char ch : x)
                word += table[ch];

            uniquePatterns.insert(word);
        }

        
        return uniquePatterns.size();
    }
};

int main()
{
    Solution s;
    vector<string> words = {"a"};
    cout << s.uniqueMorseRepresentations(words);
    return 0;
}


/*
--------------------------------------
End of code version 1
all test cases passed
--------------------------------------
*/