# Exp9
### What are Pointers in C++?

A **pointer** in C++ is a special type of variable that stores the memory address of another variable. Instead of holding a direct value, pointers hold the address where the value is stored. Pointers allow you to directly access and manipulate data in memory, which is useful in scenarios like dynamic memory allocation, passing large data structures to functions efficiently, and more.

### Key Concepts of Pointers:
1. **Memory Address**: Every variable in memory has a unique address where it is stored.
2. **Pointer Variable**: A pointer stores this memory address, allowing you to indirectly access the variable's value.
3. **Dereferencing**: Using a pointer to access the value of the variable it points to.

### Syntax of Pointers:

1. **Declaring a Pointer**: 
   - To declare a pointer, you need to specify the data type it will point to, followed by an asterisk (`*`), and then the pointer's name.
   ```
   int* ptr
   ```
   Alternatively:
   ```
   int *ptr   // A pointer to an integer
   ```

2. **Assigning an Address to a Pointer**:
   - Use the address-of operator (`&`) to assign the address of a variable to a pointer.
   ```
   int num = 10;
   int* ptr = &num; 
   ```

3. **Dereferencing a Pointer**:
   - Dereferencing means accessing the value stored at the address the pointer holds, using the asterisk (`*`) before the pointer variable.
   ```
   int value = *ptr;
   ```

### Components of the Syntax:

- `int* ptr`: Declares a pointer `ptr` that points to an integer.
- `ptr = &num`: Assigns the address of `num` to the pointer `ptr`.
- `*ptr`: Dereferences the pointer to access the value at the address it holds.

## code
```
// Name: Saanvi Mohapatra
// PRN: 23070123110
#include <iostream>
using namespace std;

int main() {
    int num = 5;          
    int multiplier = 3;   
    int *ptr = &num;  
    cout << "Original value of num: " << *ptr << endl;
    *ptr = (*ptr) * multiplier;
    cout << "New value of num after multiplication: " << *ptr << endl;
    return 0;
}
```
## Output:
```
Original value of num: 5
New value of num after multiplication: 15
```
### Summary:
- A **pointer** holds the memory address of another variable.
- **Syntax** includes declaring a pointer with the asterisk (`*`), assigning it the address of a variable using the address-of operator (`&`), and accessing the value using dereferencing (`*`).
