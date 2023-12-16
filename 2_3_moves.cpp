/*A. 2-3 Moves
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are standing at the point 0
 on a coordinate line. Your goal is to reach the point n
. In one minute, you can move by 2
 or by 3
 to the left or to the right (i. e., if your current coordinate is x
, it can become x−3
, x−2
, x+2
 or x+3
). Note that the new coordinate can become negative.

Your task is to find the minimum number of minutes required to get from the point 0
 to the point n
.

You have to answer t
 independent test cases.

Input
The first line of the input contains one integer t
 (1≤t≤104
) — the number of test cases. Then t
 lines describing the test cases follow.

The i
-th of these lines contains one integer n
 (1≤n≤109
) — the goal of the i
-th test case.

Output
For each test case, print one integer — the minimum number of minutes required to get from the point 0
 to the point n
 for the corresponding test case.

Example
inputCopy
4
1
3
4
12
outputCopy
2
1
2
4
*/
#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void check(int n){
        ll int sum=0,b=n,d=n/3;
        if(n%3==0){
            cout<<n/3<<endl;
            return;
        }
        else{
            
            n=n-(3*(d));
            sum=sum+d;
            if(n%2!=0 && b<7){
                sum+=2;
            }
            else{
                sum+=1;
            }
        }

        if(b%2==0){
            cout<<min(sum,b/2)<<endl;
            return;
        }
        else{
            cout<<sum<<endl;
            return;
        }
}

int main(){
    ll int t,n,sum=0;
    cin>>t;
    for(ll int i=0;i<t;i++){
        cin>>n;
        check(n);
    }

    return 0;
}