def main():
    s = input()
    ans = ""
    i = 0

    while i < len(s):
        if s[i] == ".":
            ans += "0"
            i += 1
        elif s[i + 1] == "-":
            ans += "2"
            i += 2
        else:
            ans += "1"
            i += 2

    print(ans)


if __name__ == "__main__":
    main()
    