// Problem Link: https://leetcode.com/problems/container-with-most-water/description/
// Two Pointer Method Appraoch
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        int area;
        int size = height.size() -1;
        int l = 0; //left pointer
        int r = size; //right pointer
        // cout<<l<<" "<<r<<endl;
        while ((l<r))
        {
            
            area = (r-l) * min(height[l],height[r]);
            maxArea = max(area,maxArea);
            if(height[l]<height[r])
            {
                ++l;
            }
            else
            {
                r--;
            }
        }
        
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

