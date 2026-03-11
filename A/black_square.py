a = list(map(int, input().split()))
s = input().strip()
w = 0
for ch in s:
    w += a[ord(ch) - ord('1')]
print(w)
