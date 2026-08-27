class Solution {
public:
    int longestPalindrome(string s) {
        int result = 0;
        int freq[52] = {0};   // 26 lowercase + 26 uppercase
        bool hasOdd = false;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                freq[s[i] - 'a']++;          // lowercase → 0-25
            } else {
                freq[s[i] - 'A' + 26]++;     // uppercase → 26-51
            }
        }

        for (int i = 0; i < 52; i++) {
            if (freq[i] % 2 == 0) {
                result += freq[i];
            } else {
                result += freq[i] - 1;
                hasOdd = true;
            }
        }

        if (hasOdd) {
            result += 1;
        }

        return result;
    }
};



