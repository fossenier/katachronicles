#include <iostream>

class WeightSort
{
public:
    static std::string orderWeight(const std::string &strng);
};

int main()
{
    std::cout << WeightSort::orderWeight("103 123 4444 99 2000") << std::endl;
    return 0;
}