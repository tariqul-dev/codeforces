#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    int counter = 0;

    while (t--)
    {
        int p, v, t;

        cin >> p >> v >> t;

        if ((p + v + t) >= 2){
            counter++;
        }

        
    }
    
    cout << counter << endl;

    return 0;
}