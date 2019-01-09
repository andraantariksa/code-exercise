//https://leetcode.com/problems/jewels-and-stones/
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int tot = 0;
        for(char c: J){
            for(char c2: S){
                if(c == c2){
                    tot++;
                }
            }
        }
        return tot;
    }
};