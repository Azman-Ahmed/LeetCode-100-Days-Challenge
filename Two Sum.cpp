class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        map<int, int> mp;
        int first = -1, second = -1;
        for(int i = 0; i<nums.size(); i++)
        {
            mp[nums[i]]++;
        }
        for(int i = 0; i<nums.size(); i++)
        {
            if(mp[target-nums[i]]==1 && target-nums[i]!=nums[i])
            {
                first = i;
                break;
            }
            else if(mp[target-nums[i]]>1 && target-nums[i]==nums[i])
            {
                first = i;
                break;
            }
            cout<<nums[i]<<target-nums[i]<<mp[target-nums[i]]<<endl;
        }
        for(int i = first+1; i<nums.size(); i++)
        {
            if(nums[i]+nums[first]==target)
            {
                second = i;
            }
        }
        vector<int> ans;
        ans.push_back(first);
        ans.push_back(second);

        return ans;

    }
};
