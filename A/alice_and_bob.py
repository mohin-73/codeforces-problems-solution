import sys
input = sys.stdin.readline

def solve():
    n, a = map(int, input().split())
    arr = list(map(int, input().split()))
    l = r = 0
    for v in (x for x in arr if x != a):
        x, y = abs(v - a - 1), abs(v - a + 1)
        l, r = (l + 1, r) if x > y else (l, r + 1)
    print(a - 1 if l > r else a + 1)

for _ in range(int(input())):
    solve()
