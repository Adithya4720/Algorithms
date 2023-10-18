#include <iostream>
#include <vector>
#include <chrono>
using namespace std;


int main(){
    int size1;
    int size2;
    cin >> size1;
    cin >> size2;
    int arr1[size1];
    int arr2[size2];
    int arr3[size1+size2];
    for (int i=0;i<size1;i++){
        int num;
        cin >> num;
        arr1[i] = num;
    }
    for (int i=0;i<size2;i++){
        int num;
        cin >> num;
        arr2[i] = num;
    }
    //before sorting
    for(int i=0;i<size1;i++){
        cout << arr1[i] << " ";
    }
    cout << endl;
    for(int i=0;i<size2;i++){
        cout << arr2[i] << " ";
    }
    cout << endl;
    //Merge Sort
    int i=0,j=0,k=0;
    while(i<size1 && j<size2){
        if(arr1[i]<=arr2[j]){
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++]=arr2[j++];
        }
    }
    while(i<size1){
           arr3[k++]=arr1[i++];
    }
    while(j<size2){
        arr3[k++] = arr2[j++];
    }
    for (int i = 0; i < size1+size2; i++)
    {
        cout <<i<<"th element is"<< arr3[i] << " ";
    }
    
    cout << endl;
}