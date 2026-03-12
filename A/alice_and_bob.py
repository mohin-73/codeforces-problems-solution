import sys
input = sys.stdin.readline

def solve():
    n, a = map(int, input().split())
    arr = list(map(int, input().split()))
    l = r = 0
    for v in arr:
        if v == a:
            continue
        x = abs(v - a - 1)
        y = abs(v - a + 1)
        if x > y:
            l += 1
        else:
            r += 1
    print(a - 1 if l > r else a + 1)

for _ in range(int(input())):
    solve()
