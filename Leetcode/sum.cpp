class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
            vector <int> finalarray;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    finalarray.push_back(i);
                    finalarray.push_back(j);
                }
            }
        }
    return finalarray;
}
};

// link : https://leetcode.com/problems/two-sum/?envType=study-plan-v2&envId=top-interview-150