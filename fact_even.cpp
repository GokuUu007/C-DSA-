/* @Author  : Akshat Madhavan
*  @Country : INDIA 
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
*****************READ PROBLEM STATEMENT CARE FULLY********************

    1. Read statement 2 3.. times till u get actually 
    what the problem want's you to do.

    2. Think about the basic implementation 
    first then jump on to code the solution.

    3. Now run the problem on the given sample test 
    case and think for some corner case's for about 1 or 2 min's.

    4. Always think to generalize the problem 
    into smaller part's.

    5. Do not spend more than 30 min's on problem A.
*/
 
// FACTOR'S OF EVEN
// given q queries && a no  1<=N<=10^18.
// query 1 : no of even factors of N.
// query 2 : sum of factors of N .
// query 3 : sum reciprocals of factors of N.

const int X = 1e5+10;
int a[X];

void solve() {
    ll n,m; cin >> n >> m;
    map<int,int>f;
    ll temp = n;
    for(int i=2; i*i<=temp; i++) {
        while(temp%i == 0) {
            temp/=i;
            f[i]++;
        }
    }
    while(m--) {
        int q; cin >> q;
        if(q == 1) {
            if(n&1) cout << "NO\n";
            else  {
                ll eve = f[2];
                for(auto x:f) {
                    if(x.ff&1) {
                        eve *= (x.ss+1);
                    }
                }
                cout << eve << endl;
            }
        } else if(q == 2) {
            ll sum = 1;
            for(auto x:f) {
                ll r = pow(x.ff,x.ss+1) - 1;
                sum *= r / (x.ff - 1);
            }
            cout << sum << endl;
        } else if(q == 3) {
            float sum = 1;
            for(auto x:f) {
                ll r = pow(x.ff,x.ss+1) - 1;
                sum *= r / (x.ff - 1);
            }
            deb(sum)
            float rec_sum = sum / n;
            cout << fixed << setprecision(10) << rec_sum << endl;
        }
    }
} 

int32_t main() {
    int t;   
    t=1;
    cin>>t;
    while(t--) {
        solve();
    } 
    return 0;
}
//JAI SHREE RAM !!!!
