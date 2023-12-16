//Team Olympiad
/*The School №0 of the capital of Berland has n children studying in it. All the children in this school are gifted: some of them are good at programming, some are good at maths, others are good at PE (Physical Education). Hence, for each child we know value ti:

ti = 1, if the i-th child is good at programming,
ti = 2, if the i-th child is good at maths,
ti = 3, if the i-th child is good at PE
Each child happens to be good at exactly one of these three subjects.

The Team Scientific Decathlon Olympias requires teams of three students. The school teachers decided that the teams will be composed of three children that are good at different subjects. That is, each team must have one mathematician, one programmer and one sportsman. Of course, each child can be a member of no more than one team.

What is the maximum number of teams that the school will be able to present at the Olympiad? How should the teams be formed for that?

Input
The first line contains integer n (1 ≤ n ≤ 5000) — the number of children in the school. The second line contains n integers t1, t2, ..., tn (1 ≤ ti ≤ 3), where ti describes the skill of the i-th child.

Output
In the first line output integer w — the largest possible number of teams.

Then print w lines, containing three numbers in each line. Each triple represents the indexes of the children forming the team. You can print both the teams, and the numbers in the triplets in any order. The children are numbered from 1 to n in the order of their appearance in the input. Each child must participate in no more than one team. If there are several solutions, print any of them.

If no teams can be compiled, print the only line with value w equal to 0.

Examples
inputCopy
7
1 3 1 3 2 1 2
outputCopy
2
3 5 2
6 7 4
inputCopy
4
2 1 1 2
outputCopy
0*/

#include <bits/stdc++.h>
using namespace std;

void display(list<int> &l){
	list<int> :: iterator p;
	p=l.begin();
	cout<<*p<<" ";
	l.pop_front();
}

int main(){
	int n,x=0,y=0,z=0;
	cin>>n;
	int a[n]={};
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]==1){
			x=x+1;
		}
		if(a[i]==2){
			y=y+1;
		}
		if(a[i]==3){
			z=z+1;
		}
	}
	int b=min(x,min(y,z));
	cout<<b<<endl;

	list <int> c;
	list <int> d;
	list <int> e;

	for(int j=0;j<n;j++){

		if(a[j]==1){
			c.push_back(j+1);
		}
		if(a[j]==2){
			d.push_back(j+1);
		}
		if(a[j]==3){
			e.push_back(j+1);
		}
	}

	for(int k=0;k<b;k++){
		display(c);
		display(d);
		display(e);
		cout<<endl;
	}

	return 0;
}