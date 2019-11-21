
using ll =long long

int Solution::maxSpecialProduct(vector<int> &A) {
    
    long long n = A.size(); 
    vector<ll> vl(n+1, 0), vr(n+1, 0);
    stack<ll> s;
    for (ll i = n - 1; i >= 0; i--) {
        while (!s.empty() && A[i] > A[s.top() - 1]) {
            ll r = s.top();
            s.pop();
            vl[r - 1] = i;
        }
        s.push(i + 1);
    }
    for (ll i = 0; i < n; ++i) {
        while (!s.empty() && A[i] > A[s.top() - 1]) {
            ll r = s.top();
            s.pop();
            vr[r - 1] = i;
        }
        s.push(i + 1);
    }
    transform (vl.begin(), vl.end(), vr.begin(), vl.begin(), multiplies<ll>());
    ll ans = *max_element(vl.begin(), vl.end());
    return ans % ll(1e9+7);        

    
}
