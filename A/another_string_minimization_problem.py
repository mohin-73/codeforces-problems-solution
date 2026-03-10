for _ in range(int(input())):
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    s = ['B'] * m
    for x in a:
        y = m - x
        x = x - 1
        l, r = min(x, y), max(x, y)
        s[l if s[l] == 'B' else r] = 'A'
    print(''.join(s))