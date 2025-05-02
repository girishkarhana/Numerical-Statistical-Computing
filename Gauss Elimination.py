def gauss_elimination(a, b):
    n = len(b)

    for i in range(n):
        for j in range(i + 1, n):
            factor = a[j][i] / a[i][i]
            for k in range(i, n):
                a[j][k] -= factor * a[i][k]
            b[j] -= factor * b[i]


    x = [0 for _ in range(n)]
    for i in range(n - 1, -1, -1):
        sum_ax = 0
        for j in range(i + 1, n):
            sum_ax += a[i][j] * x[j]
        x[i] = (b[i] - sum_ax) / a[i][i]

    return x

a = [[3, 2, 1],
     [2, 3, 2],
     [1, 2, 3]]
b = [1, 2, 3]


result = gauss_elimination(a, b)

print("Solution:", result)
