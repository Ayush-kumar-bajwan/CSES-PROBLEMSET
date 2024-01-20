#include <iostream>
#include <cstring>

using namespace std;

const int maxN = 1e6 + 5;

char S[maxN];
int N, cur, best;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    cin >> S;
    N = strlen(S);
    cur = best = 1;

    for (int i = 1; i < N; i++) {
        if (S[i] == S[i - 1])
            cur++;
        else
            cur = 1;
        best = max(best, cur);
    }

    cout << best << '\n';

    return 0;
}
