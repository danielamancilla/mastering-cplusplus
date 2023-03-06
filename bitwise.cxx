/**
 * @file        bitwise.cxx
 * @author      Daniela Mancilla (danielamancillav@gmail.com)
 * @brief       A forget me not on bitwise operators.
 *
 *
 *                      2^7     2^6     2^5     2^4     2^3     2^2     2^1     2^0
 *                      128     64      32      16      8       4       2       1
 *                      -----------------------------------------------------------------
 *                      0       0       0       0       0       1       1       1       |       7
 *                      0       0       0       0       1       0       1       0       |       10
 *          A&B         0       0       0       0       0       0       1       0       |       2
 *          A|B         0       0       0       0       1       1       1       1       |       15
 *          A^B         0       0       0       0       1       1       0       1       |       13
 *          A>>1        0       0       0       0       0       0       1       1       |       3
 *          A<<1        0       0       0       0       1       1       1       0       |       14
 *          -----------------------------------------------------------------------------
 *
 *
 */

#include <iostream>

int main()
{
    const uint32_t A = 7, B = 10;
    std::cout << "Bitwise Operations of A=7 and B=10" << std::endl;
    std::cout << "A&B : " << (A&B) << std::endl;
    std::cout << "A|B : " << (A|B) << std::endl;
    std::cout << "A^B : " << (A^B) << std::endl;
    std::cout << "A>>1 : " << (A>>1) << std::endl;
    std::cout << "A<<1 : " << (A<<1) << std::endl;

    return 1;
}