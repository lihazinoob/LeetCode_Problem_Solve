// Problem Link: https://leetcode.com/problems/find-the-duplicate-number/description/
#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int vecsize = nums.size();
        // Initializing the maximum array
        // cout<<nums[vecsize -1] + 1;
        int dup[nums[vecsize -1] + 1];
        for(int i = 0;i<(nums[vecsize -1] + 1);i++)
        {
          dup[i] = 0;
        }
        // int dup[nums[vecsize -1] + 1] = {0};
        for(int i = 0;i<vecsize;i++)
        {
          ++dup[nums[i]];
        }
        for(int i = 1;i<(nums[vecsize -1] + 1);i++)
        {
          if(dup[i] >=2 2)
          {
            return i;
          }
          else
          {
            continue;
          }
        }
        

    }
};

int main()
{

  vector<int>nums = {3,5,2,2,4,67,8};
  Solution s;
  cout<<s.findDuplicate(nums);
  
  return 0;
}