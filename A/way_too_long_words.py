for _ in range(int(input())):
    s = input()
    print(s if len(s) <= 10 else f"{s[0]}{len(s) - 2}{s[-1]}")
