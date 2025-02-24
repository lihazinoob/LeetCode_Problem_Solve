#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
  bool hasSpecialSubstring(string s, int k)
  {
    int l = 0;
    int r = l + k - 1;
    // cout<<r;
    bool flag = false;
    // Special Treatment for window size 1

    if (k == 1)
    {
      // No need to check the first condition
      flag = true;
      // Checking for the second condition

      if (l != 0 && flag == true)
      {
        if (s[l - 1] == s[l])
        {
          flag = false;
        }
      }
      // Checking for the third condition
      if (r != (s.length() - 1) && flag == true)
      {
        if (s[r + 1] == s[r])
        {
          flag = false;
        }
      }
      if (flag == true)
      {
        return true;
      }
    }

    // if(k==1 && s.length() == 1)
    // {
    //   return true;
    // }
    // Clipping the window of k characters
    else
    {
      while (l <= (s.length() - 1) && r <= (s.length() - 1))
      {
        // cout<<l<<" "<<r;
        // cout<<endl;
        // Checking for the first condition
        for (int i = l; i < r; i++)
        {
          if (s[i] == s[i + 1])
          {
            flag = true;
            continue;
          }
          else
          {
            flag = false;
            break;
          }
        }
        // cout<<"Flag value: "<<flag<<endl;
        // Checking for the second condition

        if (l != 0 && flag == true)
        {
          if (s[l - 1] == s[l])
          {
            flag = false;
          }
        }
        // Checking for the third condition
        if (r != (s.length() - 1) && flag == true)
        {
          if (s[r + 1] == s[r])
          {
            flag = false;
          }
        }

        if (flag == true)
        {
          return true;
        }

        ++l;
        ++r;
      }
    }

    return flag;
  }
};

int main()
{
  Solution s;
  cout << s.hasSpecialSubstring("ii", 1);
  return 0;
}