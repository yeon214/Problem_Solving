#include <iostream>
#include <vector>
#include <algorithm>

const long long INF = -1e18; // 도달 불가능한 상태를 나타내는 충분히 작은 값

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int N, S, T;
    while (std::cin >> N && N != 0) {
        std::cin >> S >> T;
        std::vector<int> board(N + 1); // 1-based index
        for (int i = 1; i <= N; ++i) {
            std::cin >> board[i];
        }

        // dp[i][j]: i번의 턴으로 j번째 칸에 도착했을 때의 최대 리베이트
        std::vector<std::vector<long long>> dp(T + 1, std::vector<long long>(N + S + 1, INF));
        dp[0][0] = 0;

        for (int t = 1; t <= T; ++t) {
            for (int pos = 1; pos <= N + S; ++pos) {
                for (int move = 1; move <= S; ++move) {
                    int prev_pos = pos - move;
                    if (prev_pos >= 0 && dp[t - 1][prev_pos] != INF) {
                        long long rebate_on_this_square = 0;
                        if (pos <= N) {
                            rebate_on_this_square = board[pos];
                        }
                        dp[t][pos] = std::max(dp[t][pos], dp[t - 1][prev_pos] + rebate_on_this_square);
                    }
                }
            }
        }

        long long max_rebate = INF;
        for (int t = 1; t <= T; ++t) {
            for (int pos = N + 1; pos <= N + S; ++pos) {
                max_rebate = std::max(max_rebate, dp[t][pos]);
            }
        }
        std::cout << max_rebate << "\n";
    }

    return 0;
}