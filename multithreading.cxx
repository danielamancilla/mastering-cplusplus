#include <iostream>
#include <vector>

int Accumulate(const std::vector<int> &v)
{
    int accum = 0;
    std::vector<int>::const_iterator it = v.begin();

    for (; it != v.end(); ++it)
        accum += *it;

    return accum;
}

int main()
{
    std::vector<int> vin;
    int in;
    
    std::cout << "\nType a series of integers separated by enter. Type zero to finish." << std::endl;
    do
    {
        std::cin >> in;
        vin.push_back(in);
    } while (in != 0);

    std::cout << "\n\n\tAccumulation: " << Accumulate(vin) << std::endl;
}