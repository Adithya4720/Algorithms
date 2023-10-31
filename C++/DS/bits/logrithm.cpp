#include <iostream>
using namespace std;

int log2(int x){
    int res =0;
//checks wether x is >0
    while(x>>=1){
        res ++ ; 
    }
    return res;
}
int main(){
    int a;
    cin >> a;
    int b= log2(a);
    cout << "the solution is " << b << "\n";
    return 0;
}