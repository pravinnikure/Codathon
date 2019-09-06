#include <iostream>
#include<vector>

using namespace std;

int fibo(long long int n){
  long long int first=0, second=1, next, i;
  vector<long long int> v;

  for(i=0; i<n; i++){
    if(i<=1){
      next = i;
    }else{
       next = first+second;
       first = second;
       second = next;
    }

    v.push_back(next%10);
  }

  vector<long long int>::iterator itr = v.begin();

  for(itr; itr!=v.end(); itr++){
    cout<<*itr<<endl;
  }

  return -1;
}

int main(){
  int t;
  cin>>t;

  while (t--){
    long long int n, answer;
    cin>>n;

    fibo(n);
  }

  return 0;
}
