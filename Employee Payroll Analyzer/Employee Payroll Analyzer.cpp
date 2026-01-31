#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    // Declaring arrays
    const int MAX = 100;
    string empID[MAX], name[MAX], department[MAX];
    float basicSalary[MAX], hoursWorked[MAX];

    float hourlyRate[MAX], overtimeHours[MAX], grossSalary[MAX];
    float tax[MAX], provident[MAX], netSalary[MAX];

    int count = 0;

    // Reading from input file
    ifstream inFile("employees.txt");
    if (!inFile) {
        cout << "employees.txt not found!";
        return 0;
    }

    string line;
    getline(inFile, line); // skip header

    while (getline(inFile, line) && count < MAX) {

        int p1 = line.find(',');
        int p2 = line.find(',', p1 + 1);
        int p3 = line.find(',', p2 + 1);
        int p4 = line.find(',', p3 + 1);

        empID[count]       = line.substr(0, p1);
        name[count]        = line.substr(p1 + 1, p2 - p1 - 1);
        basicSalary[count] = stof(line.substr(p2 + 1, p3 - p2 - 1));
        hoursWorked[count] = stof(line.substr(p3 + 1, p4 - p3 - 1));
        department[count]  = line.substr(p4 + 1);

        count++;
    }
    inFile.close();

    // Calculations 
    for (int i = 0; i < count; i++) {

        hourlyRate[i] = basicSalary[i] / 160.0;
        overtimeHours[i] = (hoursWorked[i] > 40) ? (hoursWorked[i] - 40) : 0;

        grossSalary[i] = basicSalary[i] + (overtimeHours[i] * hourlyRate[i] * 1.5);

        tax[i] = grossSalary[i] * 0.10;
        provident[i] = grossSalary[i] * 0.05;

        netSalary[i] = grossSalary[i] - (tax[i] + provident[i]);
    }

    // Finding highest & lowest salary 
    int maxIndex = 0, minIndex = 0;

    for (int i = 1; i < count; i++) {
        if (netSalary[i] > netSalary[maxIndex]) maxIndex = i;
        if (netSalary[i] < netSalary[minIndex]) minIndex = i;
    }

    // Writing Report 
    ofstream outFile("payroll_report.txt");

    outFile << "PAYROLL REPORT\n";
    outFile << "=======================\n\n";

    outFile << "Department-wise Summary:\n\n";

    
    for (int i = 0; i < count; i++) {
        outFile << department[i] << ": " 
            << name[i] << " (Net Salary = " << netSalary[i] << ")\n";
    }

    outFile << "\n-----------------------------------\n";

    outFile << "Highest Net Salary: " 
        << name[maxIndex] << " (" << netSalary[maxIndex] << ")\n";

    outFile << "Lowest Net Salary: "
        << name[minIndex] << " (" << netSalary[minIndex] << ")\n";

    outFile.close();

    cout << "payroll_report.txt generated successfully.\n";

    return 0;
}
