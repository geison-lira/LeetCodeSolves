// Created by Geison Lira on 14/07/2025

class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        size_t n = s.size();
        for(int i = 0; i < n; i++){
            switch(s[i]){
                case 'M':
                    result += (i != 0 && s[i-1] == 'C') ? 800 : 1000;
                    break;
                case 'D':
                    result += (i != 0 && s[i-1] == 'C') ? 300 : 500;
                    break;
                case 'C':
                    result += (i != 0 && s[i-1] == 'X') ? 80 : 100;
                    break;
                case 'L':
                    result += (i != 0 && s[i-1] == 'X') ? 30 : 50;
                    break;
                case 'X':
                    result += (i != 0 && s[i-1] == 'I') ? 8 : 10;
                    break;
                case 'V':
                    result += (i != 0 && s[i-1] == 'I') ? 3 : 5;
                    break;
                case 'I':
                    result += 1;
                    break;
            }
        }
        return result;
    }
};