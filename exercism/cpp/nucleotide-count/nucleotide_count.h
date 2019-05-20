#if !defined(NUCLEOTIDE_COUNT_H)
#define NUCLEOTIDE_COUNT_H

#include <map>
#include <string>
#include <algorithm>

namespace dna{
    class counter{
        private:
            std::map<char, int> map;
            bool valid_nucleotide(const char c) const{
                return c == 'A' || c == 'T' || c == 'C' || c == 'G';
            }
        public:
            counter(const std::string s){
                map['A'] = 0;
                map['T'] = 0;
                map['C'] = 0;
                map['G'] = 0;
                for (auto i = s.begin(); i != s.end(); i++) {
                    if(valid_nucleotide(*i)){
                        map[*i]++;
                    }else{
                        throw std::invalid_argument("Invalid nucleotide symbol.");
                    }
                }
            }
            int count(const char c) const{
                if(!valid_nucleotide(c)){
                    throw std::invalid_argument("Invalid nucleotide symbol.");
                }else{
                    return map.at(c);
                }
            }

            std::map<char, int> nucleotide_counts() const{
                return map;
            }
    };
}
#endif
