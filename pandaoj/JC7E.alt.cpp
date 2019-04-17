#include <cstdint>
#include <iostream>

using u64 = std::uint_fast64_t;


static u64 modpow(u64 x, u64 y, u64 mod)
{
    u64 result = 1;
    while (y) {
        if (y%2) {
            result = result * x % mod;
        }
        x = x * x % mod;
        y /= 2;
    }

    return result;
}

static u64 exp4mod(u64 x)
{
    static auto const mod = 3000000021;
    static auto const chunk_size = 16;

    static const u64 one = 1;
    static auto const residue = (one << 2*chunk_size) % mod; // 4^15%mod = 73741817

    const auto a = x / chunk_size;
    const auto b = x % chunk_size;
    return (modpow(residue, a, mod) << (2 * b)) % mod;
}

int main()
{
    std::cin>>n;
    std::cout << (exp4mod(n) + 2) / 3 << '\n';
}
