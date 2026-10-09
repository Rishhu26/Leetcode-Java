
class Solution {
public:
    bool detectCapitalUse(string word) {

        int upper = 0;
        int lower = 0;

        for(int i = 0; i < word.size(); i++) {
            if(word[i] >= 'A' && word[i] <= 'Z') {
                upper++;
            }
            else {
                lower++;
            }
        }

        if(upper == word.size() || lower == word.size()) {
            return true;
        }

        if(word[0] >= 'A' && word[0] <= 'Z' &&
           upper == 1) {
            return true;
        }

        return false;
    }
};
