#include <iostream>
#include <string>
#include <vector>

/**
 * @brief       Prints out STL vector
 * 
 * @tparam T    type of the vector
 * @param v     the vector to be printed out
 */
template <typename T>
inline void PrintVector(std::vector<T> v) {
    typename std::vector<T>::iterator it = v.begin();
    for (; it != v.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

/**
 * @brief 
 * 
 */
class AddressBook
{
public:
    template <typename Func>
    std::vector<std::string> FindMatchingAdresses(Func mathingFunc)
    {
        std::vector<std::string> results;
        for (auto it = _addresses.begin(); it != _addresses.end(); ++it)
            if (func(*it))
                results.push_back(*it);

        return results;
    }

private:
    std::vector<std::string> _addresses;
};


int main()
{
    AddressBook *myAddressBook;

    auto byOrg = [](const std::string &addr) { return addr.find(".org") != std::string::npos; };
    myAddressBook->FindMatchingAdresses(byOrg);

    return 0;
}