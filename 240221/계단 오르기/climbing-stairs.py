MOD = 10007

n = int(input())

dp = [0 for _ in range(n + 1)]
dp[0] = dp[2] = 1

for i in range(3, n + 1):
    dp[i] = (dp[i - 3] + dp[i - 2]) % MOD

print(dp[n])