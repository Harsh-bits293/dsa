#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

int duplicates(int arr[], int n)
{
int count=1, index=0;
for (int i = 1; i < n; i++) {
  /* code */
  if(arr[i]!=arr[i-1])
  {
    count++;
    arr[index+1]=arr[i];
    index++;
  }
}
return count;
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
for (int i = 0; i < n; i++) {
  /* code */
  cin>>arr[i];
}
int new_size=duplicates(arr,n);
for (int i = 0; i < new_size; i++) {
  /* code */
  cout<<arr[i]<<" ";
}
cout<<"\n";
}//test cases
return 0;
}
