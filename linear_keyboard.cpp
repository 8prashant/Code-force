/*A. Linear Keyboard
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
You are given a keyboard that consists of 26
 keys. The keys are arranged sequentially in one row in a certain order. Each key corresponds to a unique lowercase Latin letter.

You have to type the word s
 on this keyboard. It also consists only of lowercase Latin letters.

To type a word, you need to type all its letters consecutively one by one. To type each letter you must position your hand exactly over the corresponding key and press it.

Moving the hand between the keys takes time which is equal to the absolute value of the difference between positions of these keys (the keys are numbered from left to right). No time is spent on pressing the keys and on placing your hand over the first letter of the word.

For example, consider a keyboard where the letters from 'a' to 'z' are arranged in consecutive alphabetical order. The letters 'h', 'e', 'l' and 'o' then are on the positions 8
, 5
, 12
 and 15
, respectively. Therefore, it will take |5−8|+|12−5|+|12−12|+|15−12|=13
 units of time to type the word "hello".

Determine how long it will take to print the word s
.

Input
The first line contains an integer t
 (1≤t≤1000
) — the number of test cases.

The next 2t
 lines contain descriptions of the test cases.

The first line of a description contains a keyboard — a string of length 26
, which consists only of lowercase Latin letters. Each of the letters from 'a' to 'z' appears exactly once on the keyboard.

The second line of the description contains the word s
. The word has a length from 1
 to 50
 letters inclusive and consists of lowercase Latin letters.

Output
Print t
 lines, each line containing the answer to the corresponding test case. The answer to the test case is the minimal time it takes to type the word s
 on the given keyboard.

Example
inputCopy
5
abcdefghijklmnopqrstuvwxyz
hello
abcdefghijklmnopqrstuvwxyz
i
abcdefghijklmnopqrstuvwxyz
codeforces
qwertyuiopasdfghjklzxcvbnm
qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq
qwertyuiopasdfghjklzxcvbnm
abacaba
outputCopy
13
0
68
0
74
*/
#include <bits/stdc++.h>
using namespace std;

void check(string st1,int i,int n){
    for(int j=0;j<st1.size();j++){
        st1[j]=tolower(st1[j]);
    }
    cout<<st1;
    if(i==n-1){
        cout<<".cpp"<<endl;
        return;
    }
    else{
        cout<<"_";
        return;
    }
}

int main() {
    int n;
    cin>>n;
    string v;
    for(int i=0;i<n;i++){
        cin>>v;
        check(v,i,n);
    }
    

    return 0;
}
