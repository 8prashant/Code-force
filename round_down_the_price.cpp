/*A. Round Down the Price
time limit per test1 second
memory limit per test256 megabytes
inputstandard input
outputstandard output
At the store, the salespeople want to make all prices round.

In this problem, a number that is a power of 10
 is called a round number. For example, the numbers 100=1
, 101=10
, 102=100
 are round numbers, but 20
, 110
 and 256
 are not round numbers.

So, if an item is worth m
 bourles (the value of the item is not greater than 109
), the sellers want to change its value to the nearest round number that is not greater than m
. They ask you: by how many bourles should you decrease the value of the item to make it worth exactly 10k
 bourles, where the value of k
 — is the maximum possible (k
 — any non-negative integer).

For example, let the item have a value of 178
-bourles. Then the new price of the item will be 100
, and the answer will be 178−100=78
.

Input
The first line of input data contains a single integer t
 (1≤t≤104
) — the number of test cases .

Each test case is a string containing a single integer m
 (1≤m≤109
) — the price of the item.

Output
For each test case, output on a separate line a single integer d
 (0≤d<m
) such that if you reduce the cost of the item by d
 bourles, the cost of the item will be the maximal possible round number. More formally: m−d=10k
, where k
 — the maximum possible non-negative integer.

Example
inputCopy
7
1
2
178
20
999999999
9000
987654321
outputCopy
0
1
78
10
899999999
8000
887654321
Note
In the example:

1−0=100
,
2−1=100
,
178−78=102
,
20−10=101
,
999999999−899999999=108
,
9000−8000=103
,
987654321−887654321=108
.
Note that in each test case, we get the maximum possible round number.*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    intmax_t t,n;
    string st1;
    cin>>t;
    for(intmax_t i=0;i<t;i++){
        cin>>n;
        st1=to_string(n);
        if(n==pow(10,(st1.size()-1))){
            cout<<"0"<<endl;
        }
        else{
            cout << fixed << setprecision(0) <<n-pow(10,(st1.size()-1))<<endl;
        }
    }
    return 0;
}