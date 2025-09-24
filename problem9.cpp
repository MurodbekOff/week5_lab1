#include <iostream>
using namespace std;
int main() {
    int n, sum=0;
    cin>>n;
    for (int i = 1; i <= n; i++) {
        cout<<i<<"*"<<i<<"="<<i*i<<endl;
        sum=sum+i*i;
    }
    cout<<sum;
    return 0;
}