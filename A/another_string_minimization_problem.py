def main():
    t = int(input())

    for _ in range(t):
        n, m = map(int, input().split())
        arr = list(map(int, input().split()))
        check = ["B"] * m

        for j in arr:
            j, k = min(j - 1, m - j), max(j - 1, m - j)
            if check[j] == "B":
                check[j] = "A"
            else:
                check[k] = "A"
                
        print(*check, sep="")

if __name__ == "__main__":
    main()