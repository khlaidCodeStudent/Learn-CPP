# Introduction to Strings in C++

## 1. What is a String?

A string is a sequence of characters. In C++, a string is used to store text like names, words, and sentences.

Example: `"Hello"`, `"Khalid"`, `"Asli Dukan"`

In C++, there are two ways to represent strings:
1.  **C-style String (Character Array):** `char name[10] = "Khalid";`
2.  **C++ STL String Class:** `string name = "Khalid";` (Modern & Recommended)

We will focus on the `std::string` class.

---

## 2. Why do we need `<string>` header?

To use the C++ string class, you must include the header.

```cpp
#include <iostream>
#include <string>  // Required for string
using namespace std;

int main() {
    string name = "Khalid";
    cout << name;
    return 0;
}
```
## 3. Declaration and Initialization
```cpp
string s1; // Empty string
string s2 = "Hello"; // With assignment
string s3("World"); // Using constructor
string s4(5, 'A'); // AAAAA -> 5 times 'A'
string s5 = s2; // Copy of s2
```
## Taking String Input / Output
Common Mistake: Using cin >>
cin >> s only reads input till the first space.
```cpp
string name;
cout << "Enter name: ";
cin >> name; // If you enter "Khalid Khan", it will only store "Khalid"
```
## Correct Way: Using getline()
To read a full line with spaces, use getline().
```cpp
string fullName;
cout << "Enter full name: ";
getline(cin, fullName); // Reads "Khalid Khan" completely
cout << "Hello, " << fullName;
```
## 5. Important String Functions in C++
## 5. Important String Functions in C++

| Function | Description | Example |
| :--- | :--- | :--- |
| `length() / size()` | Returns length of string | `s.length()` |
| `empty()` | Checks if string is empty | `s.empty()` |
| `append() / +` | Concatenates two strings | `s1 + s2` |
| `substr(pos, len)` | Returns substring | `s.substr(0, 5)` |
| `find(str)` | Finds first occurrence | `s.find("Khan")` |
| `compare()` | Compares two strings | `s1.compare(s2)` |
| `insert(pos, str)` | Inserts string at position | `s.insert(5, " World")` |
| `erase(pos, len)` | Deletes characters | `s.erase(0, 2)` |
| `replace(pos, len, str)` | Replaces part of string | `s.replace(0,2,"Hi")` |
| `clear()` | Clears the string | `s.clear()'

# 6. String Operations with Examples
## A. Concatenation
```cpp
string firstName = "Khalid";
string lastName = "Khan";
string fullName = firstName + " " + lastName;
cout << fullName; // Output: Khalid Khan

// Or using append()
firstName.append(lastName);
```
## B. Accessing Characters
String is like an array, indexing starts from 0.
```cpp
string s = "Hello";
cout << s[0]; // H
cout << s[1]; // e
cout << s.at(0); // H - safer method
s[0] = 'J'; // Now string is "Jello"
```
## C. Iterating Over a String
```cpp
string s = "CPP";
for (int i = 0; i < s.length(); i++) {
    cout << s[i] << " ";
}

// Using for-each loop (Modern C++)
for (char c : s) {
    cout << c << " ";
}
```
## D. Comparison
```cpp
string s1 = "apple";
string s2 = "banana";

if (s1 == s2) cout << "Equal";
else cout << "Not Equal";

// s1 < s2 based on lexicographical (dictionary) order
if (s1 < s2) cout << " s1 is smaller";
```
# 7. Character Array vs. C++ String


| Feature | `char arr[]` | `string` |
| :--- | :--- | :--- |
| Size | Fixed | Dynamic, can grow |
| Header | `<cstring>` | `<string>` |
| Functions | `strlen()`, `strcpy()` | `length()`, `substr()` etc. |
| Usage | Old C style | Modern C++ (Recommended) 

# 8. Complete Example Program
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "Learn";
    string str2 = " CPP";

    // 1. Concatenation
    string str3 = str1 + str2;
    cout << "Concatenated: " << str3 << endl;

    // 2. Length
    cout << "Length: " << str3.length() << endl;

    // 3. Substring
    cout << "Substring: " << str3.substr(0, 5) << endl;

    // 4. Find
    if (str3.find("CPP") != string::npos) {
        cout << "CPP found!" << endl;
    }

    // 5. Input with space
    string name;
    cout << "Enter your full name: ";
    getline(cin, name);
    cout << "Welcome " << name << endl;

    return 0;
}
```
# 9. Key Points to Remember

1.  Always include `#include <string>`.
2.  `string` objects are dynamic, you don't need to worry about size.
3.  For input with spaces, always use `getline(cin, str)`.
4.  `length()` and `size()` both do the same thing.
5.  Strings are mutable - you can change any character using index `s[i] = 'x'`.