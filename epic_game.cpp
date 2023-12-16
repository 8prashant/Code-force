/*A. Epic Game
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Simon and Antisimon play a game. Initially each player receives one fixed positive integer that doesn't change throughout the game. Simon receives number a and Antisimon receives number b. They also have a heap of n stones. The players take turns to make a move and Simon starts. During a move a player should take from the heap the number of stones equal to the greatest common divisor of the fixed number he has received and the number of stones left in the heap. A player loses when he cannot take the required number of stones (i. e. the heap has strictly less stones left than one needs to take).

Your task is to determine by the given a, b and n who wins the game.

Input
The only string contains space-separated integers a, b and n (1 ≤ a, b, n ≤ 100) — the fixed numbers Simon and Antisimon have received correspondingly and the initial number of stones in the pile.

Output
If Simon wins, print "0" (without the quotes), otherwise print "1" (without the quotes).

Examples
inputCopy
3 5 9
outputCopy
0
inputCopy
1 1 100
outputCopy
1
Note
The greatest common divisor of two non-negative integers a and b is such maximum positive integer k, that a is divisible by k without remainder and similarly, b is divisible by k without remainder. Let gcd(a, b) represent the operation of calculating the greatest common divisor of numbers a and b. Specifically, gcd(x, 0) = gcd(0, x) = x.

In the first sample the game will go like that:

Simon should take gcd(3, 9) = 3 stones from the heap. After his move the heap has 6 stones left.
Antisimon should take gcd(5, 6) = 1 stone from the heap. After his move the heap has 5 stones left.
Simon should take gcd(3, 5) = 1 stone from the heap. After his move the heap has 4 stones left.
Antisimon should take gcd(5, 4) = 1 stone from the heap. After his move the heap has 3 stones left.
Simon should take gcd(3, 3) = 3 stones from the heap. After his move the heap has 0 stones left.
Antisimon should take gcd(5, 0) = 5 stones from the heap. As 0 < 5, it is impossible and Antisimon loses.
In the second sample each player during each move takes one stone from the heap. As n is even, Antisimon takes the last stone and Simon can't make a move after that.

*/
#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b == 0) {
        return a;
    }
    else {
        return gcd(b, a % b);
    }
}

int main(){
    int a,b,p;
    cin>>a>>b>>p;
    int i=0;

    while(p>0){
        if(i%2==0){
            p-=gcd(a,p);
            i++;
        }
        else{
            p-=gcd(b,p);
            i++;
        }
    }
    if(i%2==0){
        cout<<"1"<<endl;
    }
    else{
        cout<<"0"<<endl;
    }

    return 0;
}