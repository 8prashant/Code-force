/*Polycarp Writes a String from Memory
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Polycarp has a poor memory. Each day he can remember no more than 3
 of different letters.

Polycarp wants to write a non-empty string of s
 consisting of lowercase Latin letters, taking minimum number of days. In how many days will he be able to do it?

Polycarp initially has an empty string and can only add characters to the end of that string.

For example, if Polycarp wants to write the string lollipops, he will do it in 2
 days:

on the first day Polycarp will memorize the letters l, o, i and write lolli;
On the second day Polycarp will remember the letters p, o, s, add pops to the resulting line and get the line lollipops.
If Polycarp wants to write the string stringology, he will do it in 4
 days:

in the first day will be written part str;
on day two will be written part ing;
on the third day, part of olog will be written;
on the fourth day, part of y will be written.
For a given string s
, print the minimum number of days it will take Polycarp to write it.

Input
The first line of input data contains a single integer t
 (1≤t≤104
) — the number of test cases.

Each test case consists of a non-empty string s
 consisting of lowercase Latin letters (the length of the string s
 does not exceed 2⋅105
) — the string Polycarp wants to construct.

It is guaranteed that the sum of string lengths s
 over all test cases does not exceed 2⋅105
.

Output
For each test case, print a single number — minimum number of days it will take Polycarp to write the string s
 from memory.

Example
inputCopy
6
lollipops
stringology
abracadabra
codeforces
test
f
outputCopy
2
4
3
4
1
1
*/
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    for(int j=0;j<t;j++){
        set<char> st;
        string s;
        cin>>s;
        int sum=1;
        for(int i=0;i<s.size();i++){
            st.insert(s[i]);
            if(st.size()>3){
                sum++;
                st.clear();
                st.insert(s[i]);
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}