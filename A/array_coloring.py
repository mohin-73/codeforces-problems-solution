import sys
input = sys.stdin.readline

def solve():
    n = int(input())
    a = list(map(int, input().split()))
    s = sum(a)
    print("YES" if s % 2 == 0 else "NO")

for _ in range(int(input())):
    solve()
