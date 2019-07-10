/**
 * @file        async.cxx
 * @author      Daniela Mancilla (danielamancillav@gmail.com)
 * @brief       Checks whether a given integer is prime or not
 *              through async call of method
 * 
 * @version     0.1
 * @date        2019-07-10
 * 
 * @copyright   Copyright (c) 2019
 * 
 */
#include <iostream>
#include <future>

/**
 * @brief   Returns whether integer is prime
 * 
 * @param x     the integer
 * @return bool the result
 */
bool IsPrimeNumber(int x)
{
    for (int i = 2; i < x; ++i)
        return (x % i == 0) ? false : true;
}


int main()
{
    int n;
    std::cout << "\nType a number to check if prime: ";
    std::cin >> n;

    std::future<bool> f = std::async(IsPrimeNumber, n);
    std::cout << "\n\tValidating if "<< n << " is prime: ";
    std::cout << (f.get() ? "PRIME!" : "NOT PRIME!") << std::endl;

    return 0;
}
