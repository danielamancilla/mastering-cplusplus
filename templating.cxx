#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
inline T Squaring(const T n) { return n * n;  }

template <typename T>
inline void PrintVector(std::vector<T> v) {
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