#include <iostream>
#include <fstream>
#include <cctype>

class TextConverter {
private:
    std::string inputFileName;
    std::string outputFileName;

public:
    TextConverter(const std::string& input, const std::string& output)
        : inputFileName(input), outputFileName(output) {}

    void convertToUppercase() {
        // Open the input file
        std::ifstream inputFile(inputFileName);

        if (!inputFile.is_open()) {
            std::cerr << "Error opening input file." << std::endl;
            return;
        }

        // Open the output file
        std::ofstream outputFile(outputFileName);

        if (!outputFile.is_open()) {
            std::cerr << "Error opening output file." << std::endl;
            inputFile.close();
            return;
        }

        // Read each character from the input file, convert to uppercase, and write to the output file
        char ch;
        while (inputFile.get(ch)) {
            outputFile.put(std::toupper(ch));
        }

        // Close the files
        inputFile.close();
        outputFile.close();

        std::cout << "Conversion completed successfully." << std::endl;
    }
};

int main() {
    // Replace "input.txt" and "output.txt" with your desired file names
    TextConverter textConverter("input.txt", "output.txt");
    
    // Perform the conversion
    textConverter.convertToUppercase();

 return 0;
}
