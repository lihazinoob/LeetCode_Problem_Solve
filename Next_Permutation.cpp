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
void nextperm(int n, vector<vector<int>>ans, vector<int>arr)

{
  sort(ans.begin(),ans.end());
  int index;
  for(int i = 0;i<ans.size();i++)
  {
    if(ans[i] == arr)
    {
      index = i;
    }
  }
  if(index < ans.size() - 1)
  {
    for(int i = 0;i<n;i++)
    {
      cout<<ans[index+1][i]<<" ";
    }
  }
  else if(index == ans.size() - 1)
  {
    for(int i = 0;i<n;i++)
    {
      cout<<ans[0][i]<<" ";
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
  // cout<<arr.size();
  bool visited[n] = {false};
  vector<int>ds;
  vector<vector<int>>ans;
  generatingallperm(n,arr,visited,ds,ans);
  nextperm(n,ans,arr);
  


  return 0;
}