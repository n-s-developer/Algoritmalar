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
        std::cout << "6: QuestionsMarks" << std::endl;
        std::cout << "7: FirstReverse" << std::endl;
        std::cout << "8: FirstFactorial" << std::endl;
        std::cout << "9: LongestWord" << std::endl;
        std::cout << "10: BracketMatcher" << std::endl;
        std::cout << "11: TreeConstructor" << std::endl;

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
        case 6:
        {
            std::string str = { "aa6?9" };
            std::cout << "str: " << str << std::endl;
            std::cout << Algoritmalar::QuestionsMarks(str) << std::endl;

            str = {"arrb6???4xxbl5???eee5"};
            std::cout << "str: " << str << std::endl;
            std::cout << Algoritmalar::QuestionsMarks(str) << std::endl;

            str = { "acc?7??sss?3rr1??????5" };
            std::cout << "str: " << str << std::endl;
            std::cout << Algoritmalar::QuestionsMarks(str) << std::endl;
            break;
        }
        case 7:
        {
            std::string str = { "coderbyte" };
            std::cout << "str: " << str << std::endl;
            std::cout << Algoritmalar::FirstReverse(str) << std::endl;

            str = {"I Love Code"};
            std::cout << "str: " << str << std::endl;
            std::cout << Algoritmalar::FirstReverse(str) << std::endl;

            str = { "Hello World and Coders" };
            std::cout << "str: " << str << std::endl;
            std::cout << Algoritmalar::FirstReverse(str) << std::endl;
            break;
        }
        case 8:
        {
            int num = 18;
            std::cout << "num: " << num << std::endl;
            std::cout << Algoritmalar::FirstFactorial(num) << std::endl;

            num = 1;
            std::cout << "num: " << num << std::endl;
            std::cout << Algoritmalar::FirstFactorial(num) << std::endl;

            num = 5;
            std::cout << "num: " << num << std::endl;
            std::cout << Algoritmalar::FirstFactorial(num) << std::endl;
            break;
        }
        case 9:
        {
            std::string str = "fun&!! time";
            std::cout << "str: " << str << std::endl;
            std::cout << Algoritmalar::LongestWord(str) <<std::endl;

            str = "I love dogs";
            std::cout << "str: " << str << std::endl;
            std::cout << Algoritmalar::LongestWord(str) << std::endl;
            break;
        }
        case 10:
        {
            std::string str = "(coder)(byte))";
            std::cout << "str: " << str << std::endl;
            std::cout << Algoritmalar::BracketMatcher(str) <<std::endl;

            str = "(c(oder)) b(yte)";
            std::cout << "str: " << str << std::endl;
            std::cout << Algoritmalar::BracketMatcher(str) << std::endl;
            break;
        }
        case 11:
        {
            std::string str[] = {"(1,2)", "(2,4)", "(5,7)", "(7,2)", "(9,5)"};
            std::cout << Algoritmalar::TreeConstructor(str, 5) <<std::endl;

            std::string str2[] = { "(1,2)", "(3,2)", "(2,12)", "(5,2)" };
            std::cout << Algoritmalar::TreeConstructor(str2, 4) << std::endl;
            break;
        }
    }
}
