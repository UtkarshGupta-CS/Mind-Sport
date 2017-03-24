#include <iostream>
#include <string>
using namespace std;

string replace(string word, char newChar, int pos)
{
    word = word.substr(0, pos) + newChar + word.substr(pos + 1);
    return word;
}

int main()
{
    string inputWord;
    cin >> inputWord;
    for (int i = 0; i < inputWord.length(); i++)
    {
        if (inputWord[i] == '?')
        {
            if (inputWord[i - 1] != 'a' && inputWord[i + 1] != 'a')
            {
                inputWord = replace(inputWord, 'a', i);
            }
            else
            {
                inputWord = replace(inputWord, 'b', i);
            }
        }
    }
    cout << inputWord;
    return 0;
}
