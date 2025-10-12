def main():
    t = int(input())

    for _ in range(t):
        n = int(input())
        p = -1
        while n:
            p += 1
            n >>= 1
        print((2 ** p) - 1)


if __name__ == "__main__":
    main()