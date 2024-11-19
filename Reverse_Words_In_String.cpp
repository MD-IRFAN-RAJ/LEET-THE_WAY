class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        string ans;
        int i = n - 1;
        while (i >= 0) {
            while (i >= 0 && s[i] == ' ') i--;
            int j = i;
            if (i < 0) break;
            while (i >= 0 && s[i] != ' ') i--;
            if (!ans.empty()) ans += ' '; 
            ans += s.substr(i + 1, j - i);
        }
        return ans;
    }
};
