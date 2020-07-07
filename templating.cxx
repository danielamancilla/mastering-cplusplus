/**
 * @file    templating.cxx
 * @author  Daniela Mancilla (https://git.io/fjr54)
 * @brief   Creates a couple of templates: (1) to allow you to square a number
 *          and (2) to print out a STL vector
 * 
 * @version 0.1
 * @date    2019-06-26
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include <iostream>
#include <vector>
#include <algorithm>


/**
 * @brief       Squares a given number of type T
 * 
 * @tparam T    type of number
 * @param n     the number to be squared
 * @return T    the result
 */
template <typename T>
inline T Squaring(const T n) { return n * n;  }

/**
 * @brief       Prints out STL vector
 * 
 * @tparam T    type of the vector
 * @param v     the vector to be printed out
 */
template <typename T>
void PrintVector(std::vector<T> v) {
    typename std::vector<T>::iterator it = v.begin();
    for (; it != v.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

int main() {
    std::vector<int> base;
    std::vector<int> transformed;

    for (int i = 1; i <= 3 ; i++)
        base.push_back(i);

    transformed.resize(base.size());
    std::transform(base.begin(), base.end(), transformed.begin(), &Squaring<int>);

    PrintVector(base);
    PrintVector(transformed);

    return 0;
}
