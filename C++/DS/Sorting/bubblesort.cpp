#include <iostream>
#include <vector>
#include <chrono>
using namespace std;

#include <iostream>
#include <vector>
using namespace std;

int main(){

    int size;
    cin >> size;
    int b;
    vector <int> a;
    auto start = chrono::steady_clock::now();
    for (int i=0; i<size; i++){
        cin >> b;
        a.push_back(b);
        b=0;
    }
    //before sorting
    for (int i=0;i<size;i++){
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i=0;i<size;i++){
        for ( int j=0;j<size-i-1;j++){
            if (a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    cout<< "After Sorting"<<endl;
    for (int i=0;i<size;i++){
        cout << a[i] << " ";
    }
    auto end = chrono::steady_clock::now();
    cout << endl;
    cout << "Elapsed time in nanoseconds : "
        << chrono::duration_cast<chrono::seconds>(end - start).count()
        << " s" << endl;
    cout << "Elapsed time in microseconds : "
        << chrono::duration_cast<chrono::microseconds>(end - start).count()
        << " µs" << endl;
}
