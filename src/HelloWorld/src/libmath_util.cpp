#include "libmath_util.hpp"

namespace math_util {

bool is_prime(std::uint64_t n) noexcept {
    if (n < 2) return false;
    if ((n % 2u) == 0u) return n == 2;
    if ((n % 3u) == 0u) return n == 3;

    // Check 6k ± 1 up to sqrt(n)
    for (std::uint64_t i = 5; i * i <= n; i += 6) {
        if ((n % i) == 0u || (n % (i + 2)) == 0u) {
            return false;
        }
    }
    return true;
}

}