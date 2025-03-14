def my_number(number):
    number[0] = 1000
    number[-1] = 10000

print('Enter space separated numbers of your choice ')
number = [int(element) for element in input().split()]
print(f'Your numbers are: {number}')

my_number(number)

print(f'Your modified numbers are: {number}')
