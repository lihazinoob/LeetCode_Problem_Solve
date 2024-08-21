// Problem Link : https://leetcode.com/problems/merge-intervals/description/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> sortedvec;
        for(auto i: intervals)
        {
          if(sortedvec.empty() or (sortedvec.back()[1] < i[0]))
          {
            sortedvec.push_back(i);
          }
          else
          {
            sortedvec.back()[1] = max(sortedvec.back()[1], i[1]);
          }
        }
        for(auto i:sortedvec)
        {
          cout<<i[0]<<" "<<i[1]<<endl;
        }
    }
};

int main()
{
  vector<vector<int>> intervals = {{1,3},{2,6},{8,10},{15,18}};
  Solution s;
  s.merge(intervals);

  return 0;
}