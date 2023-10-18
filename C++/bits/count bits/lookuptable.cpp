#include <iostream>
using namespace std;

int bitstable[256];

void initialize(){
    bitstable[0]=0;
    for(int i=0;i<256;i++){
        bitstable[i]=(i&1)+bitstable[i/2];
    }
}
int countbitsets(int n){
    return (
        bitstable[n & 0xff]+
        bitstable[(n>>8) & 0xff]+
        bitstable[(n>>16) & 0xff]+
        bitstable[(n>>24) & 0xff]
    );
}
int main(){
    initialize();
    int i;
    cin >> i;
    cout << countbitsets(i) << "\n";
    return 0;
}