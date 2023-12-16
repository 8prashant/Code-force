/*A. Dense Array
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Polycarp calls an array dense if the greater of any two adjacent elements is not more than twice bigger than the smaller. More formally, for any i
 (1≤i≤n−1
), this condition must be satisfied:
max(a[i],a[i+1])min(a[i],a[i+1])≤2
For example, the arrays [1,2,3,4,3]
, [1,1,1]
 and [5,10]
 are dense. And the arrays [5,11]
, [1,4,2]
, [6,6,1]
 are not dense.

You are given an array a
 of n
 integers. What is the minimum number of numbers you need to add to an array to make it dense? You can insert numbers anywhere in the array. If the array is already dense, no numbers need to be added.

For example, if a=[4,2,10,1]
, then the answer is 5
, and the array itself after inserting elements into it may look like this: a=[4,2,3––,5––,10,6––,4––,2––,1]
 (there are other ways to build such a
).

Input
The first line contains one integer t
 (1≤t≤1000
). Then t
 test cases follow.

The first line of each test case contains one integer n
 (2≤n≤50
) — the length of the array a
.

The next line contains n
 integers a1,a2,…,an
 (1≤ai≤50
).

Output
For each test case, output one integer — the minimum number of numbers that must be added to the array to make it dense.

Example
inputCopy
6
4
4 2 10 1
2
1 3
2
6 1
3
1 4 2
5
1 2 3 4 3
12
4 31 25 50 30 20 34 46 42 16 15 16
outputCopy
5
1
2
1
0
3
Note
The first test case is explained in the statements.

In the second test case, you can insert one element, a=[1,2––,3]
.

In the third test case, you can insert two elements, a=[6,4––,2––,1]
.

In the fourth test case, you can insert one element, a=[1,2––,4,2]
.

In the fifth test case, the array a
 is already dense.

*/
#include<bits/stdc++.h>
using namespace std;

void check(int n){
    int sum=0,d=0;
    vector<int> st1;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        st1.push_back(a);
    }
    for(int j=0;j<n-1;j++){
        int m=max(st1[j],st1[j+1])/min(st1[j],st1[j+1]);
        if(m>2 || m==2 && max(st1[j],st1[j+1])%min(st1[j],st1[j+1])!=0){
            d=min(st1[j],st1[j+1]);
            while(d*2<max(st1[j],st1[j+1])){
                d*=2;
                sum+=1;
            }
        }
    }
    cout<<sum<<endl;
}

int main(){
    int t,n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        check(n);
    }
    return 0;
}