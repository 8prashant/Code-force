/*
******************************************************************************************************************************************************************************************************************************************
***************************NOTE***************************
INSTED OF REMOVING THE ODD NUMBBERS FORM THE ARRAY WE CAN REMOVE THE EVEN EVEN NUMBERS IF REMOVING THEM IS MIN THEN ODDS 
EG.
ARR[6]={2,2,3,3,5};
SO IN THIS INSTED OF REMOVING 3,3,5  FROM THE ARRAY WE CAN REMOVE 2,2 FROM THE LIST




******************************************************************************************************************************************************************************************************************************************
*/

/*
A. Beat The Odds
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given a sequence a1,a2,…,an
, find the minimum number of elements to remove from the sequence such that after the removal, the sum of every 2
 consecutive elements is even.

Input
Each test contains multiple test cases. The first line contains a single integer t
 (1≤t≤100
) — the number of test cases. Description of the test cases follows.

The first line of each test case contains a single integer n
 (3≤n≤105
).

The second line of each test case contains n
 integers a1,a2,…,an
 (1≤ai≤109
) — elements of the sequence.

It is guaranteed that the sum of n
 over all test cases does not exceed 105
.

Output
For each test case, print a single integer — the minimum number of elements to remove from the sequence such that the sum of every 2
 consecutive elements is even.

Example
inputCopy
2
5
2 4 3 6 8
6
3 5 9 7 1 3
outputCopy
1
0
Note
In the first test case, after removing 3
, the sequence becomes [2,4,6,8]
. The pairs of consecutive elements are {[2,4],[4,6],[6,8]}
. Each consecutive pair has an even sum now. Hence, we only need to remove 1
 element to satisfy the condition asked.

In the second test case, each consecutive pair already has an even sum so we need not remove any element.



*/
#include<bits/stdc++.h>
using namespace std;

void check(int n){
    vector<int>  v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int head=0,tail=1,sum=0;
    for(int j=0;j<n-1;j++){
        if((v[head]+v[tail])%2==0){
            head=tail;
            tail+=1;
        }
        else{
            tail+=1;
            sum+=1;
        }
    }
    cout<<min(sum,(n-sum))<<endl;

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