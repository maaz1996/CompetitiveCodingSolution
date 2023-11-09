class Solution {
public:
    void rotate(vector<int>& nums, int k) {
                int n= nums.size();

        vector <int> finalArray(n);
        for(int i=0; i<n; i++){
            finalArray[(i+k)%n] = nums[i];
            }
        nums = finalArray;
      
    }
};


//Link: https://leetcode.com/problems/rotate-array/submissions/1095306187/?envType=study-plan-v2&envId=top-interview-150