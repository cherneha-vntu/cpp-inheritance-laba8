# Lab Work 8: Simple Inheritance in C++

This project is a laboratory/practical work for the "Computer Technologies and Programming" course. It contains an implementation of a simple inheritance hierarchy for processing text data, written in C++.

## Programs Included

### 1. Text Data Modifier (`main.cpp`)

This program demonstrates a base class `TextBase` for storing and analyzing text (counting words, characters, spaces, and removing extra spaces), and a derived class `TextModifier` that inherits these capabilities and adds the ability to insert a substring into a specific position in the text.

## How to Compile and Run

```bash
g++ main.cpp -o main
./main
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

Contributions are welcome and appreciated! Here's how you can contribute:

1. Fork the project
2. Create your feature branch (`git checkout -b feature/AmazingFeature`)
3. Commit your changes (`git commit -m 'Add some AmazingFeature'`)
4. Push to the branch (`git push origin feature/AmazingFeature`)
5. Open a Pull Request

Please make sure to update tests as appropriate and adhere to the existing coding style.

## License

This project is licensed under the CSSM Unlimited License v2.0 (CSSM-ULv2). See the [LICENSE](LICENSE) file for details.
