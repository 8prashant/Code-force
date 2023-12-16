/*A. ABC
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Recently, the students of School 179 have developed a unique algorithm, which takes in a binary string s
 as input. However, they soon found out that if some substring t
 of s
 is a palindrome of length greater than 1, the algorithm will work incorrectly. Can the students somehow reorder the characters of s
 so that the algorithm will work correctly on the string?

A binary string is a string where each character is either 0 or 1.

A string a
 is a substring of a string b
 if a
 can be obtained from b
 by deletion of several (possibly, zero or all) characters from the beginning and several (possibly, zero or all) characters from the end.

A palindrome is a string that reads the same backwards as forwards.

Input
Each test contains multiple test cases. The first line contains the number of test cases t
 (1≤t≤100
). Description of the test cases follows.

The first line of each test case contains a single integer n
 (1≤n≤100
) — the length of the string s
.

The second line of each test case contains the string s
 of length n
 consisting only of the characters 0 and 1.

Output
For each test case, print YES (case-insensitive) if it is possible to reorder the characters of s
 so that there are no substrings that are a palindrome of length greater than 1, or NO (case-insensitive) otherwise.

Example
inputCopy
4
1
1
2
10
2
01
4
1010
outputCopy
YES
YES
YES
NO
Note
In the first three test cases, the given strings do not contain palindromes of length greater than 1, so the answers are YES.

In the last test case, it is impossible to reorder the characters so that the string does not contain palindromes of length greater than 1, so the answer is NO.

*/
#include<bits/stdc++.h>
using namespace std;

void check(int n){
    string st1;
    cin>>st1;
    if(n<=2){
        if(n==1){
            cout<<"YES"<<endl;
            return;
        }
        else{
            if(st1[0]!=st1[1]){
                cout<<"YES"<<endl;
                return;
            }
            else{
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    else{
        cout<<"NO"<<endl;
        return;
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