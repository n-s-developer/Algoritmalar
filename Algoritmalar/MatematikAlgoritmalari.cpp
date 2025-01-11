#include "MatematikAlgoritmalari.h"
#include <cmath>
#include <map>

MatematikAlgoritmalari::MatematikAlgoritmalari() {}

int MatematikAlgoritmalari::PascalTriangleRowSum(int row)
{
    int sum = pow(2, row);

    return sum;
}

int MatematikAlgoritmalari::MostFreqMember(const int arr[], int size)
{
    std::map <int, int> tempArr;

    for (int i = 0; i < size; i++)
    {
        tempArr[arr[i]]++;
    }

    int maxFreqMember = arr[0];
    int maxFreq = 1;

    for(int i = 0; i < size; i++)
    {
        if (maxFreq < tempArr[arr[i]])
        {
            maxFreqMember = arr[i];
            maxFreq = tempArr[arr[i]];
        }
    }
    return maxFreqMember;
}
