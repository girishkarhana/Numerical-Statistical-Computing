def jacobi(a, b, n):
    x = [0] * n  

    for it in range(10):
        x_new = x.copy()
        
        for i in range(n):
            sum_ax = 0
            for j in range(n):
                if i != j:
                    sum_ax += a[i][j] * x[j]
            x_new[i] = (b[i] - sum_ax) / a[i][i]
        
        x = x_new 

        print(f"Iteration {it + 1}: {x}")
    
    return x

a = [[4, -1, 0, 0],
     [-1, 4, -1, 0],
     [0, -1, 4, -1],
     [0, 0, -1, 3]]
b = [15, 10, 10, 10]

n = len(b) 
result = jacobi(a, b, n)

print("Final Solution:", result)
