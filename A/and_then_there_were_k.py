def main():
    t = int(input())
    for _ in range(t):
        t = int(input())
        p = 0
        while t:
            p += 1
            t >>= 1
        print(int(pow(2, p - 1) - 1))

if __name__ == "__main__":
    main()