#include <iostream>
using namespace std;

int sqroot(int n){
    int low = 1;
    int high = n;
    int ans = -1;
    while(low <=high){
    int mid = high +(low-high)/2;
    int Msq = mid * mid;
        if(Msq==n){
            return mid;
            }
        else if(Msq>n) {
             high = mid -1;
        }
        else{
            low = mid +1;
            ans = mid;
        }
    }
    return ans;
}

int main(){
    int key;
    cin >> key;
    cout << sqroot(key) << endl;

}