#include <iostream>
using namespace std;
int main() {
    for (char i = 'A'; i<= 'Z'; i++) {
        cout<<i<<" ";
        if ((i+1)%5==0) cout<<endl;
    }
            return 0;
    }