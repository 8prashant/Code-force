/*A. Wonderful Permutation
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
God's Blessing on This PermutationForces!
A Random Pebble
You are given a permutation p1,p2,…,pn
 of length n
 and a positive integer k≤n
.

In one operation you can choose two indices i
 and j
 (1≤i<j≤n
) and swap pi
 with pj
.

Find the minimum number of operations needed to make the sum p1+p2+…+pk
 as small as possible.

A permutation is an array consisting of n
 distinct integers from 1
 to n
 in arbitrary order. For example, [2,3,1,5,4]
 is a permutation, but [1,2,2]
 is not a permutation (2
 appears twice in the array) and [1,3,4]
 is also not a permutation (n=3
 but there is 4
 in the array).

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤100
). Description of the test cases follows.

The first line of each test case contains two integers n
 and k
 (1≤k≤n≤100
).

The second line of each test case contains n
 integers p1,p2,…,pn
 (1≤pi≤n
). It is guaranteed that the given numbers form a permutation of length n
.

Output
For each test case print one integer — the minimum number of operations needed to make the sum p1+p2+…+pk
 as small as possible.

Example
inputCopy
4
3 1
2 3 1
3 3
1 2 3
4 2
3 4 1 2
1 1
1
outputCopy
1
0
2
0
Note
In the first test case, the value of p1+p2+…+pk
 is initially equal to 2
, but the smallest possible value is 1
. You can achieve it by swapping p1
 with p3
, resulting in the permutation [1,3,2]
.

In the second test case, the sum is already as small as possible, so the answer is 0
.*/
#include <bits/stdc++.h>
using namespace std;

void check(int n, int k){
    unordered_map<int,int>m;
    vector<int>v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
        m[a]=i+1;
    }
    sort(v.begin(),v.end());
    
    int sum=0;
    for(int i=1;i<=k;i++){
        if(m[v[i-1]]>k){
            sum++;
        }
    }
    cout<<sum<<endl;
}

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        check(n,k);
    }

    return 0;
}