#include <iostream>
#include <vector>
#include <chrono>
using namespace std;

int main(){
    auto start = chrono::steady_clock::now();
    int size;
    cin >> size;
    vector <int> array(size);
    for (int i=0;i<size;i++){
        int num;
        cin >> num;
        array[i] = num;
    }
    for(int i=1;i<size;i++){
        int key= array[i];
        int j=i-1;
        while(j>=0 && array[j]>key){
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=key;
    }
    cout <<"After sorting: ";
    for(int i=0;i<size;i++){
        cout << array[i] << " ";
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