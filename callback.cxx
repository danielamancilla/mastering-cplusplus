/**
 * @file    callback.cxx
 * @author  Daniela Mancilla (danielamancillav@gmail.com)
 * @brief   Callback designed as a function pointer (pointer to function)
 *          This small program encrypts a message depending on the encrypter
 *          function called (callback) by BuildEncryptedMessage()
 * 
 * @version 0.1
 * @date    2019-07-09
 * 
 * @copyright Copyright (c) 2019
 * 
 */
#include <iostream>
#include <string>

std::string EncryptByLetterIncrement(std::string raw)
{
    for (unsigned int i = 0; i < raw.size(); i++)
        if (raw[i] >= 'a' && raw[i] <= 'z' || raw[i] >= 'A' && raw[i] <= 'Z')
            raw[i]--;

    return raw;
}

std::string EncryptByLetterDecrement(std::string raw)
{
    for (unsigned int i = 0; i < raw.size(); i++)
        if (raw[i] >= 'a' && raw[i] <= 'z' || raw[i] >= 'A' && raw[i] <= 'Z')
            raw[i]++;

    return raw;
}

/**
 * @brief Function that calls back encryption
 * 
 * @param raw 
 * @param encrypterFunc 
 * @return std::string 
 */
std::string BuildEncryptedMessage(std::string raw, std::string (*encrypterFunc)(std::string))
{
    std::string encrypted = encrypterFunc(raw);
    std::string message = "[HEADER]" + encrypted + "[FOOTER]";

    return message;
}

int main()
{
    std::string data;

    std::cout << "\nType a text to encrypt:";
    std::cin >> data;
    if (!data.empty())
    {
        std::cout << "\nEncrypted by letter increment:\t" << BuildEncryptedMessage(data, &EncryptByLetterIncrement);
        std::cout << "\nEncrypted by letter decrement:\t" << BuildEncryptedMessage(data, &EncryptByLetterDecrement);
        std::cout << std::endl;
    }
    else
        std::cout << "\n\tNo text provided!" << std::endl;

    return 0;
}