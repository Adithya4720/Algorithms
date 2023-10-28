#include <iostream>
using namespace std;

int firstoccurence(int *arr, int start, int end, int x)
{
    if (start <= end)
    {
        int mid = start + (end - start) / 2;
        if ((mid == 0 || arr[mid - 1] != arr[mid]) && (arr[mid] == x))
        {
            return mid;
        }
        else if (x > arr[mid])
        {
            return firstoccurence(arr, mid + 1, end, x);
        }
        else
        {
            return firstoccurence(arr, start, mid - 1, x);
        }
    }
    return -1;
};

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
    int first = firstoccurence(array,0,size-1,key);
    if(first == -1){
        cout << "Count: " << 0 << endl;
    }
    else{
        cout << "Count: " << size-first<< endl;
    }

}