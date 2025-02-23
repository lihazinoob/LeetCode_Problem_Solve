// Problem Link : https://leetcode.com/problems/longest-palindromic-substring/description/

// This works fine, but uses nested loop and it is a naive approach

#include <bits/stdc++.h>
using namespace std;

// class Solution
// {
// public:
//   bool checkifPallindrome(int left, int right, string s)
//   {
//     while (left < right)
//     {
//       if (s[left] != s[right])
//       {
//         return false;
//       }
//       ++left;
//       --right;
//     }
//     return true;
//   }

//   string longestPalindrome(string s)
//   {
//     int stlen = s.size();

//     // A single character is itself a pallindrome
//     int maxpallindromelen = 1;

//     // Starting position of longest pallindrome
//     int startpos = 0;

//     for (int i = 0; i < stlen; i++)
//     {
//       for (int j = i; j < stlen; j++)
//       {
//         if (checkifPallindrome(i, j, s) == true && (j-i+1) > maxpallindromelen)
//         {
//           maxpallindromelen = (j-i+1);
//           startpos = i;
//         }
//       }
//     }
//     return s.substr(startpos,maxpallindromelen);
//   }
// };

class Solution
{
  public:
  string longestPalindrome(string s)
  {
    int stlen = s.size();
    // defining the table for memoization
    vector<vector<bool>> tabledp(stlen, vector<bool>(stlen, false));

    // Each character is itself a pallindrome
    int maxpallindromelen = 1;

    for (int i = 0; i < stlen; i++)
    {
      tabledp[i][i] = true;
    }

    // Starting position of longest pallindrome
    int startpos = 0;
    // Chcek for the substring of length 2 so that I can use the dp implementation
    for (int i = 0; i < stlen - 1; ++i)
    {
      if (s[i] == s[i + 1])
      {
        tabledp[i][i + 1] = true;
        startpos = i;
        maxpallindromelen = 2;
      }
    }

    // Now check for the substring of length 3 or greater
    for (int k = 3; k <= stlen; ++k)
    {
      for (int i = 0; i < stlen - k + 1; ++i)
      {
        int j = i + k - 1;

        if (tabledp[i + 1][j - 1] && s[i] == s[j])
        {
          tabledp[i][j] = true;

          if (k > maxpallindromelen)
          {
            startpos = i;
            maxpallindromelen = k;
          }
        }
      }
    }

    return s.substr(startpos,maxpallindromelen);
  }
};

int main()
{
  string s = "babad";
  Solution sol;
  cout << sol.longestPalindrome(s);
}
