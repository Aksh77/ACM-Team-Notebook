#include<bits/stdc++.h>
int main()
{
vector<int> v;
int n;
cin>>n;
for(int i=0;i<n;i++)
{
  cin>>v[i];
}
partial_sum(v.begin(),v.end(),v.begin(),plus<int>());
for(int i=0;i<n;i++)
{
  cout<<v[i]<<" ";
}
return 0;
}
/*
INPUT:
4
1 2 3 4
OUTPUT:
1 3 6 10
*/
