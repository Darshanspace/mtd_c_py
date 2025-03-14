print('Enter numbers separated by - of your choice')
numbers = list(map(float, input().split()))

print(f'Your numbers are: {numbers}')

numbers.sort() 
print(f'Sorted numbers: {numbers}')
