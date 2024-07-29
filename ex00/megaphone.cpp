#include <iostream>
#include <cctype>  // for std::toupper
#include <cstring> // for std::strlen

int main(int argc, char* argv[]) {
    if (argc == 1) {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    }
	else {
        // Iterate over each argument
        for (int i = 1; i < argc; ++i) {
            for (size_t j = 0; j < std::strlen(argv[i]); ++j) {
                // Convert each character to uppercase and print it
                std::cout << (char)std::toupper(argv[i][j]);
            }
            if (i < argc - 1) {
                // Print a space between arguments
                std::cout << " ";
            }
        }
        std::cout << std::endl; // Add a newline after all arguments are printed
    }
    return 0;
}

