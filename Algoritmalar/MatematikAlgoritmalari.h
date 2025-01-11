#ifndef MATEMATIKALGORITMALARI_H
#define MATEMATIKALGORITMALARI_H

#include <string>

class MatematikAlgoritmalari
{
public:
    MatematikAlgoritmalari();
    static int PascalTriangleRowSum(const int row);
    static int MostFreqMember(const int arr[], int size);
    static std::string MinWindowSubstring(std::string strArr[], int size);
    static std::string FindIntersection(std::string strArr[], int arrLength);

};

#endif // MATEMATIKALGORITMALARI_H
