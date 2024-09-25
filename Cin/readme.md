

---

```markdown
# Simple User Input Program in C++

This C++ program demonstrates how to take user input using `cin` and display the input using `cout`. The program asks the user to enter their name and age, then outputs the provided information.

## Code

```cpp
#include<iostream>
using namespace std;

int main()
{
    string namee;
    cout << "Please enter your Name: ";
    cin >> namee;
    cout << "Your name is: " << namee << endl;

    int age;
    cout << "Please Enter your age: ";
    cin >> age;
    cout << "Your age is: " << age;

    return 0;
}
```

## How to Run

1. **Install a C++ compiler** (e.g., GCC for Linux, MinGW for Windows).
2. **Save the code** in a file named `user_input.cpp`.
3. **Open a terminal** or command prompt and navigate to the directory where the file is saved.
4. **Compile the code** using the following command:
   ```bash
   g++ user_input.cpp -o user_input
   ```
5. **Run the compiled program**:
   ```bash
   ./user_input
   ```

## Expected Output

When you run the program, it will prompt you to enter your name and age, then display the entered information:

```
Please enter your Name: [User enters name]
Your name is: [User's name]
Please Enter your age: [User enters age]
Your age is: [User's age]
```

## Explanation

- **cin**: Used for taking input from the user.
- **cout**: Used for displaying output to the console.
- **string**: Used to store text (in this case, the user's name).
- **int**: Used to store integer values (in this case, the user's age).

## Contributing

Feel free to contribute by submitting pull requests or reporting issues.

## License

This project is open-source and available under the MIT License.

## Contact

For any questions, please reach out at [manan100111@gmail.com].
```

--- 

