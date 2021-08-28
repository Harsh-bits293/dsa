#include <bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

int largest_element(vector<int> v){
int max=0;
// for (int i = 1; i <n; i++)
//     if(arr[max]<arr[i])
//     max=i;
for (size_t i = 1; i < v.size(); i++) {
  /* code */
  if(v[max]<v[i])
  max=i;
}
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
  // int n;
  // cin>>n;
  // std::vector<int> v(n);
  // vector<int> :: iterator ptr;
  //
  // for(auto ptr=v.begin();ptr<v.end();ptr++)
  // cin>>*ptr;
  std::vector<int> v;
  for (size_t i = 1; i < 5; i++) {
    /* code */
    v.push_back(i);
  }


  cout<<"Position of largest element :"<<largest_element(v)<<"\n";
  cout<<v.at(2);
  cout<<"\n";
  cout<<v.size()<<" "<<v.capacity();
  cout<<"\n";
  for (size_t i = 0; i < v.size(); i++) {
    /* code */
    cout<<v[i]<<" ";
  }
  v.pop_back();
  cout<<"\n";
  cout<<v.size()<<" "<<v.capacity();
  cout<<"\n";
  for (size_t i = 0; i < v.size(); i++) {
    /* code */
    cout<<v[i]<<" ";
  }
cout<<"\n"<<"Position of largest element :"<<largest_element(v)<<"\n";


}//test cases
return 0;
}
