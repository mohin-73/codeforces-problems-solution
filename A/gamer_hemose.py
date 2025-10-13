def main():
    t = int(input())

    for _ in range(t):
        n, h = map(int, input().split())
        arr = list(map(int, input().split()))
        arr.sort()
        bt = arr[-1] + arr[-2]
        k = ans = max(((h + bt - 1) // bt) - 1, 0)
        h = h - k * bt
        ans, h = ans * 2 + 1, h - arr[-1]
        if h > 0:
            ans += 1
        print(ans)

        
if __name__ == "__main__":
    main()