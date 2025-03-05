// Problem Link: https://leetcode.com/problems/letter-combinations-of-a-phone-number/
#include<bits/stdc++.h>
using namespace std;


class Solution {
private:
    void backtrack(string digits,int digititerator,string map[], string tempans,vector<string>&ans)
    {
      // Base case definition
      if(digititerator >= digits.length())
      {
        ans.push_back(tempans);
        return ;
      }
      // Converting the digit string to a integer
      int num = digits[digititerator] - '0';
      string value = map[num];
      for(int i = 0;i < value.length();i++)
      {
        tempans.push_back(value[i]);
        backtrack(digits,digititerator + 1,map,tempans,ans);
        tempans.pop_back();
      }
    }

public:
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        // If the length of the digit is zero then return ""
        if(digits.length() == 0)
        {
          return ans;
        }
        string map[10] = {"","","abc",  "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        int digititerator = 0;
        string tempans;
        backtrack(digits,digititerator,map,tempans,ans);
        return ans;
        
    }
};

int main()
{
  Solution s;
  s.letterCombinations("23");
  return 0;
}