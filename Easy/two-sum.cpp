class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int j = find(nums.begin(),nums.end(),target-nums[i])-nums.begin();
            if(j<nums.size() && i!=j && nums[i]+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                break;
            }
        }
        return ans;
    }
};