#include<bits/stdc++.h>
using namespace std;
typedef long long lli;
void nck(vector<lli> *arr,lli n)
{
  / arr=new vector<lli>[n+1];
  for(lli x=0;x<=n;x++)
  for(lli y=0;y<=x;y++)
  arr[x].push_back(0);
  for(lli i=0;i<=n;i++)
  {
    arr[i][0]=1;
    arr[i][i]=1;
  }
  for(lli i=1;i<=n;i++)
  for(lli j=1;j<i;j++)
  arr[i][j]=arr[i-1][j-1]+arr[i-1][j];

}
int main()
{
    lli n,k;
    cin>>n;
    vector<lli> *arr;
   / arr=new vector<lli>[n+1];
    nck(arr,n);
    cout<<arr[4][3];
    delete []arr;
    return 0;
}
