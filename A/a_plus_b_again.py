import sys
input = sys.stdin.readline

def solve():
    n = int(input())
    print(n % 10 + n // 10)

for _ in range(int(input())):
    solve()