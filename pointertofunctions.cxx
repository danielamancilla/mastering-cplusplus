/**
 * @file    pointertofunctions.cxx
 * @author  Daniela Mancilla (danielamancillav@gmail.com)
 * @brief   Pointer to functions, aka function pointer
 *          The most common user of function pointer is as callback mechanism
 *          among other such as finite elements
 * 
 * @version 0.1
 * @date    2019-07-03
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include <iostream>
#include <stdlib.h>

int min(int a, int b) { return (b < a) ? b : a; }

int max(int a, int b) { return (b > a) ? b : a; }

int sum(int a, int b) { return a + b; }

int minus(int a, int b) { return a - b; }

int operation(char *x, char *y, int (*op)(int, int))
{
    int a = atoi(x);
    int b = atoi(y);

    return (*op)(a, b);
}

int main(int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cout << "\tUsage: " << argv[0] << " [Operation] <int1> <int2>\n"
                  << std::endl;
        return 0;
    }

    std::string op = argv[1];

    if (op.compare("min") == 0)
        std::cout << "\tMin:" << operation(argv[2], argv[3], min) << std::endl;
    else if (op.compare("max") == 0)
        std::cout << "\tMax: " << operation(argv[2], argv[3], max) << std::endl;
    else if (op.compare("sum") == 0)
        std::cout << "\tResult: " << operation(argv[2], argv[3], sum) << std::endl;
    else if (op.compare("minus") == 0)
        std::cout << "\tResult: " << operation(argv[2], argv[3], minus) << std::endl;
    else
        std::cout << "\tOperations: min, max, sum, minus" << std::endl;

    return 0;
}