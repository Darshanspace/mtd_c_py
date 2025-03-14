import sys

print(sys.argv)
print(len(sys.argv))   
print(type(sys.argv))
print(sys.argv[0]) 
print(type(sys.argv[0]))  

numbers = list()
for i in range(1, len(sys.argv)):
    numbers.append(float(sys.argv[i]))
print(f'Your numbers are: {numbers}')   

number =[int(x) for x in sys.argv[1:]]
print(f'Your numbers are: {number}')    


