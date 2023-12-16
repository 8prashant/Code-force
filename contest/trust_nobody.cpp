#include<iostream>
#include<set>
using namespace std;

void check(int n){
    set<int> st;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        st.insert(a);
    }
    int si=st.size();
    auto last_element = *(st.rbegin());
    if(last_element==n && si>=3){
        st.erase(last_element);
        auto slast = *(st.rbegin());
        st.erase(slast);
        auto tlast = *(st.rbegin());
        cout<<(slast+tlast)/2<<endl;
    }
    else if(last_element==n && si==2){
        st.erase(last_element);
        auto slast = *(st.rbegin());
        cout<<slast<<endl;
    }
    else if(last_element==n && si==1){
        cout<<"-1"<<endl;
    }
    else{
        cout<<last_element<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        check(n);
    }
    return 0;
}