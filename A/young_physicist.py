import sys
input = sys.stdin.readline

x = y = z = 0
for _ in range(int(input())):
    fx, fy, fz = map(int, input().split())
    x += fx; y += fy; z += fz
print("YES" if x == y == z == 0 else "NO")
