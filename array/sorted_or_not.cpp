#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

bool sorted(int arr[],int n)
{
if(n==1)
return true;
bool flag=true;
for (int i =1; i < n; i++) {
  /* code */
if(arr[i-1]<=arr[i])
{
  flag=true;
  continue;
}
flag=false;
break;
}
return flag;
}
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

  int t;
  cin>>t;
  while(t--)
  {
  //your code
int n;
cin>>n;
int arr[n];
for (size_t i = 0; i < n; i++) {
  cin>>arr[i];
}
cout<<sorted(arr,n)<<"\n";
}//test cases
return 0;
}
