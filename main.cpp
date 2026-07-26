#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

class TextBase {
protected:
    vector<string> textLines;
public:
    TextBase() {}
    TextBase(const vector<string>& lines) { textLines = lines; }
    ~TextBase() {}
    void print() { for (const auto& line : textLines) cout << line << "\n"; }
    int getLength() {
        int len = 0;
        for (const auto& line : textLines) len += line.length();
        return len;
    }
    int getLineCount() { return textLines.size(); }
    int getWordCount() {
        int words = 0;
        for (const auto& line : textLines) {
            bool inWord = false;
            for (char c : line) {
                if (c == ' ' || c == '\t' || c == '\n') inWord = false;
                else if (!inWord) { inWord = true; words++; }
            }
        }
        return words;
    }
    int getSpaceCount() {
        int spaces = 0;
        for (const auto& line : textLines)
            for (char c : line) if (c == ' ') spaces++;
        return spaces;
    }
    void removeExtraSpaces() {
        for (auto& line : textLines) {
            istringstream iss(line);
            string word, result;
            while (iss >> word) result += word + " ";
            if (!result.empty()) result.pop_back();
            line = result;
        }
    }
};

class TextModifier : public TextBase {
public:
    TextModifier(const vector<string>& lines) : TextBase(lines) {}
    void insertAtPosition(int lineIndex, int pos, const string& subStr) {
        if (lineIndex >= 0 && lineIndex < textLines.size()) {
            if (pos >= 0 && pos <= textLines[lineIndex].length()) {
                textLines[lineIndex].insert(pos, subStr);
            }
        }
    }
};

int main() {
    vector<string> inputData = {
        "Hello     world!",
        "This   is   a   simple   inheritance.",
        "C++"
    };

    TextModifier doc(inputData);
    
    doc.print();
    
    cout << doc.getLength() << "\n";
    cout << doc.getLineCount() << "\n";
    cout << doc.getWordCount() << "\n";
    cout << doc.getSpaceCount() << "\n";
    
    doc.removeExtraSpaces();
    doc.print();
    
    cout << doc.getSpaceCount() << "\n";

    doc.insertAtPosition(1, 8, "wonderful example of ");
    doc.print();

    return 0;
}
