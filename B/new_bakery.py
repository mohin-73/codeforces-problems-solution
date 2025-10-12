def main():
    t = int(input())

    for _ in range(t):
        n, a, b = map(int, input().split())
        if a >= b:
            print(n * a)
            continue
        k = min(n, max(b - a, 0))
        x = b - k + 1
        s = k * (x + b) // 2
        print(s + (n - k) * a)


if __name__ == "__main__":
    main()
