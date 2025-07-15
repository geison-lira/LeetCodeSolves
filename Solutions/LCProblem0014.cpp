// Created by Geison Lira on 14/07/2025

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        for(string str : strs){
            size_t m = prefix.size();
            size_t n = str.size();
            if(n < m){
                prefix.resize(n);
            }
            for(int i = 0; i < min(m, n); i++){
                if(prefix[i] != str[i]){
                    prefix.resize(i);
                    break;
                }
            }
        }
        return prefix;
    }
};