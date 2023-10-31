#include <iostream>
#include <vector>
#include <chrono>
using namespace std;

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}


int main(){
    auto start = chrono::steady_clock::now();
    int size;
    cin >>size;
    int min;
    vector <int> array;
    for (int i=0;i<size;i++){
        int num ;
        cin >> num;
        array.push_back(num);
    }
    for(int i=0;i<size;i++){
        min= i;
        for(int j=i+1;j<size;j++){
            //swap a[i] and a[j] if a[i]>a[j]
            if (array[j]<array[min]){
                min=j;
            }
        }
        swap(&array[i],&array[min]);
    }
    //after selection sort
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    auto end = chrono::steady_clock::now();
    cout << endl;   
    cout << "Elapsed time in nanoseconds : "
        << chrono::duration_cast<chrono::seconds>(end - start).count()
        << " s" << endl;
    cout << "Elapsed time in microseconds : "
        << chrono::duration_cast<chrono::microseconds>(end - start).count()
        << " µs" << endl;
        
    return 0;
}