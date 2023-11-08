/**
 * Hashmap Solution
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
            unordered_map<int, int> umap;
            vector<int> finalArray;
          for(int i=0;i<numbers.size(); i++){
              if(umap.find(target-numbers[i])!=umap.end()){
                finalArray.push_back(umap[target-numbers[i]]+1);
                                finalArray.push_back(i+1);

                break;
              }
                umap[numbers[i]] = i;
          }
          return finalArray;

    }
};

/**
 * Two Pointer Solution
*/
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        // submit pointer array solution
           vector<int> finalArray;
           int n=numbers.size();
           int i=0;
           int j = n-1;
           while(i<j){
               if(numbers[i]+numbers[j]==target){
                finalArray.push_back(i+1);
                finalArray.push_back(j+1);
               }
               if((numbers[i]+numbers[j])>target){
                   j--;
               }
               else{
                   i++;
               }
           }
          return finalArray;

    }
};
//Link: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/submissions/1094582458/?envType=study-plan-v2&envId=top-interview-150