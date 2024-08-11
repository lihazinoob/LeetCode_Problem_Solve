// Problem Link : https://leetcode.com/problems/merge-sorted-array/description/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) 
    {
      vector<int>third;
      for(int i = 0;i<m;i++)
      {
        if(nums1[i] != 0)
        {
          third.push_back(nums1[i]);
        }
        else
        {
          continue;
        }
      }
      for(int i = 0;i<n;++i)
      {
        third.push_back(nums2[i]);
      }
      sort(third.begin(),third.end());
      

      
      for(int i = 0;i<third.size();i++)
      {
        nums1[i] = third[i];
      }
      
      
    }
};

int main()
{
  vector<int>nums1 = {1,2,3,0,0,0};
  vector<int>nums2 = {2,5,6};
  Solution s;
  s.merge(nums1,6,nums2,3);
  for(auto i:nums1)
  {
    cout<<i<<" ";
  }

  return 0;
}