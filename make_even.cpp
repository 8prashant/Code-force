/*A. Make Even
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Polycarp has an integer n
 that doesn't contain the digit 0. He can do the following operation with his number several (possibly zero) times:

Reverse the prefix of length l
 (in other words, l
 leftmost digits) of n
. So, the leftmost digit is swapped with the l
-th digit from the left, the second digit from the left swapped with (l−1
)-th left, etc. For example, if n=123456789
 and l=5
, then the new value of n
 will be 543216789
.
Note that for different operations, the values of l
 can be different. The number l
 can be equal to the length of the number n
 — in this case, the whole number n
 is reversed.

Polycarp loves even numbers. Therefore, he wants to make his number even. At the same time, Polycarp is very impatient. He wants to do as few operations as possible.

Help Polycarp. Determine the minimum number of operations he needs to perform with the number n
 to make it even or determine that this is impossible.

You need to answer t
 independent test cases.

Input
The first line contains the number t
 (1≤t≤104
) — the number of test cases.

Each of the following t
 lines contains one integer n
 (1≤n<109
). It is guaranteed that the given number doesn't contain the digit 0.

Output
Print t
 lines. On each line print one integer — the answer to the corresponding test case. If it is impossible to make an even number, print -1.

Example
inputCopy
4
3876
387
4489
3
outputCopy
0
2
1
-1
Note
In the first test case, n=3876
, which is already an even number. Polycarp doesn't need to do anything, so the answer is 0
.

In the second test case, n=387
. Polycarp needs to do 2
 operations:

Select l=2
 and reverse the prefix 38–––7
. The number n
 becomes 837
. This number is odd.
Select l=3
 and reverse the prefix 837––––
. The number n
 becomes 738
. This number is even.
It can be shown that 2
 is the minimum possible number of operations that Polycarp needs to do with his number to make it even.

In the third test case, n=4489
. Polycarp can reverse the whole number (choose a prefix of length l=4
). It will become 9844
 and this is an even number.

In the fourth test case, n=3
. No matter how hard Polycarp tried, he would not be able to make an even number.*/

#include<bits/stdc++.h>
using namespace std;

void check(string st1,int sum){
    int nil=0;
    int n=st1.size();
    if(n==1 && st1[0]%2!=0){
        cout<<"-1"<<endl;
        return;
    }
    if(n==1 && st1[0]%2==0){
        cout<<"0"<<endl;
        return;
    }                               
        if(st1[n-1]%2!=0){
            sum+=1;
            if(st1[0]%2!=0){
                for(int i=1;i<n-1;i++){
                    if(st1[i]%2==0){
                        sum+=1;
                        cout<<sum<<endl;
                        return;
                    }
                    else{
                        nil+=1;
                    }
                }
                if(nil==n-2){
                    cout<<"-1"<<endl;
                    return;
                }
            }
            else{
                cout<<sum<<endl;
                return;
            }
        }
        else{
            cout<<"0"<<endl;
            return;
        }
}

int main(){
    int t,nil=0;
    string st1;
    cin>>t;
    for(int i=0;i<t;i++){
        int sum=0;
        cin>>st1;
        check(st1,sum);

    }
    return 0;
}