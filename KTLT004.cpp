#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        float x;
        cin >> n >> x;

        float S=0.0;
        long T=1;
        float Xk=1.0;

        for(int i=1;i<=n;i++) {
            T = T*i;
            Xk = Xk * x;
            S = S + Xk/T;
        }
        cout << fixed << setprecision(3) << S << " " << endl;
    }
}