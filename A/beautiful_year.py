def main() -> None:
    n = int(input())

    while True:
        n += 1
        t = n
        arr = [False] * 10
        flag = True

        while t:
            if arr[t % 10]:
                flag = False
                break
            arr[t % 10] = True
            t //= 10

        if flag:
            break

    print(n)


if __name__ == "__main__":
    main()
