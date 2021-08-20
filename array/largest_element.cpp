#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

int largest_element(int arr[],int n)
{
  int max=0;
  for (int i = 1; i <n; i++)
    if(arr[max]<arr[i])
    max=i;
  return max;
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
int array[n];
for(int i=0;i<n;i++)
cin>>array[i];
cout<<"Position of largest element :"<<largest_element(array,n)<<"\n";
}//test cases
return 0;
}
