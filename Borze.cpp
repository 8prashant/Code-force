/*Borze
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Ternary numeric notation is quite popular in Berland. To telegraph the ternary number the Borze alphabet is used. Digit 0 is transmitted as «.», 1 as «-.» and 2 as «--». You are to decode the Borze code, i.e. to find out the ternary number given its representation in Borze alphabet.

Input
The first line contains a number in Borze code. The length of the string is between 1 and 200 characters. It's guaranteed that the given string is a valid Borze code of some ternary number (this number can have leading zeroes).

Output
Output the decoded ternary number. It can have leading zeroes.

Examples
inputCopy
.-.--
outputCopy
012
inputCopy
--.
outputCopy
20
inputCopy
-..-.--
outputCopy
1012
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a;
    string st1;
    cin>>st1;
    int i=0;
    while(i<st1.size()){
        if(st1[i]=='.' && st1[i-1]!='-' || st1[i]=='.' && st1[i-1]=='-' && st1[i-2]=='-' ){
            cout<<"0";
            i=i+1;
        }
        if(st1[i]=='-' && st1[i+1]=='.'){
            cout<<"1";
            i=i+2;
        }
        if(st1[i]=='-' && st1[i+1]=='-'){
            cout<<"2";
            i=i+2;
        }
    }

    return 0;
}