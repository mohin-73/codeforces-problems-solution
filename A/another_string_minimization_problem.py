def main():
    t = int(input())

    for _ in range(t):
        n, m = map(int, input().split())
        arr = list(map(int, input().split()))
        array = ["B"] * m
        for j in arr:
            j, k = min(j - 1, m - j), max(j - 1, m - j)
            if array[j] == "B":
                array[j] = "A"
            else:
                array[k] = "A"
        print(*array, sep="")


if __name__ == "__main__":
    main()