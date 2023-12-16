class Solution {
public:
    vector<string> getFolderNames(vector<string>& names) {
        unordered_map<string , int> m;
        string base;
        int a;
        int size=names.size();
        cout<<"s="<<size<<endl;
        for(int i=0;i<size;i++){
            if(m.find(names[i])==m.end()){
                m[names[i]]=1;
            }
            else{
                //cout<<"n="<<names[i]<<"i="<<i<<endl;
                /*if(names[i][names[i].size()-1]!=')'){
                    base=names[i];
                }*/
                /*else{*/
                    int x=-1;
                    int j=0;
                    while(names[i][j]!='('){
                        x++;
                        j++;
                    }
                    base=names[i].substr(0,x);
                }*/
                a=m[base];

                while(m[names[i]]>=1){
                    
                    cout<<"m="<<names[i]<<" "<<"a="<<a<<endl;
                    string st1;
                    st1='('+to_string(a)+')';
                    names[i]=base+st1;
                    a++;
                }
                m[names[i]]=1;
                m[base]++;
                
            }
        }
        return names;
        
    }
};