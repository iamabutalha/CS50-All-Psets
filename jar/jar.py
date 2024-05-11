class Jar:
    def __init__(self, capacity=12):
        if capacity <= 0:
            raise ValueError("Capacity must be a positive integer.")
        self._capacity = capacity
        self._size = 0

    def __str__(self):
        return "🍪" * self._size

    def deposit(self, n):
        if n <= 0:
            raise ValueError("Deposit amount must be a positive integer.")
        if self._size + n > self._capacity:
            raise ValueError("Adding {} cookies would exceed the jar's capacity of {}.".format(n, self._capacity))
        self._size += n

    def withdraw(self, n):
        if n <= 0:
            raise ValueError("Withdraw amount must be a positive integer.")
        if n > self._size:
            raise ValueError("Withdrawing {} cookies would exceed the jar's current size of {}.".format(n, self._size))
        self._size -= n

    @property
    def capacity(self):
        return self._capacity

    @property
    def size(self):
        return self._size


def main():
    jar = Jar()
    jar.deposit(5)
    jar.withdraw(2)
    print(jar.capacity)  # Output: 12
    print(jar.size)      # Output: 3

main()
