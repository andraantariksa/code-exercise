#ifndef REVERSE_STRING_H
#define REVERSE_STRING_H
#include <algorithm>
#include <string>

namespace reverse_string {
    inline std::string reverse_string(std::string s){
        std::reverse(s.begin(), s.end());
        return s;
    }
}
#ifndef
