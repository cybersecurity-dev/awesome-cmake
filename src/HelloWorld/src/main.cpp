#include <iostream>

#include "libmath_util.hpp"

int main() {
    
	for (std::uint64_t n : {0, 1, 2, 3, 4, 5, 6, 7, 17, 18, 19, 97}) {
        std::cout << n << (math_util::is_prime(n) ? " is prime\n" : " is not prime\n");
    }

    //call at compile-time:
    //static_assert(math_util::is_prime(97), "97 should be prime");
    return 0;
}
