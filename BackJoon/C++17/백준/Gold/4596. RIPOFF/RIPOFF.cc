#include <iostream>
#include <algorithm>
using namespace std;
int main() {

    int N, S, T;
    int dp[202][211]; // T<=N+1
    /**
     * dp[i][j] : i 번째 턴에 j번째 칸에 있을 때 최대 점수
     * 마지막칸 N-1 에서 S 가 최대 20까지이므로 N+19 까지 접근가능함.
     *
     *
     */
    int arr[201];

    while (1) {
        cin >> N;
        if (N == 0) break;
        cin >> S >> T;

        fill(&dp[0][0], &dp[201][220], -10000);
        fill(&arr[0], &arr[201], 0);

        for (int i = 1; i <= N; i++) {
            cin >> arr[i];
        }

        for (int i = 1; i <= S; i++) { // 초기값 설정
            dp[1][i] = arr[i];
        }

        for (int i = 2; i <= T; i++) { // 총 T 턴동안 진행했을때
            for (int j = 1; j <= N + S; j++) { // j 번째의 위치를 선택할때
                for (int k = 1; k < j; k++) { // j 이전의 위치에서 이동한다.
                    if (j - k <= S && dp[i - 1][k] != -10000) {
                        dp[i][j] = max(dp[i][j], dp[i - 1][k] + arr[j]);
                    }
                }
            }
        }

        int ans = -10000;
        for (int i = N + 1; i <= N + S; i++) {
            ans = max(ans, dp[T][i]);
        }

        // for (int i = 1 ; i <= T ; i++) {
        //     for (int j  = 1 ; j <= N+S ; j++) {
        //         cout << dp[i][j] << ' ';
        //     }
        //     cout << '\n';
        // }
        cout << ans << '\n';
    }

}