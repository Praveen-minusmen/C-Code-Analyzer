# C-Code-Analyzer
# C Code Analyzer

This project is a C program that analyzes another C source file to gather statistics about its structure, including the number of lines, functions, variables, and bracket usage. It provides insights into the code's complexity and helps identify potential issues.

## Features

- **Line Count**: Counts the total number of lines in the source file.
- **Function Analysis**: Identifies and counts built-in functions used (e.g., `printf`, `scanf`, etc.).
- **Variable Count**: Counts the number of variables declared, categorized by type (int, float, char).
- **Bracket Matching**: Checks for balanced brackets (curly `{}`, round `()`, and square `[]`).
- **Detailed Reporting**: Outputs a summary of the analysis results.

## Requirements

- A C compiler (e.g., GCC) to compile and run the program.

## Installation

1. Clone this repository:
    ```bash
    git clone https://github.com/yourusername/your-repo-name.git
    cd your-repo-name
    ```

2. Compile the C program:
    ```bash
    gcc edited_cproject.c -o code_analyzer
    ```

## Usage

Run the compiled program:
```bash
./code_analyzer
```

- Modify the `readFile` function in the code to specify the path of the C file you want to analyze.
- The program will output the analysis results to the console.

## Example Output

BASIC INFORMATION ABOUT THE ABOVE CODE
=========================================
Total num of lines--> 50
Total built in functions used--> 5
Total num of variables used--> 10
INFORMATION ABOUT FUNCTIONS USED IN THE ABOVE CODE
=====================================================
Total number of "void" functions--> 2
Total number of "integer" functions--> 3
Total number of "float" functions--> 1
Total number of "printf" function--> 4
Total number of "scanf" function--> 2
INFORMATION ABOUT THE BRACKETS USED IN ABOVE CODE
====================================================
0 closing curly bracket is missing
0 opening curly bracket is missing
0 closing curve bracket is missing
0 opening curve bracket is missing
0 closing long bracket is missing
0 opening long bracket is missing
INFORMATION ABOUT THE VARIABLES USED
========================================
the num of float variables used are ---> 2
the num of int variables used are --> 5
the num of char variables used are --> 3

