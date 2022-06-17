#include <bits/stdc++.h>
using namespace std;

const int MOD = 1000000009;

map<long long, int> dp3, dp4;

void modadd(int& result, int val) {
    result += val;
    if (result >= MOD)
        result -= MOD;
}

int comp4(long long N) {
    if (N < 0) return 0;
    if (N < 2) return 1;

    if (dp4.count(N))
        return dp4[N];

    int result = 0;
    modadd(result, comp4(N / 2));
    modadd(result, comp4(N / 2 - 1));
    if ((N & 1) == 0)
        modadd(result, comp4(N / 2 - 2));

    dp4[N] = result;
    return result;
}

int comp3(long long N) {
    if (N < 2) return 1;

    if (dp3.count(N))
        return dp3[N];

    int result = 0;
    modadd(result, comp3(N / 2));
    modadd(result, comp3(N / 2 - 1));

    dp3[N] = result;
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.precision(10);
    cout << fixed;

    int T;
    cin >> T;
    while (T --> 0) {
        long long k, N;
        cin >> k >> N;

        if (k == 3)
            cout << comp3(N) << endl;
        if (k == 4)
            cout << comp4(N) << endl;
    }

    return 0;
}
