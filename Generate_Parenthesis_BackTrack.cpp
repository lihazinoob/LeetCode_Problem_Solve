// Problem Link : https://leetcode.com/problems/generate-parentheses/description/?envType=problem-list-v2&envId=backtracking

#include<bits/stdc++.h>
using namespace std;


class Solution {

private:
    void recusivegenerateParenthesis(int n,int openParenthesis,int closeParenthesis,string tempans,vector<string>&ans)
    {
      // Base Case definition
      if(openParenthesis == 0 && closeParenthesis == 0)
      {
        ans.push_back(tempans);
        return;
      }

      if(openParenthesis == closeParenthesis)
      {
        tempans.push_back('(');
        recusivegenerateParenthesis(n,--openParenthesis,closeParenthesis,tempans,ans);
      }

      else if(openParenthesis == 0)
      {
        tempans.push_back(')');
        recusivegenerateParenthesis(n,openParenthesis,--closeParenthesis,tempans,ans);
      }

      else if(closeParenthesis == 0)
      {
        tempans.push_back('(');
        recusivegenerateParenthesis(n,--openParenthesis,closeParenthesis,tempans,ans);
      }
      else
      {
        string op1 = tempans;
        string op2 = tempans;
        op1.push_back('(');
        op2.push_back(')');
        recusivegenerateParenthesis(n,openParenthesis -1,closeParenthesis,op1,ans);
        recusivegenerateParenthesis(n,openParenthesis,closeParenthesis-1,op2,ans);
      }
    }


public:
    vector<string> generateParenthesis(int n) {
      vector<string>ans;
      int openParenthesis = n;
      int closeParenthesis = n;
      string tempans;
      recusivegenerateParenthesis(n,openParenthesis,closeParenthesis,tempans,ans);
      return ans;
    }
};


int main()
{
  Solution s;
  s.generateParenthesis(3);

  return 0;
}