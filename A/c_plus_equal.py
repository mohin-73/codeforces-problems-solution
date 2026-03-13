import sys
input = sys.stdin.readline

def solve():
    a, b, n = map(int, input().split())
    ops = 0
    while a <= n and b <= n:
        a, b = (a, b + a) if a >= b else (a + b, b)
        ops += 1
    print(ops)

for _ in range(int(input())):
    solve()
