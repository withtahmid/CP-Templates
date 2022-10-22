/**
 * 
 * Author: withtahmid
 * Created: dd-mm-yy hh:mm
 * 
 * */
#include<bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include "debug.h" 
#define debug(x) cerr << #x <<": "; print(x); cerr << endl;
#else
#define debug(x) 
#endif
using namespace std;
#define endl "\n"
#define nl cout<<"\n";
#define ll  long long
#define nn int n; cin>>n
#define lln long long n; cin >> n
#define vi(n) vector<int>v(n)
#define vl(n) vector<long long>v(n)
#define srt(v) sort(v.begin(), v.end())
#define rvs(v) reverse(v.begin(), v.end())
#define ub(v,n) upper_bound(v.begin(), v.end(), n)
#define lb(v,n) lower_bound(v.begin(), v.end(), n)
#define fil(v,n) fill(v.begin(), v.end(),n)
#define mem(v,value) memset(&v[0], value, sizeof(v[0]) * v.size())
#define acu(v) accumulate(v.begin(), v.end(),0LL)
#define pb push_back
#define sp(n) fixed << setprecision(n)
#define loop(l,r)  for(int i = l; i<r; i++)
#define test_case int t, tc = 0; cin>>t;/*cin.ignore()*/ while(t--)
#define fast_io  ios_base::sync_with_stdio(false), cin.tie(NULL),cout.tie(NULL)
template <typename Type> void operator>>(istream& istream, vector<Type>& v){for(auto& i : v) cin>>i; }
template <typename Type> void operator<<(ostream& ostream, vector<Type>& v){for(auto i : v) cout<<i<<" ";}

void local()
{
    #ifndef ONLINE_JUDGE
    freopen("/home/withtahmid/input.txt", "r", stdin);
    freopen("/home/withtahmid/output.txt", "w", stdout);
    freopen("/home/withtahmid/error.txt", "w", stderr);
    #endif
}
int main()
{
    fast_io;
    local();
}