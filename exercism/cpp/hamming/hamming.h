#ifndef HAMMING_H
#define HAMMING_H
#include <cstring>
#include <stdexcept>

namespace hamming {
    inline int compute(const char *a, const char *b){
        if(std::strlen(a) != std::strlen(b)){
            throw std::domain_error("String length are not the same");
        }
        int different_char = 0;
        unsigned int a_len = std::strlen(a);
        for (unsigned int i = 0; i < a_len; i++) {
            if(a[i] != b[i]){
                different_char++;
            }
        }
        return different_char;
    }
}
#endif
