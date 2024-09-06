# enumerate_2.py

month = ["January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"]

# enumerate is equal to below

def enumerate(month, start=1):
    n = start
    for elem in month:
        yield n, elem
        n += 1

print(list(enumerate(month, start=1)))

