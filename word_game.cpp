/*C. Word Game
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Three guys play a game: first, each person writes down n
 distinct words of length 3
. Then, they total up the number of points as follows:

if a word was written by one person — that person gets 3 points,
if a word was written by two people — each of the two gets 1 point,
if a word was written by all — nobody gets any points.
In the end, how many points does each player have?
Input
The input consists of multiple test cases. The first line contains an integer t
 (1≤t≤100
) — the number of test cases. The description of the test cases follows.

The first line of each test case contains an integer n
 (1≤n≤1000
) — the number of words written by each person.

The following three lines each contain n
 distinct strings — the words written by each person. Each string consists of 3
 lowercase English characters.

Output
For each test case, output three space-separated integers — the number of points each of the three guys earned. You should output the answers in the same order as the input; the i
-th integer should be the number of points earned by the i
-th guy.

Example
inputCopy
3
1
abc
def
abc
3
orz for qaq
qaq orz for
cod for ces
5
iat roc hem ica lly
bac ter iol ogi sts
bac roc lly iol iat
outputCopy
1 3 1 
2 2 6 
9 11 5 
Note
In the first test case:

The word abc
 was written by the first and third guys — they each get 1
 point.
The word def
 was written by the second guy only — he gets 3
 points.
*/
#include<bits/stdc++.h>
using namespace std;

void check(int n){
    unordered_map<string , int> m;
    int a=0,b=0,c=0;
    string st1[n+1];
    string st2[n+1];
    string st3[n+1];
    for(int i=0;i<n;i++){
        cin>>st1[i];
        m[st1[i]]+=1;
    }
    for(int i=0;i<n;i++){
        cin>>st2[i];
        m[st2[i]]+=1;
    }
    for(int i=0;i<n;i++){
        cin>>st3[i];
        m[st3[i]]+=1;
    }
    for(int i=0;i<n;i++){
        if(m[st1[i]]==1){
            a+=3;
        }
        if(m[st1[i]]==2){
            a+=1;
        }
        if(m[st2[i]]==1){
            b+=3;
        }
        if(m[st2[i]]==2){
            b+=1;
        }
        if(m[st3[i]]==1){
            c+=3;
        }
        if(m[st3[i]]==2){
            c+=1;
        }
    }
    cout<<a<<" "<<b<<" "<<c<<endl;

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