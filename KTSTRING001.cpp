// Xâu kí tự
#include<bits/stdc++.h>
using namespace std;

int n , check ;

string sc , s , a , b;

int main(){
    int t;
    cin >> t;
    while(t--){
            cin >> a >> b >> sc >> a >> b >> s;
            sc.pop_back();
            sc.pop_back(); sc.erase(sc.begin());
            s.pop_back();s.erase(s.begin());
        int lnc = sc.size() , ln = s.size() ,ans = 0;
        if(lnc==0){cout << 0 << '\n' ; continue ;}
        if(ln==0){cout << -1 << '\n' ; continue ;}
        for(int i=0; i<=ln - lnc ; i++){
            if(s[i]==sc[0]){
                check = 0 ;
                for(int j = 1 ; j<lnc ; ++j){
                    if(sc[j]!=s[i+j]){check = 1  ; break;}
                }
                if(check==0){cout << i << '\n' ; ans = 1 ; break ;}
            }
        }
        if(ans==0)cout << -1 << '\n';
    }
    return 0;
}