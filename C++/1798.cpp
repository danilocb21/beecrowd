#include <bits/stdc++.h>

using namespace std;

typedef vector<int> v32;

int dp[1001][2001];

int mb(v32 &valores, v32 &pesos, int k, int n)
{
  if (!n)
    return 0;

  if (dp[n][k] != -1)
    return dp[n][k];
  
  if (pesos[n] > k) {
    dp[n][k] = mb(valores, pesos, k, n-1);
    return dp[n][k];
  }
  else {
    dp[n][k] = max(valores[n] + mb(valores, pesos, k-pesos[n], n),
      mb(valores, pesos, k, n-1));
    return dp[n][k];
  }
}

void solve()
{
  int n, k;
  cin >> n >> k;
  v32 valores(n+1), pesos(n+1);
  
  for (int i = 1; i <= n; i++) {
    cin >> pesos[i] >> valores[i];
  }

  // Transforma todos os elementos
  // da matriz em -1 nesse caso.
  // Função da lib <cstring>
  memset(dp, -1, sizeof dp);

  cout << mb(valores, pesos, k, n) << "\n";
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);
  solve();
}