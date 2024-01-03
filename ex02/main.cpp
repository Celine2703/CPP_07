#include <iostream>
#include <stdlib.h>
#include "Array.hpp"

#define MAX_VAL 15
int main(int, char**)
{
    Array<int> arrayNumbers(MAX_VAL);
    int* copyArray = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand() % 1000;
        arrayNumbers[i] = value;
        copyArray[i] = value;
    }

    {
        Array<int> tmp = arrayNumbers; // test operator=
        Array<int> test(tmp);// test copy constructor

        for (int i = 0; i < MAX_VAL; i++)
        {
            if (test[i] != arrayNumbers[i] || tmp[i] != arrayNumbers[i])
            {
                std::cerr << "didn't save the same value!!" << std::endl;
                return 1;
            }
        }
    }
    // destructors should be called here so we can test if the array is correctly deep copied

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (copyArray[i] != arrayNumbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
        std::cout << " arrayNumbers["<<i<<"] = " << arrayNumbers[i] << std::endl;
        std::cout << " copyArray["<<i<<"] = " << copyArray[i] << std::endl;
    }
    try
    {
        std::cout << "test : arrayNumbers[-2]" << std::endl;
        arrayNumbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "test : arrayNumbers[MAX_VAL]" << std::endl;
        arrayNumbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        arrayNumbers[i] = rand() % 1000;
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        std::cout << " arrayNumbers["<<i<<"] = " << arrayNumbers[i] << std::endl;
    }
    delete [] copyArray;
    return 0;
}