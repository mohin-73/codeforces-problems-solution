import sys
input = sys.stdin.readline

def solve():
    n = int(input())
    a = list(map(int, input().split()))
    s = sum(a)
    m = 0 if n == s else 1 if (s < 0 or n > s) else s - n
    print(m)

for _ in range(int(input())):
    solve()
