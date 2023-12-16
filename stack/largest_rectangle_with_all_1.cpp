

/////********O(row*column*row*column)*******//////


/*#include<bits/stdc++.h>
using namespace std;

int check(vector<vector<int>>v,int t,int c){
        vector<int> v2;
        int sum=0;
        for(int i=0;i<c;i++){
            int r=t-1;
            int x=v[t][i];
            sum=x==0? 0:1;
            while(sum!=0 && v[r][i]!=0 && sum<=t){
                sum++;
                r--;
            }
            v2.push_back(sum);
        }
        stack<int> s;
        int res=0;
        for(int i=0;i<v2.size();i++){
            while(s.empty()==false && v2[i]<=v2[s.top()]){
                int tem=s.top();
                s.pop();
                int curr=v2[tem]*(s.empty()? i:(i-s.top()-1));
                res=max(res,curr);
            }
            s.push(i);
        }
            while(s.empty()==false){
                int tem=s.top();
                s.pop();
                int curr= v2[tem]*(s.empty()? v2.size():v2.size()-s.top()-1);
                res=max(res,curr);
            }
        
        return res;
    }
    void maximalRectangle(vector<vector<int>> v) {
        int res=0;
        int r=v.size();
        int c=v[0].size();
        for(int i=r-1;i>=0;i--){
            res=max(res,check(v,i,c));
        }
        cout<<"res= "<<res<<endl;;
    }
    
int main(){
vector<vector<int>> v = {{1, 0, 1, 0, 0},
                         {1, 0, 1, 1, 1},
                         {1, 1, 1, 1, 1},
                         {1, 0, 0, 1, 0}};

    maximalRectangle(v);
    return 0;
}*/

class Solution {
public:

    int check(vector<int> v2){
        int res=0;
        stack<int> s;
        for(int i=0;i<v2.size();i++){
            while(s.empty()==false && v2[i]<=v2[s.top()]){
                int tem=s.top();
                s.pop();
                int curr=v2[tem]*(s.empty()? i:(i-s.top()-1));
                res=max(res,curr);
            }
            s.push(i);
        }
            while(s.empty()==false){
                int tem=s.top();
                s.pop();
                int curr= v2[tem]*(s.empty()? v2.size():v2.size()-s.top()-1);
                res=max(res,curr);
            }
        return res;
    }
    int maximalRectangle(vector<vector<char>> &v) {
        int r=v.size();
        int c=v[0].size();
        cout<<"r="<<r<<" "<<"c="<<c<<endl;
        vector<int> v2;
        int res=0;
        for(int i=0;i<c;i++){
            int a=v[0][i]==48? 0:1;
            v2.push_back(a);
        }
        res=max(res,check(v2));
        for(int i=1;i<r;i++){
            for(int j=0;j<c;j++){
                v2[j]=v[i][j]==48? 0:v2[j]+1;
            }
            res=max(res,check(v2));
        }
        return res;
        
    }
};