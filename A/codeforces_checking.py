import sys
input = sys.stdin.readline

def solve():
    cf = "codeforces"
    ch = input().strip()
    print("YES" if ch in cf else "NO")

for _ in range(int(input())):
    solve()
