def main():
    n, t = map(int, input().split())
    str = list(input())

    for _ in range(t):
        i = 0
        while i < n - 1: 
            if str[i] == "B" and str[i + 1] == "G":
                str[i], str[i + 1] = "G", "B"
                i += 1
            i += 1
    
    print(*str, sep="")


if __name__ == "__main__":
    main()
