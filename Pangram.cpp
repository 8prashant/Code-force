/*Pangram
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
A word or a sentence in some language is called a pangram if all the characters of the alphabet of this language appear in it at least once. Pangrams are often used to demonstrate fonts in printing or test the output devices.

You are given a string consisting of lowercase and uppercase Latin letters. Check whether this string is a pangram. We say that the string contains a letter of the Latin alphabet if this letter occurs in the string in uppercase or lowercase.

Input
The first line contains a single integer n (1 ≤ n ≤ 100) — the number of characters in the string.

The second line contains the string. The string consists only of uppercase and lowercase Latin letters.

Output
Output "YES", if the string is a pangram and "NO" otherwise.

Examples
inputCopy
12
toosmallword
outputCopy
NO
inputCopy
35
TheQuickBrownFoxJumpsOverTheLazyDog
outputCopy
YES
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,sum=0;
	cin>>n;
	string st1;
	cin>>st1;
	list<char>a;
	for(int i=0;i<n;i++){
		st1[i]=tolower(st1[i]);
	}
	for(int j=0;j<n;j++){
		a.push_back(st1[j]);
	}
	a.sort();
	a.unique();
	int size=a.size();
	int b=26;
	if(size==b){
		cout<<"YES";
	}
	else{

		cout<<"NO";
	}
	return 0;
}