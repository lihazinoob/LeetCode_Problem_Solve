// Problem Link: https://leetcode.com/problems/permutations/description/

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
  vector<vector<int>> permute(vector<int> &nums)
  {
    vector<vector<int>> ans;
    vector<bool> visited(nums.size(), false);

    vector<int>ds;
    recurse(ans,nums,visited,ds);
    return ans;
  }

  vector<vector<int>>recurse(vector<vector<int>>&ans,vector<int>&nums,vector<bool>&visited,vector<int>&ds)
  {
    // base case
    if(ds.size() == nums.size())
    {
      ans.push_back(ds);
      return ans;
    }
    
    for(int i = 0;i<nums.size();i++)
    {
      if(!visited[i]) //not visited elemenet in nums
      {
        visited[i] = true;
        ds.push_back(nums[i]);
        recurse(ans,nums,visited,ds);
        ds.pop_back();
        visited[i] = false;
      }
    }


  }
};

int main()
{

  return 0;
}