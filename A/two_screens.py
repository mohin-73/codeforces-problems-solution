def main():
    t = int(input())

    for _ in range(t):
        s = list(input())
        t = list(input())
        ans = len(s) + len(t)
        i, k = 0, min(len(s), len(t))
        while i < k and s[i] == t[i]:
            i += 1
        i = max(0, i - 1)
        print(ans - i)

        
if __name__ == "__main__":
    main()