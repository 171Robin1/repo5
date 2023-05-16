#include <bits/stdc++.h>

#define ll long long

#define vll vector<long long>

#define start ios_base::sync_with_stdio(false); cin.tie(NULL);

#define range int t; cin >> t; while(t--)

using namespace std;

int n, k, q;
int a[51];

int main()
{
    start
    cin >> n >> k;
    for(int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i)
        {
            if (a[i]>=a[k-1]&&a[i]){q++;}
        }
    cout << q;
}


