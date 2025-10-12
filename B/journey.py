def main():
    t = int(input())

    for _ in range(t):
        arr = list(map(int, input().split()))
        s = arr[1] + arr[2] + arr[3] 
        ans = (int(arr[0] / s)) * 3
        n = arr[0] % s
        for i in range(1, 4):
            if n > 0:
                ans += 1
                n -= arr[i]
            else:
                break

        print(ans)

if __name__ == "__main__":
    main()