import sys
input = sys.stdin.readline

def solve():
    n = int(input())
    a = list(map(int, input().split()))
    odd = sum(x % 2 for x in a)
    if odd == 0 or (odd == n and n % 2 == 0):
        print("NO")
    else:
        print("YES")

for _ in range(int(input())):
    solve()
