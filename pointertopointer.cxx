#include <iostream>
/**
 * @brief   A pointer that points to another pointer
 * 
 */
int main()
{
    unsigned int x = 26;
    unsigned int *y = &x;
    unsigned int **z = &y;

    std::cout << "\tx\t" << x << std::endl;
    std::cout << "\ty\t" << y << std::endl;
    std::cout << "\t*y\t" << *y << std::endl;
    std::cout << "\tz\t" << z << std::endl;
    std::cout << "\t*z\t" << *z << std::endl;
    std::cout << "\t**z\t" << **z << std::endl;

    return 0;
}
