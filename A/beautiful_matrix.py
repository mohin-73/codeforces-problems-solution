def main() -> None:
    row = col = 0

    for i in range(5):
        x = list(map(int, input().split()))
        
        for j in range(5):
            if x[j]:
                row = i + 1
                col = j + 1

    print(abs(row - 3) + abs(col - 3))


if __name__ == "__main__":
    main()
