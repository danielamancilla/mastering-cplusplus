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