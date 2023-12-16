/* Little Petya loves presents. His mum bought him two strings of the same size for his birthday. The strings consist of uppercase and lowercase Latin letters. Now Petya wants to compare those two strings lexicographically. The letters' case does not matter, that is an uppercase letter is considered equivalent to the corresponding lowercase letter. Help Petya perform the comparison.

Input
Each of the first two lines contains a bought string. The strings' lengths range from 1 to 100 inclusive. It is guaranteed that the strings are of the same length and also consist of uppercase and lowercase Latin letters.

Output
If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1". If the strings are equal, print "0". Note that the letters' case is not taken into consideration when the strings are compared.

Examples
inputCopy
aaaa
aaaA
outputCopy
0
inputCopy
abs
Abz
outputCopy
-1
inputCopy
abcdefg
AbCdEfF
outputCopy
1
Note
If you want more formal information about the lexicographical order (also known as the "dictionary order" or "alphabetical order"), you can visit the following site:

http://en.wikipedia.org/wiki/Lexicographical_order */

#include<bits/stdc++.h>
using namespace std;

int main(){
    string st1;
    cin>>st1;
    for(int i=0;i<st1.size();i++){
        st1[i]=tolower(st1[i]);
    }

    string st2;
    cin>>st2;
    for(int j=0;j<st2.size();j++){
        st2[j]=tolower(st2[j]);
    }

    if(st1<st2){
        cout<<"-1"<<endl;
    }
    else if(st1==st2){
        cout<<"0"<<endl;
    }
    else {
        cout<<"1"<<endl;
    }

    return 0;
}