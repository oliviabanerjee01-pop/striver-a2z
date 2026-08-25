class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string k = strs[0]; // moved outside — it never changes

        for(int j = 0; j < k.size(); j++){
            for(int i = 1; i < strs.size(); i++){
                if(j >= strs[i].size() || k[j] != strs[i][j]){
                    return k.substr(0, j);
                }
            }
        }
        return k;
    }
};