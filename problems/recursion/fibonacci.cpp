//you are given integer N, and return the Fibonacci Series till the Nth term.

#include <bits/stdc++.h>
using namespace std;

class solution{
  public:
  void solve(vector<long long>&v,int n){
      if(n>=2){
          v.push_back(v[v.size()-1]+v[v.size()-2]);
          solve(v,n-1);
          
      }
  }
    vector<long long> Series(int N) {
        // COde here
        vector<long long>v;
        v.push_back(0);
        v.push_back(1);
        solve(v,N);
        return v;
    }
};

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        solution obj;
        vector<long long>ans= obj.Series(n);
        for(auto x: ans){
            cout<< x<<" ";
        }
    }
}