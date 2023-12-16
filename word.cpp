/*Word
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Vasya is very upset that many people on the Net mix uppercase and lowercase letters in one word. That's why he decided to invent an extension for his favorite browser that would change the letters' register in every word so that it either only consisted of lowercase letters or, vice versa, only of uppercase ones. At that as little as possible letters should be changed in the word. For example, the word HoUse must be replaced with house, and the word ViP — with VIP. If a word contains an equal number of uppercase and lowercase letters, you should replace all the letters with lowercase ones. For example, maTRIx should be replaced by matrix. Your task is to use the given method on one given word.

Input
The first line contains a word s — it consists of uppercase and lowercase Latin letters and possesses the length from 1 to 100.

Output
Print the corrected word s. If the given word s has strictly more uppercase letters, make the word written in the uppercase register, otherwise - in the lowercase one.

Examples
inputCopy
HoUse
outputCopy
house
inputCopy
ViP
outputCopy
VIP
inputCopy
maTRIx
outputCopy
matrix
*/
#include<bits/stdc++.h>
using namespace std;
 int main(){
    int sum=0;
    string st1;
    cin>>st1;
    for(int i=0;i<st1.size();i++){
        if(st1[i]>=95){
            sum=sum+1;
        }
    }
    float x=st1.size();
    float y=2;
    float z=x/y;
    if(sum>=z){
        for(int k=0;k<st1.size();k++){
            st1[k]=tolower(st1[k]);
        }
    }
    else{
        for(int j=0;j<st1.size();j++){
            st1[j]=toupper(st1[j]);
        }
    }
    cout<<st1<<endl;
    return 0;
}