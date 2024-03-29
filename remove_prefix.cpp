/*Remove Prefix
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Polycarp was presented with some sequence of integers a
 of length n
 (1≤ai≤n
). A sequence can make Polycarp happy only if it consists of different numbers (i.e. distinct numbers).

In order to make his sequence like this, Polycarp is going to make some (possibly zero) number of moves.

In one move, he can:

remove the first (leftmost) element of the sequence.
For example, in one move, the sequence [3,1,4,3]
 will produce the sequence [1,4,3]
, which consists of different numbers.

Determine the minimum number of moves he needs to make so that in the remaining sequence all elements are different. In other words, find the length of the smallest prefix of the given sequence a
, after removing which all values in the sequence will be unique.

Input
The first line of the input contains a single integer t
 (1≤t≤104
) — the number of test cases.

Each test case consists of two lines.

The first line contains an integer n
 (1≤n≤2⋅105
) — the length of the given sequence a
.

The second line contains n
 integers a1,a2,…,an
 (1≤ai≤n
) — elements of the given sequence a
.

It is guaranteed that the sum of n
 values over all test cases does not exceed 2⋅105
.

Output
For each test case print your answer on a separate line — the minimum number of elements that must be removed from the beginning of the sequence so that all remaining elements are different.

Example
inputCopy
5
4
3 1 4 3
5
1 1 1 1 1
1
1
6
6 5 4 3 2 1
7
1 2 1 7 1 2 1
outputCopy
1
4
0
0
5
Note
The following are the sequences that will remain after the removal of prefixes:

[1,4,3]
;
[1]
;
[1]
;
[6,5,4,3,2,1]
;
[2,1]
.
It is easy to see that all the remaining sequences contain only distinct elements. In each test case, the shortest matching prefix was removed.

*/
#include<bits/stdc++.h>
using namespace std;

void check(int n){
    int sum=0;
    vector<int> v;
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(int j=n-1;j>=0;j--){
        if(m[v[j]]==0){
            m[v[j]]+=1;
            sum+=1;
        }
        else{
            cout<<n-sum<<endl;
            return;
        }
    }
    cout<<"0"<<endl;
    return;


}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        check(n);
    }
    return 0;
}