struct dsu {
  vector<int> par, sz;
  int size;

  dsu(int n) {
    size = n;
    par = sz = vector<int>(n);
    for (int i = 0; i < n; i++) {
      par[i] = i;
      sz[i] = 1;
    }
  }

  int find(int u) { return par[u] == u ? u : (par[u] = find(par[u])); }

  void unite(int u, int v) {
    if ((u = find(u)) == (v = find(v))) return;
    if (sz[u] > sz[v]) swap(u, v);
    par[u] = v;
    sz[v] += sz[u];
    size--;
  }

  int count(int u) { return sz[find(u)]; }
};