#include <bits/stdc++.h>
using namespace std;

struct Location {
  int x, y, distance;
};

bool isAccessible(int x, int y, int M, int N, vector<vector<int>>& fortress, vector<vector<bool>>& visited) {
  return (x >= 0 && x < M && y >= 0 && y < N && fortress[x][y] == 0 && !visited[x][y]);
}

int findShortestRoute(vector<vector<int>>& fortress) {
  int M = fortress.size();
  int N = fortress[0].size();

  vector<vector<bool>> visited(M, vector<bool>(N, false));

  int dx[] = { -1, 0, 0, 1 };
  int dy[] = { 0, -1, 1, 0 };

  queue<Location> q;
  q.push({ 0, 0, 0 });
  visited[0][0] = true;

  while (!q.empty()) {
    Location curr = q.front();
    q.pop();

    if (curr.x == M - 1 && curr.y == N - 1) {
      return curr.distance;
    }

    for (int i = 0; i < 4; i++) {
      int newX = curr.x + dx[i];
      int newY = curr.y + dy[i];

      if (isAccessible(newX, newY, M, N, fortress, visited)) {
        visited[newX][newY] = true;
        q.push({ newX, newY, curr.distance + 1 });
      }
    }
  }

  return INT_MAX; // No route found
}

int maxTimeThiefCanTake(vector<vector<int>>& fortress) {
  int shortestRoute = findShortestRoute(fortress);

  int maxTime = 0;
  int M = fortress.size();
  int N = fortress[0].size();

  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      if (fortress[i][j] == 0) {
        fortress[i][j] = 1;

        int newRouteLength = findShortestRoute(fortress);

        if (newRouteLength != INT_MAX) {
          maxTime = max(maxTime, newRouteLength);
        }

        fortress[i][j] = 0;
      }
    }
  }

  return maxTime;
}

void getInput(int& rows, int& columns, vector<vector<int>>& fortress) {
  cin >> rows >> columns;

  fortress.resize(rows, vector<int>(columns));

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < columns; j++) {
      cin >> fortress[i][j];
    }
  }
}

int main() {
  int rows, columns;
  vector<vector<int>> fortress;

  getInput(rows, columns, fortress);

  int result = maxTimeThiefCanTake(fortress);
  cout << result+1 << endl;

  return 0;
}