#include "Algoritmalar.h"
#include <cmath>
#include <map>
#include <unordered_map>
#include <set>
#include <vector>
#include <iostream>
#include <climits>
#include <algorithm>
#include <cctype>

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

std::string Algoritmalar::QuestionsMarks(std::string str)
{
    bool isDigitFlag = false;
    bool isThereAnyAddTo10 = false;
    std::string temp = {""};

    int first = 0;
    int second = 0;
    int QuestionMarkCount = 0;

    for (size_t i = 0; i < str.size(); i++)
    {
        if ( (isdigit(str.at(i))) &&
            (isDigitFlag == false) )
        {
            first = str[i] - '0'; // Convert Number
            isDigitFlag = true;
        }
        else if ( (isdigit(str.at(i))) &&
                 (isDigitFlag == true))
        {
            second = str[i] - '0'; // Convert Number

            if (first + second == 10)
            {
                for (auto ch : temp)
                {
                    if (ch == '?')
                    {
                        QuestionMarkCount++;
                    }
                }

                if (QuestionMarkCount != 3)
                {
                    return "false";
                }

                isThereAnyAddTo10 = true;
            }

            first = second; // Convert Number
            second = 0;
            temp = "";
            QuestionMarkCount = 0;
        }
        else if (isDigitFlag == true)
        {
            temp += str.at(i);
        }
    }

    if (isThereAnyAddTo10 == false)
    {
        return "false";
    }

    return "true";
}

std::string Algoritmalar::FirstReverse(std::string str)
{
    std::reverse(str.begin(), str.end());
    return str;
}

unsigned long long Algoritmalar::FirstFactorial(int num)
{
    unsigned long long result = 1;

    for (int i = num; i > 0; i--)
    {
        result *= i;
    }

    return result;
}

std::string Algoritmalar::LongestWord(std::string sen)
{
    std::string temp = "";
    std::vector <std::string> vecStr;

    for (auto ch : sen)
    {
        if (ch == ' ')
        {
            vecStr.push_back(temp);
            temp = "";
        }
        else if (!ispunct(ch))
        {
            temp += ch;
        }
    }
    vecStr.push_back(temp); // insert last value


    int maxSize = 0;
    std::string maxSizeWord = "";

    for (auto str : vecStr)
    {
        if (str.size() > maxSize)
        {
            maxSize = str.size();
            maxSizeWord = str;
        }
    }

    return maxSizeWord;
}

std::string Algoritmalar::BracketMatcher(std::string str)
{
    int count = 0;

    for (auto ch : str)
    {
        if (ch == '(')
        {
            count++;
        }
        else if (ch == ')')
        {
            count--;
        }
    }

    if (count == 0)
    {
        return "1";
    }
    else
    {
        return "0";
    }
}

std::string Algoritmalar::TreeConstructor(std::string strArr[], int arrLength)
{
    std::unordered_map<int, int> childParentMap;
    std::unordered_map<int, int> parentCountMap;
    std::unordered_map<int, int> childCountMap;

    for (int i = 0; i < arrLength; i++)
    {
        int first = 0, second = 0;
        bool FirstFlag = false, SecondFlag = false;

        for (auto ch : strArr[i])
        {
            if (ch == '(')
            {
                FirstFlag = true;
            }
            else if (FirstFlag)
            {
                first = ch - '0';
                FirstFlag = false;
            }
            else if (ch == ',')
            {
                SecondFlag = true;
            }
            else if (SecondFlag)
            {
                second = ch - '0';
                SecondFlag = false;
            }
        }

        if (childParentMap.find(first) != childParentMap.end())
        {
            return "false";
        }
        childParentMap[first] = second;
        parentCountMap[second]++;
        childCountMap[first]++;
    }

    for (const auto& entry : childCountMap)
    {
        if (entry.second > 1)
        {
            return "false";
        }
    }

    for (const auto& entry : parentCountMap)
    {
        if (entry.second > 2)
        {
            return "false";
        }
    }

    return "true";
}
