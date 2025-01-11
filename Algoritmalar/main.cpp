#include "MatematikAlgoritmalari.h"
#include <iostream>

int main()
{
    MatematikAlgoritmalari alg;
    int selection = 0;
    std::cout << "Select Operation: " << std::endl;
    std::cout << "1: PascalTriangleRowSum " << std::endl;

    std::cin >> selection;


    switch (selection)
    {
        case 1:
        {
            int row = 0;
            std::cout << "Enter Row Number: ";
            std::cin >> row;

            std::cout << "Result: " << alg.PascalTriangleRowSum(row) << std::endl;
        }
    }



    return 0;
}
