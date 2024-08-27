# Exp9
## What are Pointers in C++?

In C++, pointers are variables that hold the memory addresses of other variables. This indirection allows pointers to access and manipulate data stored in different memory locations. Pointers are fundamental for dynamic memory management, efficient data handling, and implementing various data structures.

- *Memory Address Storage*: Pointers store the address of a variable, allowing indirect access to its value.

- *Dynamic Memory Management*: They enable dynamic allocation and deallocation of memory using new and delete, facilitating flexible memory usage.

- *Efficient Data Handling*: Pointers allow efficient passing of large data structures or arrays to functions without copying the entire data.

- *Pointer Arithmetic*: They support arithmetic operations (e.g., incrementing, decrementing) to traverse arrays and manipulate data at various memory locations.

- *NULL and Void Pointers*: NULL pointers represent uninitialized or invalid addresses, while void pointers can point to any data type but require explicit type casting for dereferencing.
## Key Concepts of Pointers

- *Memory Address*: Every variable in memory is assigned a unique address that identifies its location. This address is where the variable's data is stored.

- *Pointer Variable*: A pointer is a special type of variable that holds the memory address of another variable. This allows indirect access to the data by referring to the variable through its address.

- *Dereferencing*: Dereferencing is the process of accessing or modifying the data stored at the memory address pointed to by the pointer. By dereferencing a pointer, you can read or change the value of the variable it points to.
## Syntax of Pointers

### Declaring a Pointer

To declare a pointer, specify the type of data it will point to, followed by an asterisk (*) and the pointer’s name.

cpp
int* ptr;


### Assigning an Address to a Pointer

Assign the address of a variable to a pointer using the address-of operator (&).

cpp
int num = 10;
int* ptr = &num;


### Dereferencing a Pointer

To access or modify the value stored at the address the pointer is pointing to, use the asterisk (*) before the pointer’s name.

cpp
int value = *ptr;

## code:
```
//name: Saanvi
//prn: 23070123110
#include <iostream>
using namespace std;

int main() {
    int num1 = 2, num2 = 7;
    int *ptr1 = &num1; 
    int *ptr2 = &num2; 

    cout << "Original values: " << endl;
    cout << "num1 = " << *ptr1 << ", num2 = " << *ptr2 << endl;

    *ptr1 = (*ptr1) * (*ptr2); 
    cout << "After multiplication, new value of num1 = " << *ptr1 << endl;

    return 0;
}
```
## output:
```
Original values: 
num1 = 2, num2 = 7
After multiplication, new value of num1 = 14
```
### code:
```
#include <iostream> 
using namespace std; 

int main() 
{
    int* p=new int[7];

    for (int i=0; i<5; i++)
    {
        p[i]=10*(i+1);
    }

    cout<<*p<<"\n"; 
    cout<<*p+1<<"\n";
    cout<<*(p+1)<<"\n";
    cout<<2[p]<<"\n";
    cout<<p[2]<<"\n";
    *p++;

    cout<<*p;

    return 0; 
}
```

### Output:
```
[Running] cd "c:\Users\Saanvi\Desktop\CDS\" && g++ tempCodeRunnerFile.cpp -o tempCodeRunnerFile && "c:\Users\Saanvi\Desktop\CDS\"tempCodeRunnerFile
10
11
20
30
30
20
[Done] exited with code=0 in 0.381 seconds
```
### code:
```
// Saanvi
// 23070123110
// ENTC B2 
// experiment 8

#include <bits/stdc++.h> 
using namespace std;
void geeks()
{
    int var = 5;

    int* ptr; 

    ptr = &var;

    cout<<"Value at ptr = "<<ptr<<"\n";
    cout<<"Value at var = " <<var<<"\n";
    cout<<"Value at *ptr = "<<*ptr<<"\n";

}


int main()
{
    geeks();
    return 0;
}
```
### Output:
```
[Running] cd "c:\Users\Saanvi\Desktop\CDS\" && g++ tempCodeRunnerFile.cpp -o tempCodeRunnerFile && "c:\Users\Saanvi\Desktop\CDS\"tempCodeRunnerFile
Value at ptr = 0x61ff08
Value at var = 5
Value at *ptr = 5

[Done] exited with code=0 in 0.845 seconds
```


## Key Syntax Elements

1. **int* ptr**: Declares a pointer ptr for holding the address of an integer variable.
2. *ptr = &num*: Assigns the address of the variable num to the pointer ptr.
3. **ptr*: Dereferences the pointer to access the value at the memory location it points to.

### Conclusion

Understanding these key syntax elements of pointers—declaration, assignment, and dereferencing—is essential for effective memory management and manipulation in C++. Proper use of pointers enables efficient data handling and access in various programming scenarios.
