/*A. Codeforces Checking
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Given a lowercase Latin character (letter), check if it appears in the string codeforces
.

Input
The first line of the input contains an integer t
 (1≤t≤26
) — the number of test cases.

The only line of each test case contains a character c
 — a single lowercase Latin character (letter).

Output
For each test case, output "YES" (without quotes) if c
 satisfies the condition, and "NO" (without quotes) otherwise.

You can output the answer in any case (for example, the strings "yEs", "yes", "Yes" and "YES" will be recognized as a positive answer).

Example
inputCopy
10
a
b
c
d
e
f
g
h
i
j
outputCopy
NO
NO
YES
YES
YES
YES
NO
NO
NO
NO*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    vector<char> v = {'c', 'o', 'd', 'e', 'f', 'o', 'r', 'c', 'e', 's'};
    cin>>t;
    for(int i=0;i<t;i++){
        char a;
        cin>>a;
        int sum=0;
        for(int j=0;j<v.size();j++){
            if(v[j]==a){
                sum+=1;
                break;
            }
        }
        if(sum>0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}