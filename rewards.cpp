/*A. Rewards
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Bizon the Champion is called the Champion for a reason.

Bizon the Champion has recently got a present — a new glass cupboard with n shelves and he decided to put all his presents there. All the presents can be divided into two types: medals and cups. Bizon the Champion has a1 first prize cups, a2 second prize cups and a3 third prize cups. Besides, he has b1 first prize medals, b2 second prize medals and b3 third prize medals.

Naturally, the rewards in the cupboard must look good, that's why Bizon the Champion decided to follow the rules:

any shelf cannot contain both cups and medals at the same time;
no shelf can contain more than five cups;
no shelf can have more than ten medals.
Help Bizon the Champion find out if we can put all the rewards so that all the conditions are fulfilled.

Input
The first line contains integers a1, a2 and a3 (0 ≤ a1, a2, a3 ≤ 100). The second line contains integers b1, b2 and b3 (0 ≤ b1, b2, b3 ≤ 100). The third line contains integer n (1 ≤ n ≤ 100).

The numbers in the lines are separated by single spaces.

Output
Print "YES" (without the quotes) if all the rewards can be put on the shelves in the described manner. Otherwise, print "NO" (without the quotes).

Examples
inputCopy
1 1 1
1 1 1
4
outputCopy
YES
inputCopy
1 1 3
2 3 4
2
outputCopy
YES
inputCopy
1 0 0
1 0 0
1
outputCopy
NO
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int c=0,m=0;
    for(int i=0;i<3;i++){
        int a;
        cin>>a;
        c+=a;
    }
    for(int i=0;i<3;i++){
        int a;
        cin>>a;
        m+=a;
    }
    int s;
    cin>>s;
    if(s>=(c/5+(c%5==0?0:1)+m/10+(m%10==0?0:1))){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}