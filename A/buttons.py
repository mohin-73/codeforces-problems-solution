for _ in range(int(input())):
    a, b, c = map(int, input().split())
    first, second = a + (c + 1) // 2, b + c // 2
    print("First" if first > second else "Second")
