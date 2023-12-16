/*A. Digits Sum
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Let's define S(x)
 to be the sum of digits of number x
 written in decimal system. For example, S(5)=5
, S(10)=1
, S(322)=7
.

We will call an integer x
 interesting if S(x+1)<S(x)
. In each test you will be given one integer n
. Your task is to calculate the number of integers x
 such that 1≤x≤n
 and x
 is interesting.

Input
The first line contains one integer t
 (1≤t≤1000
)  — number of test cases.

Then t
 lines follow, the i
-th line contains one integer n
 (1≤n≤109
) for the i
-th test case.

Output
Print t
 integers, the i
-th should be the answer for the i
-th test case.

Example
inputCopy
5
1
9
10
34
880055535
outputCopy
0
1
1
3
88005553
Note
The first interesting number is equal to 9
.*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int a;
        cin>>a;
        if(a<9){
            cout<<"0"<<endl;
        }
        else{
            string st1=to_string(a);
            int b=st1.size();
            if(b>=2){
                if(a%10<9){
                    cout<<a/10<<endl;
                }
                else{
                    cout<<a/10+1<<endl;
                }
            }
            else{
                cout<<"1"<<endl;
            }
        }
    }

    return 0;
}