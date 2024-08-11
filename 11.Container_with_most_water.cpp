// Problem Link: https://leetcode.com/problems/container-with-most-water/description/
// Brute Force Approach
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        int area;
        int size = height.size() -1;
        for(int i = 0;i<=size;++i)
        {
            for(int j = i+1;j<=size;++j)
            {
                area = (j-i) * min(height[i],height[j]);
                // cout<<area<<endl;
                maxArea = max(area,maxArea);
            }
        }
        // cout<<maxArea;
        return maxArea;
    }
};

int main()
{
    vector<int>h = {1,3,5,2,7};
    Solution s;
    cout<<s.maxArea(h);
    return 0;
}

