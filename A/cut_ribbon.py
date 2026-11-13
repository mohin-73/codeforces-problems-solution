import sys

input = sys.stdin.readline

sys.setrecursionlimit(5000)


def solve(n, a, b, c, dp):
    if n == 0:
        return 0

    if n < 0:
        return -4001

    if dp[n] != -1:
        return dp[n]

    aa = 1 + solve(n - a, a, b, c, dp)
    bb = 1 + solve(n - b, a, b, c, dp)
    cc = 1 + solve(n - c, a, b, c, dp)

    dp[n] = max(aa, bb, cc)

    return dp[n]


def main():
    n, a, b, c = map(int, input().split())

    dp = [-1] * 4001

    print(solve(n, a, b, c, dp))


if __name__ == "__main__":
    main()
