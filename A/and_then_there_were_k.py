for _ in range(int(input())):
    n = int(input())
    p = 0
    while n > 1:
        p += 1
        n >>= 1
    print(2 ** p - 1)