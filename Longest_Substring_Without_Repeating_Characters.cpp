// Problem Link: https://leetcode.com/problems/longest-substring-without-repeating-characters/description/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
  int lengthOfLongestSubstring(string s)
  {
    // cout<<s.size();
    int left = 0;
    // int right = 0;
    int cnt = 0;
    set<char> container;

    for (int right = 0; right < s.size(); ++right)
    {
      while (container.find(s[right]) != container.end())
      {
        // Found the character
        container.erase(s[left]);
        ++left;
      }

      // Didnt Found that charachter
      container.insert(s[right]);
      cnt = right - left + 1;
      
    }
    return cnt;
  }
};

int main()
{
  string s = "pwwkew";
  Solution sol;
  cout<<sol.lengthOfLongestSubstring(s);
}