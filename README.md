# Simple Inheritance

This project is a laboratory/practical work for the "Computer Technologies and Programming" course. It contains an implementation of a simple inheritance hierarchy for processing text data, written in C++.

## Programs Included

### 1. Text Data Modifier (`task1.cpp`)
This program demonstrates a base class `TextBase` for storing and analyzing text (counting words, characters, spaces, and removing extra spaces), and a derived class `TextModifier` that inherits these capabilities and adds the ability to insert a substring into a specific position in the text.

## How to Compile and Run
```bash
g++ task1.cpp -o out
./out
```

## Example Usage
```text
Hello     world!
This   is   a   simple   inheritance.
C++
56
3
8
17
Hello world!
This is a simple inheritance.
C++
5
Hello world!
This is wonderful example of a simple inheritance.
C++
```

## Contributing
Contributions are not currently accepted for this laboratory work as it is part of an individual university assignment.

## License
This project is licensed under the CSSM Unlimited License v2.0 (CSSM-ULv2). See the [LICENSE](LICENSE) file for details.
