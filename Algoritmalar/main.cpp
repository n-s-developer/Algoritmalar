#include "MatematikAlgoritmalari.h"
#include <iostream>
#include <vector>

void SelectCase(int selection);

int main()
{
    int selection = 1;

    while(selection != 0)
    {
        std::cout << "Select Operation: " << std::endl;
        std::cout << "0: EXIT" << std::endl;
        std::cout << "1: PascalTriangleRowSum " << std::endl;
        std::cout << "2: MostFreqMember" << std::endl;

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

        std::cout << "Result: " << MatematikAlgoritmalari::PascalTriangleRowSum(row) << std::endl;
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

        std::cout << "Result: " << MatematikAlgoritmalari::MostFreqMember(arr, size)<< std::endl;

        break;

    }
    }
}
