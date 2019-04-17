#if !defined(NUCLEOTIDE_COUNT_H)
#define NUCLEOTIDE_COUNT_H

#include <map>
#include <string>
#include <algorithm>

namespace dna{
    class counter{
        public:
            std::string dna;
            std::map<char, int> map;
            counter(const std::string s){
                dna = s;
                map['A'] = 0;
                map['T'] = 0;
                map['C'] = 0;
                map['G'] = 0;
                for (auto i = dna.begin(); i != dna.end(); i++) {
                    if(*i == 'A' || *i == 'T' || *i == 'C' || *i == 'G'){
                        map[*i]++;
                    }else{
                        throw std::invalid_argument("Invalid nucleotide symbol.");
                    }
                }
            }
            int count(const char c) const{
                if(c != 'A' && c != 'T' && c != 'C' && c != 'G'){
                    throw std::invalid_argument("Invalid nucleotide symbol.");
                }
                return std::count_if(dna.begin(), dna.end(), [&c](char c_){ return (c_ == c)?true:false;  });
            }

            const std::map<char, int> nucleotide_counts() const{
                return map;
            }
    };
}
#endif
