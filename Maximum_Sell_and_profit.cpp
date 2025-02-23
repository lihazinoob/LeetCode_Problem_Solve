#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int>temp = prices;
        // cout<<temp[0];
        sort(temp.begin(),temp.end());
        int min = temp[0];
        int index;
        for(int i = 0;i<prices.size();i++)
        {
          if(prices[i] == min)
          {
            index = i;
            break;
          }
        }
        int ans = 0;
        for(int i = index+1;i<prices.size();i++)
        {
          ans = max(ans,(prices[i] - prices[index]));
        }
      return ans;
        
    }
};

int main()
{
  int n;
  cin>>n;
  vector<int>prices;
  for(int i = 0;i<n;i++)
  {
    int x;
    cin>>x;
    prices.push_back(x);
  }
  Solution s;
  s.maxProfit(prices);
  return 0;
}