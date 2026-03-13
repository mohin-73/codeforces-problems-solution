n, m = map(int, input().split())
grid = ""
for _ in range(n):
    grid += input()
if any (c in "CMY" for c in grid):
    print("#Color")
else:
    print("#Black&White")
