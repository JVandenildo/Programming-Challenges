#include <iostream>
#include <string>

std::string reverse(std::string word)
{
    std::string reversedParameter;
    reversedParameter = word.length();

    return reversedParameter;
}

int main()
{
    std::string word;
    std::cout << "Desired word: ";
    std::cin >> word;

    std::cout << reverse(word);

    return 0;
}