/*A. Night at the Museum
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
Grigoriy, like the hero of one famous comedy film, found a job as a night security guard at the museum. At first night he received embosser and was to take stock of the whole exposition.

Embosser is a special devise that allows to "print" the text of a plastic tape. Text is printed sequentially, character by character. The device consists of a wheel with a lowercase English letters written in a circle, static pointer to the current letter and a button that print the chosen letter. At one move it's allowed to rotate the alphabetic wheel one step clockwise or counterclockwise. Initially, static pointer points to letter 'a'. Other letters are located as shown on the picture:


After Grigoriy add new item to the base he has to print its name on the plastic tape and attach it to the corresponding exhibit. It's not required to return the wheel to its initial position with pointer on the letter 'a'.

Our hero is afraid that some exhibits may become alive and start to attack him, so he wants to print the names as fast as possible. Help him, for the given string find the minimum number of rotations of the wheel required to print it.

Input
The only line of input contains the name of some exhibit — the non-empty string consisting of no more than 100 characters. It's guaranteed that the string consists of only lowercase English letters.

Output
Print one integer — the minimum number of rotations of the wheel, required to print the name given in the input.

Examples
inputCopy
zeus
outputCopy
18
inputCopy
map
outputCopy
35
inputCopy
ares
outputCopy
34
Note
 


To print the string from the first sample it would be optimal to perform the following sequence of rotations:

from 'a' to 'z' (1 rotation counterclockwise),
from 'z' to 'e' (5 clockwise rotations),
from 'e' to 'u' (10 rotations counterclockwise),
from 'u' to 's' (2 counterclockwise rotations).
In total, 1 + 5 + 10 + 2 = 18 rotations are required.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    string st1;
    cin>>st1;
    int ar=97,sum=0;
    for(int i=0;i<st1.size();i++){
        int n=int(st1[i]);
        int w=abs(n-97)+abs(122-ar)+1;
        int x=abs(n-ar);
        int y=abs(122-n)+abs(ar-97)+1;
        int m=min({w,x,y});
        sum=sum+m;
        ar=n;
        
    }
    cout<<sum<<endl;

    return 0;
}