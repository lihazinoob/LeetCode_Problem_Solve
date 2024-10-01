// Problem Link: https://leetcode.com/problems/next-permutation/description/

#include<bits/stdc++.h>
using namespace std;

void generatingallperm(int n,vector<int>arr,bool visited[],vector<int>ds,vector<vector<int>>&ans)
{
  if(ds.size() == n)
  {
    ans.push_back(ds);
    return;
  }
  for(int i = 0;i<n;i++)
  {
    if(visited[i] == false)
    {
      visited[i] = true;
      ds.push_back(arr[i]);
      generatingallperm(n,arr,visited,ds,ans);
      ds.pop_back();
      visited[i] = false;
    }
  }
  

}

int main()
{
  int n;
  cin>>n;
  vector<int>arr;
  for(int i = 0;i<n;i++)
  {
    int x;
    cin>>x;
    arr.push_back(x);
  }
  bool visited[n] = {false};
  vector<int>ds;
  vector<vector<int>>ans;
  generatingallperm(n,arr,visited,ds,ans);
  for(int i = 0;i<ans.size();i++)
  {
    for(int j = 0;j<n;j++)
    {
      cout<<ans[i][j]<<" ";
    }
    cout<<endl;
  }


  return 0;
}