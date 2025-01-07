#include <iostream>
#include <vector>

int black(const std::vector<std::string>& board, int x, int y) {
  int blackStartCnt = 0;
  int whiteStartCnt = 0;
  char color[2] = {'W', 'B'};

  for (int i = y; i < y + 8; ++i) {
    for (int j = x; j < x + 8; ++j) {
      if (board[i][j] != color[(i + j) % 2])
        ++whiteStartCnt;
      else
        ++blackStartCnt;
    }
  }
  return (blackStartCnt < whiteStartCnt ? blackStartCnt : whiteStartCnt);
}

int main() {
  int M, N;
  int cnt = std::numeric_limits<int>::max();
  int colorCnt;
  std::cin >> N >> M;

  std::vector<std::string> board(N);
  for (int i = 0; i < N; ++i) std::cin >> board[i];

  for (int i = 0; i <= N - 8; ++i) {
    for (int j = 0; j <= M - 8; ++j) {
      colorCnt = black(board, j, i);
      if (cnt > colorCnt) cnt = colorCnt;
    }
  }

  std::cout << cnt << std::endl;
  return 0;
}