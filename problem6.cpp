#include <iostream>
using namespace std;
int main() {
    int n;
    float s1, s2, sum=0, count=0;
    cin>>n;
    for (int i=1; i<=n; i++) {
        cin>>s1>>s2;
        count=count+s1;
        sum=sum+(s2*s1);
    }
    cout<<"Your total GPA is "<<(sum/count);
    return 0;
}