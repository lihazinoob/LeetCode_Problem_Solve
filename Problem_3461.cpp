// Problem Link:https://leetcode.com/problems/check-if-digits-are-equal-in-string-after-operations-i/description/
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  bool hasSameDigits(string s)
  {

    // Extracting the string into digits and storing it into arr
    int arr[s.length()];
    for (int i = 0; i < s.length(); i++)
    {
      arr[i] = int(s[i]) - 48;
      // cout << arr[i];
    }

    // Operation
    for (int i = 1; i <= (s.length() - 2); i++)
    {
      // Initialize two pointers for the operation
      int l = 0;
      int r = 1;
      // cout<<s.length();
    
      while (r <= (s.length()) - i)
      {
        // cout<<false;
        
        arr[l] = (arr[l] + arr[r]) % 10;
        
        ++l;
        ++r;
        // cout<<l<<r;
      }
    }
    if(arr[0] == arr[1])
    {
      return true;
    }
    else
    {
      return false;
    }
    
  }
};

int main()
{
  Solution s;
  s.hasSameDigits("34789");
  return 0;
}