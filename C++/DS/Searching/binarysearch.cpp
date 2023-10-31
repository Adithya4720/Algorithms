#include <iostream>
using namespace std;

void binarysearch(int arr[],int start,int end,int key){
    //This is a safe way to find mid because if start and end are very large then their sum will overflow
    int mid= start + (end-start)/2;
    if(key > arr[mid]){
        binarysearch(arr,mid+1,end,key);
    }
    else if(key < arr[mid]){
        binarysearch(arr,start,mid-1,key);
    }
    else{
        cout << "Found at index " << mid << endl;
    }
}

int main(){
    int size;
    cin >> size;
    int array[size];
    for (int i=0;i<size;i++){
        int num;
        cin >> num;
        array[i] = num;
    }
    int key;
    cin >> key;
    binarysearch(array,0,size-1,key);
    
}