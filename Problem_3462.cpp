#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  long long maxSum(vector<vector<int>> &grid, vector<int> &limits, int k)
  {
    int size = grid[0].size();
    // cout << size;
    vector<int> container;
    for (int i = 0; i < grid.size(); i++)
    {
      // First sort
      sort(grid[i].begin(), grid[i].end());
      // for (int it : grid[i])
      // {
      //   cout << it;
      // }

      int j = size-1;
      int ktemp = 1;
      while(j>=0 && ktemp <= limits[i])
      {
        // cout<<grid[i][j]<<" ";
        container.push_back(grid[i][j]);

        ktemp++;
        j--;
      }
    }
    // for(int it : container)
    // {
    //   cout<<it<<" ";
    // }
    sort(container.begin(),container.end());
    // for(int it : container)
    // {
    //   cout<<it<<" ";
    // }
    int nav = container.size() - 1;
    // cout<<nav;
    int navtemp = 1;
    long long result = 0;

    while(nav>=0 && navtemp <= k)
    {
      result = result + container[nav];
      navtemp++;
      nav--;
    }
    // cout<<result;
    return result;
  }
};

int main()
{
  Solution s;
  vector<vector<int>> grid = {{5, 3, 7}, {8, 2, 6}};
  vector<int> limits = {2, 2};
  int k = 3;
  s.maxSum(grid, limits, k);
  return 0;
}