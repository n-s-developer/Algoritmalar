#include "Algoritmalar.h"
#include <iostream>
#include <vector>
#include <string>

void SelectCase(int selection);

int main()
{
    int selection = 4;

    while(selection != 0)
    {
        std::cout << "Select Operation: " << std::endl;
        std::cout << "0: EXIT" << std::endl;
        std::cout << "1: PascalTriangleRowSum " << std::endl;
        std::cout << "2: MostFreqMember" << std::endl;
        std::cout << "3: MinWindowSubstring" << std::endl;
        std::cout << "4: FindIntersection" << std::endl;
        std::cout << "5: CodelandUsernameValidation" << std::endl;

        std::cin >> selection;

        if (selection == 0)
        {
            break;
        }
        else
        {
            SelectCase(selection);
        }
    }

    return 0;
}

void SelectCase(int selection)
{
    switch (selection)
    {
        case 1:
        {
            int row = 0;
            std::cout << "First Row is 0 \nEnter Row Number: ";
            std::cin >> row;

            std::cout << "Result: " << Algoritmalar::PascalTriangleRowSum(row) << std::endl;
            break;
        }
        case 2:
        {
            int size = 0;
            std::cout << "Enter Arr size: ";
            std::cin >> size;

            std::vector <int> temp;

            int member = 0;
            for(int i = 0; i < size; i++)
            {
                std::cout << "Enter Member: " << std::endl;
                std::cin >> member;
                temp.push_back(member);
            }

            int arr[size];
            for (int i = 0; i < size; i++)
            {
                arr[i] = temp[i];
            }

            std::cout << "Result: " << Algoritmalar::MostFreqMember(arr, size)<< std::endl;

            break;
        }
        case 3:
        {
            /*
             * {"ahffaksfajeeubsne", "jefaa"}, {"aaffhkksemckelloe", "fhea"}
            */
            std::string strArr[2];
            std::cout << "Enter first string: ";
            std::cin >> strArr[0];
            std::cout << "Enter second string: ";
            std::cin >> strArr[1];

            std::cout << "Result: " << Algoritmalar::MinWindowSubstring(strArr, 2)<< std::endl;

            break;
        }
        case 4:
        {
            std::string strArr[2]={"1, 3, 4, 7, 13", "1, 2, 4, 13, 15"};

            std::cout << "Result: " << Algoritmalar::FindIntersection(strArr, 2)<< std::endl;
            break;
        }
        case 5:
        {
            std::string str = {"deneme213_denemese'"};
            std::cout << "str: " << str << std::endl;
            std::cout << Algoritmalar::CodelandUsernameValidation(str) << std::endl;

            str = {"_deneme213_denemese"};
            std::cout << "str: " << str << std::endl;
            std::cout << Algoritmalar::CodelandUsernameValidation(str) << std::endl;

            str = {"nur"};
            std::cout << "str: " << str << std::endl;
            std::cout << Algoritmalar::CodelandUsernameValidation(str) << std::endl;
            break;
        }
    }
}
