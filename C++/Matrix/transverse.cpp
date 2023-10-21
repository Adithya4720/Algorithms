#include <iostream>
using namespace std;

void transverse(int *arr,int size,int *arr1){
    
    for (int i=0;i<size;i++)
    {
        for (int j=0;j<size;j++){
            arr1[j*size+i] = arr[i*size+j];
        }
    }
    
}

int main(){
    int size;
    cin >> size;
    int array[size][size];
    for (int i=0;i<size;i++){
        for (int j=0;j<size;j++){
            int num;
            cin >> num;
            array[i][j] = num;
        }
    }

    int transversed[size][size];
    transverse((int *)array,size,(int *)transversed);
    for (int i=0;i<size;i++){
        for (int j=0;j<size;j++){
            cout << transversed[i][j] << " ";
        }
        cout << endl;
    }
}