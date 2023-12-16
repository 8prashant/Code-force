#include<bits/stdc++.h>
using namespace std;

int part(int arr[] , int s , int e ){
    int pivot=arr[s];
    int i=s-1;
    int j=e+1;


    while(true){
        do{
            i++;
        }while(arr[i]<pivot);

        do{
            j--;
        }while(arr[j]>pivot);

        if(i>=j)
            return j;
        

            swap(arr[i],arr[j]);
    }
}

void printlist(int arr[],int s){
    for(int i=0;i<s;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

 void qsort(int arr[] , int s ,int e){
    if(s<e){
        int p= part(arr,s,e);
        qsort(arr,s,p);
        qsort(arr,p+1,e);
    }
 }

int main(){
    int arr[] = { 10, 7, 8, 9, 1, 5 };
    qsort(arr,0,5);
    printlist(arr,6);

    return 0;
}