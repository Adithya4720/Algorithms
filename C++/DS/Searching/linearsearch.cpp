#include <iostream>
using namespace std;

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
    int i;
    for (i=0;i<size;i++){
        if(array[i]==key){
            cout << "Found at index " << i << endl;
            break;
        }
    }
    if(i==size){
        cout << "Not Found" << endl;
    }
}