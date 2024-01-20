#include<iostream>
#define ll long long
 using namespace std;
 int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n;
    cin>>n;
    ll x;
    ll tsum = n*(n+1)/2;
    ll sum =0;
    for(ll i=0; i<n-1; i++){
        cin>>x;
        sum+=x;
    }
    cout<< tsum-sum<<endl;
    return 0;
 }