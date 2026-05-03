#include <iostream>
#include <fstream>
#include <string>
#include "stack.h"
using namespace std;

bool isPalindrome(const string& word)
{
    Stack stack(word.length());
    for (int i = 0; i < word.length(); i++)
    {
        stack.push(word[i]);
    }
    for (int i = 0; i < word.length(); i++)
    {
        if (stack.pop() != word[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ifstream file("Pallindrome.txt");
    string word;

    if (!file)
    {
        cout << "File not found" << endl;
        return 1;
    }

    while (file >> word)
    {
        if (isPalindrome(word))
        {
            cout << word << " is a palindrome" << endl;
        }
        else
        {
            cout << word << " is not a palindrome" << endl;
        }
    }

    file.close();
    return 0;
}