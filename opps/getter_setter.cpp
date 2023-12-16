#include<bits/stdc++.h>
using namespace std;

class Hero{
    private:
    int data;
    public:
    char level;
    char *name= new char[100];


    int getdata(){
        return data;
    }
    void setdata(int data){
        this->data=data;
    }
    void setname(char name[]){
        strcpy(this->name,name);
    }

    void print(){
        cout<<"Name: "<<this->name<<", ";
        cout<<"Data: "<<this->data<<", ";
        cout<<"level: "<<this->level<<endl;
    }
};

int main(){
    Hero a;
    a.setdata(5);
    a.level='A';
    cout<<a.getdata()<<" "<<a.level<<endl;
    char  name[7]="babbar";
    a.setname(name);
    a.print();

    Hero b=a;
    b.print();

    a.name[0]='G';
    a.print();

    b.print();

    return 0;
}