#include <iostream>
#include <vector>
#include <thread>

void Accumulate(const std::vector<int> &v)
{
    int accum = 0;
    std::vector<int>::const_iterator it = v.begin();

    for (; it != v.end(); ++it)
        accum += *it;

    std::cout << "Accumulation:" << accum << std::endl;
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

    std::thread t1(Accumulate, vin);
    t1.join();
}