for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    s = sum(a)
    print("YES" if s % 2 == 0 else "NO")

