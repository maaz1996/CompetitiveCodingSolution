class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        std::unordered_map<int, int> uniqueElements;
        int n = nums.size();
        int k=0;
        for (int i=0;i<n;i++){
            if(uniqueElements.find(nums[i])==uniqueElements.end()){
                    nums[k++] = nums[i];
                    uniqueElements[nums[i]]=1;
            }
            else if(uniqueElements[nums[i]]<2){
                nums[k++] = nums[i];
                uniqueElements[nums[i]]++;
            }
        }
        return k;
    }
};

//Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/?envType=study-plan-v2&envId=top-interview-150