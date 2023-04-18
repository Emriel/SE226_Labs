n = int(input('Enter a value to calculate e^n: '))
x = int(input('Enter a value to limit iteration amount: '))

factorial = lambda n: (lambda f: f(f, n))(lambda f, n: 1 if n == 0 else n * f(f, n-1))

sequence = lambda n, x: [(n**i)/factorial(i) for i in range(x+1)]

result = 1 + sum(sequence(n, x))

print('Result of e ^', n, ': ', result)


def recursive_sum(n):
    """
    A recursive function to calculate the sum of the equation ((-1)^(k+1))/k for all k values from 1 to n.
    Parameters:
    n (int): The upper limit of the sum.
    Returns:
    None
    """
    global total
    if n == 1:
        total = 1
    else:
        recursive_sum(n - 1)
        total += ((-1)**(n + 1))/n

    print('Resulting summation of ((-1)^(k+1))/k for all k values from 1 to n : ', total)

# Example usage
total = 0
recursive_sum(5)
