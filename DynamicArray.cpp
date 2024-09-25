#include <iostream>
#include <stdexcept>

class DynamicArray {
public:
    // Constructor
    DynamicArray(size_t initialCapacity = 2)
        : size(0), capacity(initialCapacity) {
        data = new int[capacity];
    }

    // Destructor
    ~DynamicArray() {
        delete[] data;
    }

    // Insert an element
    void add(int value) {
        if (size >= capacity) {
            resize();
        }
        data[size++] = value; // Add the new value and increment size
    }

    // Get an element at a specific index
    int get(size_t index) const {
        if (index < size) {
            return data[index];
        } else {
            throw std::out_of_range("Index out of bounds");
        }
    }

    // Get the current size of the array
    size_t getSize() const {
        return size;
    }

private:
    int* data;          // Pointer to the array
    size_t size;       // Current size of the array
    size_t capacity;   // Maximum capacity of the array

    // Resize the dynamic array
    void resize() {
        capacity *= 2; // Double the capacity
        int* newData = new int[capacity];
        for (size_t i = 0; i < size; ++i) {
            newData[i] = data[i];
        }
        delete[] data; // Free old memory
        data = newData; // Point to new memory
    }
};

// Main function to demonstrate the dynamic array
int main() {
    DynamicArray number;

    // Inserting elements into the dynamic array
    number.add(10);
    number.add(20);
    number.add(30); // Triggers resizing
    number.add(40);

    // Accessing elements
    for (size_t i = 0; i < number.getSize(); i++) {
        std::cout << "Element at index " << i << ": " << number.get(i) << std::endl;
    }

    return 0;
}
