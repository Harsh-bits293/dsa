#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

int second_largest(int arr[],int n)
{
  if(n==1)
  return -1;
  int second_index, largest_index;
  if(arr[0]>=arr[1])
  {largest_index=0;
  second_index=1;
  }
  else
  {
    largest_index=1;
    second_index=0;
  }
  for (int i = 2; i <n; i++) {
    /* code */
   if(arr[i]>arr[largest_index])
  {
    second_index=largest_index;
    largest_index=i;
  }
  if(arr[i]<arr[largest_index]&&arr[i]>arr[second_index])
  second_index=i;
  }
//if(arr[second_index]==arr[largest_index])
//return -1;
if(arr[second_index]!=arr[largest_index])
return second_index;
else return -1;
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
  /* code */
  cin>>arr[i];
}
cout<<second_largest(arr,n)<<"\n";
}//test cases
return 0;
}
