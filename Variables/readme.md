

---

```markdown
# Variables and Data Types in C++

This program demonstrates different data types in C++, including `int`, `float`, `char`, `string`, and `bool`. It also explains the rules for naming variables and provides examples for each data type.

## Code

```cpp
#include<iostream>
using namespace std;

int main()
{
    // Rules for naming a variable
    // A variable name can only have alphabets, numbers, and underscores.
    // A variable name cannot begin with a number.
    // Start variable names with a lowercase character.
    // A variable name cannot be a keyword.
    // A variable name can start with an underscore, but it's not recommended.
    
    // Syntax
    // Type variable_name = value;

    // 1) Int: stores integer values like 12, 435, 657
    int age = 20;
    cout << "Manan is " << age << " years old" << endl;

    // 2) Float: stores decimal values like 23.43, 45.65
    float marks = 30.45;
    cout << "Manan got " << marks << " in CS" << endl;

    // 3) Char: stores single characters such as 'a', 'B'
    char grade = 'B';
    cout << "Manan got grade " << grade << " in CS" << endl;

    // 4) String: stores text such as "This is a C++ video for beginners"
    string title = "This video is about Variables";
    cout << title << endl;

    // 5) Bool: stores boolean values (true or false)
    bool isReady = false;
    cout << isReady << endl;

    // Variable reassignment example
    int numbers;
    numbers = 20;
    numbers = 60;
    cout << "Number is " << numbers;

    return 0;
}
```

## Expected Output

```
Manan is 20 years old
Manan got 30.45 in CS
Manan got grade B in CS
This video is about Variables
0
Number is 60
```

## Explanation

- **int**: Stores integer values.
- **float**: Stores floating-point numbers (decimals).
- **char**: Stores single characters.
- **string**: Stores text strings.
- **bool**: Stores boolean values (`true` or `false`).

## Contributing

Feel free to contribute by submitting pull requests or reporting issues.

## License

This project is open-source and available under the MIT License.

## Contact

For questions, reach out at [logicwithmanan@gmail.com].
```

--- 

You can copy the entire block above and use it directly for your project!