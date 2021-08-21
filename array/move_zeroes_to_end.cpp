#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

void move_zeroes(int arr[], int n)
{
  int count=0;
 for (size_t i = 0; i < n; i++) {
    /* code */
if(arr[i]!=0)
{
  swap(arr[i],arr[count]);
  count++;
}

}
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
  move_zeroes(arr,n);
  for (int i = 0; i < n; i++) {
    /* code */
    cout<<arr[i]<<" ";
  }
  cout<<"\n";


}//test cases
return 0;
}
