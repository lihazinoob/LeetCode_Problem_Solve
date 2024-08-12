// Problem Link : https://leetcode.com/problems/sqrtx/description/

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int mySqrt(int x)
  {
    int ans;

    for (long long int i = 0; i <= x; ++i)
    {
      if ((i * i) < x)
      {
        continue;
      }
      else if ((i * i) == x)
      {
        ans = i;
        break;
      }
      else if ((i * i) > x)
      {
        ans = i - 1;
        break;
      }
    }
    return ans;
  }
};

int main()
{
  Solution s;
  cout << s.mySqrt(0) << endl;
  cout << s.mySqrt(9) << endl;
  
  return 0;
}
