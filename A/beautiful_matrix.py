m = 0
for i in range(0, 5):
    row = list(map(int, input().split()))
    for j in range(0, 5):
        if row[j] == 1:
            m = abs(i - 2) + abs(j - 2)
print(m)

