class Solution {
public:
    bool isPalindrome(string s) {
        string filtered = "";
        for (char c : s) {
            if (isalnum(c)) filtered += tolower(c);
        }
        string s_inv = filtered;
        reverse(s_inv.begin(), s_inv.end());
        return filtered == s_inv;
    }
};
