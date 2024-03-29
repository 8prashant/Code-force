/*A. QAQ
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
"QAQ" is a word to denote an expression of crying. Imagine "Q" as eyes with tears and "A" as a mouth.

Now Diamond has given Bort a string consisting of only uppercase English letters of length n. There is a great number of "QAQ" in the string (Diamond is so cute!).

illustration by 猫屋 https://twitter.com/nekoyaliu
Bort wants to know how many subsequences "QAQ" are in the string Diamond has given. Note that the letters "QAQ" don't have to be consecutive, but the order of letters should be exact.

Input
The only line contains a string of length n (1 ≤ n ≤ 100). It's guaranteed that the string only contains uppercase English letters.

Output
Print a single integer — the number of subsequences "QAQ" in the string.

Examples
inputCopy
QAQAQYSYIOIWIN
outputCopy
4
inputCopy
QAQQQZZYNOIWIN
outputCopy
3
Note
In the first example there are 4 subsequences "QAQ": "QAQAQYSYIOIWIN", "QAQAQYSYIOIWIN", "QAQAQYSYIOIWIN", "QAQAQYSYIOIWIN".

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int sum=0;
    string st1;
    cin>>st1;
    for(int i=0;i<st1.size();i++){
        if(st1[i]==81){
            for(int j=i+1;j<st1.size();j++){
                if(st1[j]==65){
                    for(int k=j+1;k<st1.size();k++){
                        if(st1[i]==81 && st1[j]==65 && st1[k]==81){
                            sum+=1;
                        }
                    }
                }
            }
        }
    }
    cout<<sum<<endl;
    return 0;
}