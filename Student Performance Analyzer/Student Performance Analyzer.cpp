#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

int main() {
    const int MAX = 100;

    // Parallel arrays
    int studentID[MAX];
    string name[MAX];
    int s1[MAX], s2[MAX], s3[MAX], s4[MAX];

    int total[MAX];
    float percentage[MAX];
    char grade[MAX];
    string status[MAX];

    int count = 0;

    ifstream fin("students.txt");
    if (!fin) {
        cout << "Error: students.txt not found!";
        return 0;
    }

    // Skip header line
    string header;
    getline(fin, header);

    // Read file
    while (!fin.eof()) {
        char comma;
        fin >> studentID[count];
        fin >> comma;
        getline(fin, name[count], ',');
        fin >> s1[count] >> comma >> s2[count] >> comma >> s3[count] >> comma >> s4[count];

        if (fin.fail()) break;

        count++;
    }
    fin.close();

    // Calculations
    float avg1 = 0, avg2 = 0, avg3 = 0, avg4 = 0;
    int passCount = 0;

    for (int i = 0; i < count; i++) {
        total[i] = s1[i] + s2[i] + s3[i] + s4[i];
        percentage[i] = total[i] / 4.0;

        // Grade calculation
        if (percentage[i] >= 85) grade[i] = 'A';
        else if (percentage[i] >= 70) grade[i] = 'B';
        else if (percentage[i] >= 60) grade[i] = 'C';
        else grade[i] = 'F';

        // Status calculation
        if (s1[i] < 50 || s2[i] < 50 || s3[i] < 50 || s4[i] < 50)
            status[i] = "Fail";
        else {
            status[i] = "Pass";
            passCount++;
        }

        avg1 += s1[i];
        avg2 += s2[i];
        avg3 += s3[i];
        avg4 += s4[i];
    }

    avg1 /= count;
    avg2 /= count;
    avg3 /= count;
    avg4 /= count;

    // Find Top 3 students
    float tempP[MAX];
    for (int i = 0; i < count; i++)
        tempP[i] = percentage[i];

    // Simple sorting
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if (tempP[j] > tempP[i]) {
                float t = tempP[i];
                tempP[i] = tempP[j];
                tempP[j] = t;
            }
        }
    }

    // Write Output File
    ofstream fout("analysis.txt");

    fout << "Student Performance Report\n";
    fout << "==========================\n\n";

    for (int i = 0; i < count; i++) {
        fout << "ID: " << studentID[i]
             << ", Name: " << name[i]
             << ", Total: " << total[i]
             << ", Percentage: " << percentage[i]
             << "%, Grade: " << grade[i]
             << ", Status: " << status[i] << "\n";
    }

    fout << "\nSubject-wise Averages:\n";
    fout << "Subject1: " << avg1 << "\n";
    fout << "Subject2: " << avg2 << "\n";
    fout << "Subject3: " << avg3 << "\n";
    fout << "Subject4: " << avg4 << "\n";

    fout << "\nTop Performers:\n";
    for (int i = 0; i < 3 && i < count; i++) {
        // Find student with matching percentage
        for (int k = 0; k < count; k++) {
            if (percentage[k] == tempP[i]) {
                fout << i + 1 << ". " << name[k] << " - " << percentage[k] << "%\n";
                break;
            }
        }
    }

    float passRate = (passCount * 100.0) / count;
    fout << "\nPass Rate: " << passRate << "%\n";

    fout.close();

    cout << "Report generated successfully in analysis.txt\n";

    return 0;
}
