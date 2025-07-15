// Created by Geison Lira on 14/07/2025

class Solution {
public:
    bool isValid(string s) {
        string expect;
        for(char par : s){
            switch(par){
                case '(':
                    expect.push_back(')');
                    break;
                case '[':
                    expect.push_back(']');
                    break;
                case '{':
                    expect.push_back('}');
                    break;
                default:
                    if(expect.empty() || par != expect.back()){
                        return false;
                    }
                    expect.pop_back();
                    break;
            }
        }
        return expect.empty();
    }
};