ans = 0
for _ in range(int(input())):
    a, b, c = map(int, input().split())
    ans += 1 if a + b + c > 1 else 0
print(ans)
