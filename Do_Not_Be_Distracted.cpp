/*Polycarp has 26 tasks. Each task is designated by a capital letter of the Latin alphabet.

The teacher asked Polycarp to solve tasks in the following way: if Polycarp began to solve some task, then he must solve it to the end, without being distracted by another task. After switching to another task, Polycarp cannot return to the previous task.

Polycarp can only solve one task during the day. Every day he wrote down what task he solved. Now the teacher wants to know if Polycarp followed his advice.

For example, if Polycarp solved tasks in the following order: "DDBBCCCBBEZ", then the teacher will see that on the third day Polycarp began to solve the task 'B', then on the fifth day he got distracted and began to solve the task 'C', on the eighth day Polycarp returned to the task 'B'. Other examples of when the teacher is suspicious: "BAB", "AABBCCDDEEBZZ" and "AAAAZAAAAA".

If Polycarp solved the tasks as follows: "FFGZZZY", then the teacher cannot have any suspicions. Please note that Polycarp is not obligated to solve all tasks. Other examples of when the teacher doesn't have any suspicious: "BA", "AFFFCC" and "YYYYY".

Help Polycarp find out if his teacher might be suspicious.

Input
The first line contains an integer t (1≤t≤1000). Then t test cases follow.

The first line of each test case contains one integer n (1≤n≤50) — the number of days during which Polycarp solved tasks.

The second line contains a string of length n, consisting of uppercase Latin letters, which is the order in which Polycarp solved the tasks.

Output
For each test case output:

"YES", if the teacher cannot be suspicious;
"NO", otherwise.
You may print every letter in any case you want (so, for example, the strings yEs, yes, Yes and YES are all recognized as positive answer).

Example
inputCopy
5
3
ABA
11
DDBBCCCBBEZ
7
FFGZZZY
1
Z
2
AB
outputCopy
NO
NO
YES
YES
YES*/
#include<bits/stdc++.h>
using namespace std;

int recheck(char c,vector<int> arr){
   int n=int(c);
   for(int i=0;i<arr.size();i++){
      if(arr[i]==n){
         return 1;
      }
   }
   return 0;
}

void check(string st1){
   int n=st1.size();
   vector<int> arr;
   for(int i=0;i<n;i++){
      while(st1[i]==st1[i+1]){
         i=i+1;
      }
      if(recheck(st1[i+1],arr)){
         cout<<"NO"<<endl;
         return;
      }
      else{
         arr.push_back(int(st1[i]));
      }
   }
   cout<<"YES"<<endl;
   return;
}

int main(){
   int n,a;
   cin>>n;
   for(int i=0;i<n;i++){
      cin>>a;
   string st1;
   cin>>st1;
   check(st1);
   }
   return 0;
}