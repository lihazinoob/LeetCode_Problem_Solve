//  Problem Link: https://leetcode.com/problems/length-of-last-word/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLastWord(string s) {
        // return s.size();
        int last = s.size() -1;
        while(s[last] == ' ')
        {
          last--;
        }
        // return last;
        int count = 0;
        while(1)
        {
          if(s[last] != ' ' && last != 0)
          {
            ++count;
            --last;
          }
          else if(s[last] != ' ' && last == 0)
          {
            ++count;
            break;
          }
          else if(s[last] == ' ')
          {
            break;
          }

        }
        return count;
    }
};

int main()
{
  string s = "a sdsds";
  Solution solve;

  cout<<solve.lengthOfLastWord(s);
  return 0;
}