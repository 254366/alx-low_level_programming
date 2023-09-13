# Function to generate the Fibonacci sequence up to n terms
def generate_fibonacci(n):
fibonacci_sequence = [1, 2]  # Starting with 1 and 2
while len(fibonacci_sequence) < n:
next_number = fibonacci_sequence[-1] + fibonacci_sequence[-2]
fibonacci_sequence.append(next_number)
return fibonacci_sequence
# Print the first 50 Fibonacci numbers separated by comma and space
n = 50
fibonacci_numbers = generate_fibonacci(n)
print(', '.join(map(str, fibonacci_numbers)))
