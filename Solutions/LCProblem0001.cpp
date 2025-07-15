// Created by Geison Lira on 14/07/2025

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        size_t n = nums.size();
        unordered_map<int, int> hash;
        int comp;
        for(int i = 0; i < n; i++){
            comp = target-nums[i];
            if(hash.contains(comp)){
                return {hash[comp], i};
            }
            hash.insert(make_pair(nums[i], i));
        }
        return {};
    }
};