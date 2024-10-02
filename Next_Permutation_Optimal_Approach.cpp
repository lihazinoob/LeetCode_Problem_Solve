// Problem Link: https://leetcode.com/problems/next-permutation/description/


#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index = -1;
        for(int i = nums.size()-2;i>=0;i--)
        {
            if(nums[i] < nums[i+1])
            {
                index = i;
                break;
            }
        }
        // cout<<index;
        if(index == -1)
        {
          reverse(nums.begin(),nums.end());
        }
        else
        {
          for(int i = nums.size()-1;i>=index;i--)
          {
            if(nums[i] > nums[index])
            {
              swap(nums[i],nums[index]);
              break;
            }

          }
          reverse(nums.begin()+index+1,nums.end());
        }

    }
};

int main()
{
  int n;
  cin>>n;
  vector<int>arr;
  for(int i = 0;i<n;i++)
  {
    int x;
    cin>>x;
    arr.push_back(x);
  }
  Solution obj;
  obj.nextPermutation(arr);
  for(int i = 0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  return 0; 
}