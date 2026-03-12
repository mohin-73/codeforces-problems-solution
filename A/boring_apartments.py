import sys
input = sys.stdin.readline

def solve():
    x = int(input())
    p = (x % 10 - 1) * 10
    d = len(str(x))
    p += (d * (d + 1)) // 2
    print(p)

for _ in range(int(input())):
    solve()
