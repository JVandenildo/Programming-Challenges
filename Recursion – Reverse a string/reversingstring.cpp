#include <iostream>
#include <string>

std::string reverse(std::string word)
{
    std::string reversedWord = "";
    int wordLength = word.length();

    while (reversedWord.size() < word.size())
    {
        reversedWord.push_back(word[wordLength - 1]);
        wordLength = wordLength - 1;
    }

    return reversedWord;
}

int main()
{
    std::string word;
    std::cout << "Desired word: ";
    std::cin >> word;

    std::cout << reverse(word);

    return 0;
}