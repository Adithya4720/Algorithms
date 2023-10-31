#include <iostream>
using namespace std;

/* if kth bit is set or not i.e set is 1 and not set is 0 
    example: 
    n=5,k=1
    n = 5 => 101
    k=1 => 001
    1<< k-1 => 2power0 => 001
    n & k-1 = 001 => 1
    so kth  bit is a set

    */ 

int bitset(int x,int k){
    if(x&(1<<(k-1))!=0){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int a,k;
    cin >> a >> k;
    int b= bitset(a,k);
    cout << "the solution is " << b << "\n";
    return 0;
}