class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        std::unordered_map<int, int> uniqueElements;
        int j=0;
        for(int i=0;i<n;i++){
            if(uniqueElements.find(nums[i])==uniqueElements.end()){
                uniqueElements[nums[i]];
                nums[j++] = nums[i];
            }
           
        }
        
       return j;
    }
};

//Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/?envType=study-plan-v2&envId=top-interview-150