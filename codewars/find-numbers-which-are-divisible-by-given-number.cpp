#include <algorithm>

std::vector<int> divisible_by(std::vector<int> numbers, int divisor)
{
    std::vector<int> out;
    std::copy_if(numbers.begin(), numbers.end(),  std::back_inserter(out), [divisor](int i){ return i%divisor == 0; });
    return out;
}
