#ifndef ALGORITMALAR_H
#define ALGORITMALAR_H

#include <string>

class Algoritmalar
{
public:
    Algoritmalar();
    static int PascalTriangleRowSum(const int row);
    static int MostFreqMember(const int arr[], int size);
    static std::string MinWindowSubstring(std::string strArr[], int size);
    static std::string FindIntersection(std::string strArr[], int arrLength);
    static std::string CodelandUsernameValidation(std::string str);
    static std::string QuestionsMarks(std::string str);
    static std::string FirstReverse(std::string str);
    static unsigned long long FirstFactorial(int num);
    static std::string LongestWord(std::string sen);
    static std::string BracketMatcher(std::string str);
    static std::string TreeConstructor(std::string strArr[], int arrLength);
};

#endif // ALGORITMALAR_H
