// Created by Geison Lira on 14/07/2025

class Solution {
public:
    bool isPalindrome(int x) {
        int aux = x;
        long int revx = 0;
        if(x < 0){
            return false;
        }
        while(aux != 0){
            revx = 10*revx + aux%10;
            aux = aux/10;
        }
        return x == revx;
    }
};