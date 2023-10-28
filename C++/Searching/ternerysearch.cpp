#include <iostream>
using namespace std;


//THIS RUNS ON O(LOGN) Rruntime
bool ternerysearch(int *arr,int start,int low,int key){
    int mid1= start + (low-start)/3;
    int mid2 = low - (low-start)/3;
    if(arr[mid1] == key){
        return 1;
    }
    else if(key>arr[mid1] && key<arr[mid2]){
        return ternerysearch(arr,mid1+1,mid2-1,key);
    }
    else if(key<arr[mid1]){
        return ternerysearch(arr,start,mid1-1,key);
    }
    else if(key>arr[mid2]){
        return ternerysearch(arr,mid2+1,low,key);
    }
};

int main(){
    int size;
    cin >> size;
    int arr[size];
    for (int i=0;i<size;i++){
        int num;
        cin >> num;
        arr[i] = num;
    }
    int key;
    cin >> key;
    cout << ternerysearch(arr,0,size-1,key);

}