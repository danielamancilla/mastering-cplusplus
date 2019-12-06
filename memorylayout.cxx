/**
 * @file    memorylayout.cxx
 * @author  Daniela Mancilla (danielamancillav@gmail.com)
 * @brief   understanding memory allocation. The output of 'size' was
 * 
 *          text    data    bss     dec     hex
 *          1605	612	    20	    2237	8bd
 * 
 *      where:
 * 
 *          text - sice of source code instructions (code segment)
 *          data - size of initialized data (data segment)
 *          bss - size of unitialized data (symbol segment)
 *          dec - text + data + bss (in decimals)
 *          hex - text + data + bss (in hexadecimal)
 *          
 * 
 * @version 0.1
 * @date    2019-12-06
 *  
 */
#include <iostream>

int global;         // unitialized stored in bss

int main ()
{
    static int i;   // also unitialized stored in bss
    return 0;
}
