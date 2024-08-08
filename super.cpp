#include <bits/stdc++.h>
using namespace std;

bool checkValidity(int x, int y, int M, int N, vector<vector<int>>& fortress, vector<vector<bool>>& visited) {
    return (x >= 0 && x < M && y >= 0 && y < N && fortress[x][y] == 0 && !visited[x][y]);
}

void getInput(int& n, int& m, vector<pair<int, int>>& ct, vector<pair<int, int>>& bg) {
    cin >> n >> m;

    ct.resize(n);
    bg.resize(m);

    for (int i = 0; i < n; ++i) {
        cin >> ct[i].second >> ct[i].first;
    }

    for (int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        bg[i].second = a;
        bg[i].first = b;
    }

    sort(bg.begin(), bg.end());
    sort(ct.begin(), ct.end());
}

void printOutput(int ans) {
    cout << ans << endl;
}

int main() {
    int numCt, numBg;
    vector<pair<int, int>> ctPositions;
    vector<pair<int, int>> bgPositions;

    getInput(numCt, numBg, ctPositions, bgPositions);

    int answer = 0;
    vector<bool> taken(numBg, false);

    for (int i = 0; i < numCt; ++i) {
        vector<pair<int, int>> validBg;
        for (int j = 0; j < numBg; ++j) {
            if (!taken[j] && bgPositions[j].first <= ctPositions[i].first) {
                validBg.push_back({ bgPositions[j].second, j });
            }
        }
        int index = -1;
        for (int k = 0; k < static_cast<int>(validBg.size()); ++k) {
            int a = validBg[k].second;
            int quantity = validBg[k].first;
            if (!taken[a] && quantity >= ctPositions[i].second) {
                if (index == -1 || bgPositions[index].second > bgPositions[a].second) {
                    index = a;
                }
            }
        }
        if (index != -1) {
            taken[index] = true;
            answer++;
        }
    }

    printOutput(answer);

    return 0;
}
