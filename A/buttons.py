import sys
input = sys.stdin.readline

def solve():
    a, b, c = map(int, input().split())
    first, second = a + (c + 1) // 2, b + c // 2
    print("First" if first > second else "Second")

for _ in range(int(input())):
    solve()
