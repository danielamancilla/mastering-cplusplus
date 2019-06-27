/**
 * @file    functor.cxx
 * @author  Daniela Mancilla (https://git.io/fjr54)
 * @brief   A functor a.k.a. function object is a class that acts like
 *          a function. It's called as a function and is created by having
 *          an object that overloads the operator()
 * 
 * @version 0.1
 * @date 2019-06-27
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include <iostream>
#include <vector>
#include <algorithm>

/**
 * @brief       Prints out STL vector
 * 
 * @tparam T    type of the vector
 * @param v     the vector to be printed out
 */
template <typename T>
inline void PrintVector(std::vector<T> v)
{
    typename std::vector<T>::iterator it = v.begin();
    for (; it != v.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

/**
 * @brief   Functor class
 * 
 */
class Squaring
{
public:
    Squaring() {}
    int operator()(int arr_num) const { return arr_num * arr_num; }
};

int main()
{
    std::vector<int> base;
    std::vector<int> transformed;

    for (int i = 1; i <= 3; i++)
        base.push_back(i);

    transformed.resize(base.size());
    std::transform(base.begin(), base.end(), transformed.begin(), Squaring());

    std::cout << "\n- Functor -" << std::endl;
    PrintVector(base);
    PrintVector(transformed);

    return 0;
}