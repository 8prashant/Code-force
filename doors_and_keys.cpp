/*A. Doors and Keys
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
The knight is standing in front of a long and narrow hallway. A princess is waiting at the end of it.

In a hallway there are three doors: a red door, a green door and a blue door. The doors are placed one after another, however, possibly in a different order. To proceed to the next door, the knight must first open the door before.

Each door can be only opened with a key of the corresponding color. So three keys: a red key, a green key and a blue key — are also placed somewhere in the hallway. To open the door, the knight should first pick up the key of its color.

The knight has a map of the hallway. It can be transcribed as a string, consisting of six characters:

R, G, B — denoting red, green and blue doors, respectively;
r, g, b — denoting red, green and blue keys, respectively.
Each of these six characters appears in the string exactly once.

The knight is standing at the beginning of the hallway — on the left on the map.

Given a map of the hallway, determine if the knight can open all doors and meet the princess at the end of the hallway.

Input
The first line contains a single integer t
 (1≤t≤720
) — the number of testcases.

Each testcase consists of a single string. Each character is one of R, G, B (for the doors), r, g, b (for the keys), and each of them appears exactly once.

Output
For each testcase, print YES if the knight can open all doors. Otherwise, print NO.

Example
inputCopy
4
rgbBRG
RgbrBG
bBrRgG
rgRGBb
outputCopy
YES
NO
YES
NO
Note
In the first testcase, the knight first collects all keys, then opens all doors with them.

In the second testcase, there is a red door right in front of the knight, but he doesn't have a key for it.

In the third testcase, the key to each door is in front of each respective door, so the knight collects the key and uses it immediately three times.

In the fourth testcase, the knight can't open the blue door.

*/
#include<bits/stdc++.h>
using namespace std;

void check(string st1){
    unordered_map<char,int> m;
    for(int i=0;i<st1.size();i++){
        if(st1[i]=='r' || st1[i]=='b'  || st1[i]=='g'){
            m[st1[i]]+=1;
        }
        else{
            st1[i]=tolower(st1[i]);
            if(m[st1[i]]==0){
                cout<<"NO"<<endl;
                return;
            }
        }
    }
    cout<<"YES"<<endl;
    return;
}

int main(){
    int t;
    string st1;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>st1;
        check(st1);
    }
    
    return 0;
}