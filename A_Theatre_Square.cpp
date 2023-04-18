#include <bits/stdc++.h>

using namespace std;

int main(){
    unsigned long long int n,m,a;
    cin >> n >> m >> a;

    cout << ((n + a -1) / a) * ((m + a - 1) / a);
    
    return 0;
}