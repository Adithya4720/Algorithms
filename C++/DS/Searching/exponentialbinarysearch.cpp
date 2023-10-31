#include <iostream>
using namespace std;

int binarysearch(int arr[],int start,int end,int key){
    while(start<=end){
        int mid = start + (end-start)/2;
        if (arr[mid] == key){
            return mid;
        }
        else if (arr[mid] > key){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;
}


int exponentialsearch(int arr[],int size,int key){
    if  (arr[0] == key){
        return 0;
    }
    int i=1;
    while(i<size && arr[i]<=key){
        i=i*2;
    }
    return binarysearch(arr ,i/2 ,i-1 ,key);
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
    int result = exponentialsearch(array,size,key);
    if (result == -1){
        cout << "Element not found";
    }
    else{
        cout << "Element found at index " << result;
    }
}