// Problem Link:https://leetcode.com/problems/search-insert-position/
// Problem Statement : Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

// You must write an algorithm with O(log n) runtime complexity.
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
      int first = 0;
      int last = nums.size()-1;
      while(first<last)
      {
        int mid = (last + first) /2;
        if(nums[mid] == target)
        {
          return mid;
        }
        else if(nums[mid] > target)
        {
          last = mid;
        }
        else
        {
          first = mid + 1;
        }
      }
      if(nums[first] < target)
      {
        return first+1;
      }
      else
      {
        return first;
      }
      if(nums[last] < target)
      {
        return last+1;
      }
      else
      {
        return last;
      }

    }
};

int main()
{
  vector<int>nums = {1,3,5,6};
  // cout<<nums.size()<<endl;
  int target = 2;
  Solution s;
  cout<<s.searchInsert(nums,target)<<endl;
  return 0;
}


