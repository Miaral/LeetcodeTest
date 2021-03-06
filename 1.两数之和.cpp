/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        // int n = nums.size();
        // for (int i = 0; i < n; i++)
        // {
        //     for (int j = i + 1; j < n; j++)
        //     {
        //         if (nums[i] + nums[j] == target)
        //         {
        //             return {i, j};
        //         }
        //     }
        // }
        // 使用map，减小时间复杂度
        unordered_map<int,int> endTable;
        int n = nums.size();
        for(int i=0;i<n;i++){
            auto it =endTable.find(target-nums[i]);
            if(it!=endTable.end()){
                return {it->second,i};
            }
            endTable[nums[i]]=i;
        }

        return {};
    }
};
// @lc code=end
