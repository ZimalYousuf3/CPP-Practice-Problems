# CPP Practice Problems - Advanced Projects

Complete C++ practice projects with comprehensive file I/O operations, data processing, and report generation capabilities.

## Overview

This branch contains advanced practice problems that demonstrate real-world application development with C++. Each project includes multiple files (source code and data files) and showcases professional programming practices, including file handling, data validation, statistical analysis, and formatted output generation.

## Projects

### 1. Employee Payroll Analyzer
**Files**: `Employee Payroll Analyzer.cpp`, `employees.txt`

A comprehensive payroll processing system that manages employee compensation data.

**Features**:
- Reads employee information from CSV file
- Calculates hourly rates based on basic salary
- Computes overtime pay (1.5x rate for hours beyond 40)
- Applies tax deductions (10%) and provident fund (5%)
- Identifies the highest and lowest salary earners
- Generates detailed payroll reports

**Key Concepts**: File parsing, string manipulation, financial calculations, array processing

---

### 2. Product Sales Analyzer
**Files**: `Product Sales Analyzer.cpp`, `sales.txt`

A sales data analysis tool for retail businesses.

**Features**:
- Processes daily sales data from a file
- Calculates total sales and daily averages
- Categorizes sales as Low (<1000), Medium (1000-5000), or High (>5000)
- Counts sales in each category
- Generates formatted sales reports with statistics
- Writes analysis results to output file

**Key Concepts**: Statistical analysis, data categorization, file I/O, numerical processing

---

### 3. Student Performance Analyzer
**Files**: `Student Performance Analyzer.cpp`, `students.txt`

An academic performance tracking and analysis system.

**Features**:
- Reads student records with multiple subject scores
- Calculates total marks and percentages
- Assigns letter grades (A/B/C/F) based on performance
- Determines pass/fail status with subject-wise validation
- Computes subject-wise class averages
- Identifies top 3 performers
- Calculates overall pass rate
- Generates comprehensive performance reports

**Key Concepts**: Parallel arrays, grade calculation algorithms, sorting, and academic metrics

---

### 4. Website Traffic Analyzer
**Files**: `Website Traffic Analyzer.cpp`, `traffic.txt`

A web analytics tool for monitoring website visitor patterns.

**Features**:
- Analyzes daily visitor counts (in hundreds)
- Categorizes traffic as Light (<50), Medium (50-200), or Heavy (>200)
- Calculates total visitors and daily averages
- Counts days in each traffic category
- Generates traffic analysis reports
- Exports findings to a formatted text file

**Key Concepts**: Data analysis, statistical processing, traffic pattern recognition, file operations

---

## Learning Objectives

### File I/O Mastery
- Reading structured data from text files
- Parsing CSV and delimited formats
- Writing formatted reports to files
- Error handling for file operations

### Data Processing
- Processing large datasets efficiently
- Implementing data validation
- Performing statistical calculations
- Categorizing and filtering data

### Professional Practices
- Modular code organization
- Meaningful variable naming
- Formatted output generation
- Input validation and error handling

### Real-World Applications
- Financial systems (payroll)
- Business analytics (sales)
- Academic management (grades)
- Web analytics (traffic)

---

## Technical Specifications

- **Language**: C++ (Standard C++11 and above)
- **Input Format**: Text files (.txt) with structured data
- **Output Format**: Formatted text reports
- **Compiler Compatibility**: g++, MSVC, Clang++

---

## How to Use

### Running a Project

1. **Navigate to project folder**
```bash
   cd "Employee Payroll Analyzer"
```

2. **Compile the program**
```bash
   g++ "Employee Payroll Analyzer.cpp" -o payroll
```

3. **Ensure data file exists**
   - Make sure the required .txt file is in the same directory

4. **Run the program**
```bash
   ./payroll
```

5. **View results**
   - Check console output for immediate results
   - Check generated report files for detailed analysis

---

## Sample Data Files

Each project includes sample data files with the following structures:

**employees.txt**: `EmployeeID, Name, BasicSalary, HoursWorked, Department`

**sales.txt**: Daily sales amounts (one per line, floating-point numbers)

**students.txt**: `StudentID, Name, Subject1, Subject2, Subject3, Subject4`

**traffic.txt**: Daily visitor counts in hundreds (floating-point numbers)

---

## Customization

You can modify these programs to:
- Add more data fields
- Implement additional analysis features
- Change categorization thresholds
- Customize report formats
- Add data visualization
- Implement database connectivity

---

## Related Content

For additional practice programs without data files, check the **main branch** which contains individual .cpp files covering:
- Scientific calculators
- Algorithm implementations
- Data structure demonstrations
- Control flow exercises

---

## Author

**Zimal Yousuf**  
BSCS Student | C++ Developer  
Specializing in Data Analysis & File Processing

---

## Notes

- All programs include comprehensive error handling
- Data files must be in the same directory as executables
- Output files are generated in the same directory
- Programs use standard C++ libraries only (no external dependencies)

---

*These projects demonstrate practical application of C++ programming concepts in real-world scenarios, developed as part of advanced Programming Fundamentals coursework.*
