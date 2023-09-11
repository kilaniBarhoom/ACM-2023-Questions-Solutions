#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
#define LST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define pb push_back
#define all(v) v.begin(),v.end()
#define sz(X) (ll)((X).size())

    const long double pi = M_PI;

int main() {
    LST
    int t = 1;
    cin >> t;

    while (t--) {
        int N;
    cin >> N;
    vll v(N), pref(N), suf(N);
    pref[0] = suf[N - 1] = 0;

    for(int i = 0; i < N; i++){
        cin >> v[i];
    }

    for(int i = 0; i < N - 1; i++){
        pref[i + 1] = ((v[i] - 2) <= 0? 0: v[i] - 2) + pref[i];
    }


    for(int i = N - 1; i > 0; i--){
        suf[i - 1] = ((v[i] - 3) <= 0? 0: v[i] - 3) + suf[i];
    }

    ll maxPower = INT_MIN;
    for(int i = 0; i < N; i++){
        maxPower = max(maxPower, v[i] + pref[i] + suf[i]);
    }

    cout << maxPower << endl;



    }
    return 0;
}
