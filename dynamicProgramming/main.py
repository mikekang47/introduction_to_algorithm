"""춘향이는 편의점 카운터에서 일한다.

손님이 2원짜리와 5원짜리로만 거스름돈을 달라고 한다. 2원짜리 동전과 5원짜리 동전은 무한정 많이 가지고 있다.
동전의 개수가 최소가 되도록 거슬러 주어야 한다.
거스름돈이 n인 경우, 최소 동전의 개수가 몇 개인지 알려주는 프로그램을 작성하시오.

예를 들어, 거스름돈이 15원이면 5원짜리 3개를, 거스름돈이 14원이면 5원짜리 2개와 2원짜리 2개로 총 4개를,
거스름돈이 13원이면 5원짜리 1개와 2원짜리 4개로 총 5개를 주어야 동전의 개수가 최소가 된다."""
import math

n = int(input())
dp = [math.inf for _ in range(10000000)]
dp[2] = 1
dp[5] = 1
dp[4] = 2
for i in range(6, n+1):
    dp[i] = min(dp[i-2] + 1, dp[i-5] + 1)

if dp[n] == math.inf:
    print(-1)
else:
    print(dp[n])