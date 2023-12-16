/*A. Colorful Stones (Simplified Edition)
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
There is a sequence of colorful stones. The color of each stone is one of red, green, or blue. You are given a string s. The i-th (1-based) character of s represents the color of the i-th stone. If the character is "R", "G", or "B", the color of the corresponding stone is red, green, or blue, respectively.

Initially Squirrel Liss is standing on the first stone. You perform instructions one or more times.

Each instruction is one of the three types: "RED", "GREEN", or "BLUE". After an instruction c, if Liss is standing on a stone whose colors is c, Liss will move one stone forward, else she will not move.

You are given a string t. The number of instructions is equal to the length of t, and the i-th character of t represents the i-th instruction.

Calculate the final position of Liss (the number of the stone she is going to stand on in the end) after performing all the instructions, and print its 1-based position. It is guaranteed that Liss don't move out of the sequence.

Input
The input contains two lines. The first line contains the string s (1 ≤ |s| ≤ 50). The second line contains the string t (1 ≤ |t| ≤ 50). The characters of each string will be one of "R", "G", or "B". It is guaranteed that Liss don't move out of the sequence.

Output
Print the final 1-based position of Liss in a single line.

Examples
inputCopy
RGB
RRR
outputCopy
2
inputCopy
RRRBGBRBBB
BBBRR
outputCopy
3
inputCopy
BRRBGBRGRBGRGRRGGBGBGBRGBRGRGGGRBRRRBRBBBGRRRGGBBB
BBRBGGRGRGBBBRBGRBRBBBBRBRRRBGBBGBBRRBBGGRBRRBRGRB
outputCopy
15
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int p=0;
    string st1,st2;
    cin>>st1>>st2;
    for(int i=0;i<st2.size();i++){   
        if(st2[i]==st1[p]){
            p+=1;
        }
    }
    cout<<p+1<<endl;
    return 0;
}

/*
s = "RRRBGBRBBB"
t = "BBBRR"
output 
3

Start with Liss on the first stone (pos = 1).

Check the first instruction in t, which is "B". The color of the current stone is "R", which does not match the instruction "B". 
Therefore, Liss does not move, and her position remains at 1.

Check the second instruction in t, which is "B". The color of the current stone is still "R", which does not match the instruction "B". 
Therefore, Liss does not move, and her position remains at 1.

*/