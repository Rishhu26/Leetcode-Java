class Solution {
public:
    bool isAnagram(string s, string t) {

        
        if(s.size() != t.size())
            return false;

        vector<int>ans(26,0);
        for(int i=0;i<s.size();i++){
            int index = s[i]-'a';
            ans[index]++;
        }

        vector<int>ans2(26,0);
        for(int i=0;i<t.size();i++){
            int index = t[i]-'a';
            ans2[index]++;
        }

        if(ans == ans2)
        return true;
        
        return false;
    }
};