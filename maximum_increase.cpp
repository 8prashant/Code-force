/*A. Maximum Increase
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given array consisting of n integers. Your task is to find the maximum length of an increasing subarray of the given array.

A subarray is the sequence of consecutive elements of the array. Subarray is called increasing if each element of this subarray strictly greater than previous.

Input
The first line contains single positive integer n (1 ≤ n ≤ 105) — the number of integers.

The second line contains n positive integers a1, a2, ..., an (1 ≤ ai ≤ 109).

Output
Print the maximum length of an increasing subarray of the given array.

Examples
inputCopy
5
1 7 2 11 15
outputCopy
3
inputCopy
6
100 100 100 100 100 100
outputCopy
1
inputCopy
3
1 2 3
outputCopy
3
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
  int t,n,sum=0;
  cin>>t;
  vector<int>v1;
  vector<int>v2;
  for(int i=0;i<t;i++){
    cin>>n;
    v1.push_back(n);
    if(i>0){
      if(n>v1[i-1]){
        sum=sum+1;
      }
      else{
        v2.push_back(sum);
        sum=0;
      }
    }
  }
  v2.push_back(sum);
  sort(v2.begin(),v2.end());
  cout<<v2[v2.size()-1]+1<<endl;

  return 0;
}