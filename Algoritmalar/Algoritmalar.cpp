#include "Algoritmalar.h"
#include <cmath>
#include <map>
#include <unordered_map>
#include <set>
#include <vector>
#include <iostream>
#include <climits>
#include <algorithm>

Algoritmalar::Algoritmalar() {}

int Algoritmalar::PascalTriangleRowSum(int row)
{
    int sum = pow(2, row);

    return sum;
}

int Algoritmalar::MostFreqMember(const int arr[], int size)
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

std::string Algoritmalar::MinWindowSubstring(std::string strArr[], int size)
{
    std::string N = strArr[0];
    std::string K = strArr[1];

    std::unordered_map<char, int> targetCount;
    for (char ch : K) {
        targetCount[ch]++;
    }

    int left = 0, right = 0;
    int minLength = INT_MAX;
    int minLeft = 0;
    std::unordered_map<char, int> windowCount;
    int requiredChars = targetCount.size();
    int matchedChars = 0;

    while (right < N.size()) {
        char rightChar = N[right];
        windowCount[rightChar]++;

        if (targetCount.find(rightChar) != targetCount.end() &&
            windowCount[rightChar] == targetCount[rightChar]) {
            matchedChars++;
        }

        while (left <= right && matchedChars == requiredChars) {
            int windowLength = right - left + 1;
            if (windowLength < minLength) {
                minLength = windowLength;
                minLeft = left;
            }

            char leftChar = N[left];
            windowCount[leftChar]--;
            if (targetCount.find(leftChar) != targetCount.end() &&
                windowCount[leftChar] < targetCount[leftChar]) {
                matchedChars--;
            }
            left++;
        }

        right++;
    }

    return minLength == INT_MAX ? "" : N.substr(minLeft, minLength);
}

std::string Algoritmalar::FindIntersection(std::string strArr[], int arrLength)
{
    std::vector <int> vec1;
    std::vector <int> vec2;

    std::string temp = "";

    for (auto ch : strArr[0])
    {
        if (ch == ',')
        {
            vec1.push_back(std::stoi(temp) );
            temp = "";
        }
        else if (ch != ' ')
        {
            temp += ch;
        }
    }
    vec1.push_back( std::stoi(temp) );

    temp = "";
    for (auto ch : strArr[1])
    {
        if (ch == ',')
        {
            vec2.push_back(std::stoi(temp) );
            temp = "";
        }
        else if (ch != ' ')
        {
            temp += ch;
        }
    }
    vec2.push_back( std::stoi(temp) );

    std::set <int> setArr;
    for (auto x : vec1)
    {
        if (std::find(vec2.begin(), vec2.end(), x ) != vec2.end()) {
            setArr.insert(x);
        }
    }

    std::string result;
    int pos = 1;
    for (auto ind : setArr)
    {
        if (pos != setArr.size())
        {
            result += std::to_string(ind);
            result += ", ";
        }
        else
        {
            result += std::to_string(ind);
            break;
        }
        pos++;
    }

    return result;
}


std::string Algoritmalar::CodelandUsernameValidation(std::string str)
{
    size_t size = str.size();

    if (size < 4 || size > 25)
    {
        return "false";
    }
    else if (!isalpha(str.at(0) ) )
    {
        return "false";
    }
    else if (str.at( str.size() - 1 ) == '_')
    {
        return "false";
    }
    else
    {
        for (auto ch : str)
        {
            if ( !isalnum(ch) && ch != '_')
            {
                return "false";
            }
        }
    }

    return "true";
}
