#include <iostream>
#include <cmath>
using namespace std;

bool ispoweroftwo(int n){
    if(n==0){
        return false;
    }
    return (ceil(log2(n))==floor(log2(n)));
}

int main(){
    int a;
    cin >> a;
    if(ispoweroftwo(a)){
        cout << "the number is a power of two" << "\n";
    }
    else{
        cout << "the number is not a power of two" << "\n";
    }
    return 0;
}