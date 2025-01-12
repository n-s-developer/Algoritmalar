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
};

#endif // ALGORITMALAR_H
