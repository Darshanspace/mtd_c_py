import sys

queue_data = []

def inqueue():
    item = input('Enter item to enqueue: ')
    queue_data.append(item)
    print(f'Item "{item}" enqueued to the queue.')

def outqueue():
    if len(queue_data) > 0:
        item = queue_data.pop(0) 
        print(f'Item "{item}" dequeued from the queue.')
    else:
        print("Queue is empty, cannot dequeue.")

def list_queue():
    if len(queue_data) > 0:
        print('Current queue:', queue_data)
    else:
        print('Queue is empty.')

def is_empty():
    if len(queue_data) == 0:
        print("Queue is empty.")
    else:
        print("Queue is not empty.")

def front():
    if len(queue_data) > 0:
        print(f'Front item is: {queue_data[0]}')
    else:
        print("Queue is empty.")

def exit_app():
    print('Terminated')
    sys.exit()

def invalid_choice():
    print('Invalid choice. Please try again.')

def queue(choice):
    menu = {
        1: inqueue,
        2: outqueue,
        3: list_queue,
        4: is_empty,
        5: front,
        6: exit_app
    }
    menu.get(choice, invalid_choice)()

def start_app():
    while True:
        print('1: Enqueue 2: Dequeue 3: List Queue 4: Is empty 5: Front 6: Exit')
        try:
            choice = int(input('Enter your choice: '))
            queue(choice)
        except ValueError:
            print("Please enter a valid number.")

start_app()