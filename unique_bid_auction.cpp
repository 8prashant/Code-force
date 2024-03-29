/*B. Unique Bid Auction
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
There is a game called "Unique Bid Auction". You can read more about it here: https://en.wikipedia.org/wiki/Unique_bid_auction (though you don't have to do it to solve this problem).

Let's simplify this game a bit. Formally, there are n
 participants, the i
-th participant chose the number ai
. The winner of the game is such a participant that the number he chose is unique (i. e. nobody else chose this number except him) and is minimal (i. e. among all unique values of a
 the minimum one is the winning one).

Your task is to find the index of the participant who won the game (or -1 if there is no winner). Indexing is 1
-based, i. e. the participants are numbered from 1
 to n
.

You have to answer t
 independent test cases.

Input
The first line of the input contains one integer t
 (1≤t≤2⋅104
) — the number of test cases. Then t
 test cases follow.

The first line of the test case contains one integer n
 (1≤n≤2⋅105
) — the number of participants. The second line of the test case contains n
 integers a1,a2,…,an
 (1≤ai≤n
), where ai
 is the i
-th participant chosen number.

It is guaranteed that the sum of n
 does not exceed 2⋅105
 (∑n≤2⋅105
).

Output
For each test case, print the answer — the index of the participant who won the game (or -1 if there is no winner). Note that the answer is always unique.

Example
inputCopy
6
2
1 1
3
2 1 3
4
2 2 2 3
1
1
5
2 3 2 4 2
6
1 1 5 5 4 4
outputCopy
-1
2
4
1
2
-1
*/
#include<bits/stdc++.h>
using namespace std;

void check(int n){
    vector<int> v;
    vector<int> v2;
    int k=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
        v2.push_back(a);
    }
    sort(v2.begin(),v2.end());
    for(int j=0;j<n;j++){
        if(j<1 && v2[j]!=v2[j+1]){
            k=v2[j];
            break;
        }
        if(j>0 && j<n-1 && v2[j-1]!=v2[j] && v2[j]!=v2[j+1]){
            k=v2[j];
            break;
        }
        if(j>n-2 && v2[j-1]!=v2[j]){
            k=v2[j];
            break;
        }
    }
    if(k==0){
        cout<<"-1"<<endl;
        return;
    }
    else{
        for(int l=0;l<n;l++){
            if(v[l]==k){
                cout<<l+1<<endl;
                return;
            }
        }
    }
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