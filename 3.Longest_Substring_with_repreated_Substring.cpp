// Problem Link : https://leetcode.com/problems/longest-substring-without-repeating-characters/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int  lengthOfLongestSubstring(string s) {
      int size  = s.size() -1;
      int left = size;
      int right = size +1;
      int cnt = 1;
      while (1)
      {
        if((s[left] != s[right]) && right<=size)
        {
          ++right;
          ++cnt;
        }
        else if(s[left] == s[right] && right <=size)
        {
          left = right;

        }
        else
        {
          break;
        }
      }
      return cnt;
    }
};

int main()
{
  Solution s;
  cout<<s.lengthOfLongestSubstring("Naveed");

  return 0;
}