import sys
input = sys.stdin.readline

def solve():
    n, a, b = map(int, input().split())
    min_cost = 0
    if b < 2 * a:
        min_cost += b * (n // 2)
        n = n % 2
    min_cost += n * a
    print(min_cost)

for _ in range(int(input())):
    solve()
