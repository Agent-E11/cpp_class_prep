#include <iostream>
#include <string>
using namespace std;

/// @brief Ask the user for 3 numbers (e.g. `a, b, c`), print `a*b+c`
/// @return Exit code (0 for success)
int task_1() {
    int nums[3];

    while (true) {
        // Get user input
        string num_strs[3];
        for (string str : num_strs)
            cin >> str;

        try {
            // Convert each element to integer
            for (int i = 0; i < 3; i++)
                nums[i] = stoi(num_strs[i]);
            break; // Break out of loop if successful

        } catch(const exception& e) {
            // Print error
            cerr << "Please enter a valid number" << endl;
        }
    }

    for (int i = 0; i < 3; i++)
        cout << "Item " << i << ": " << nums[i] << endl;
    
    cout << nums[0] << "*" << nums[1] << "+" << nums[2] << "=" << nums[0] * nums[1] + nums[2] << endl;

    return 0;
}

/// @brief Ask user for a test score from 0 to 1, or 0% to 100%, print the letter grade and GPA corresponding to it
/// @return Exit code (0 for success)
int task_2() {

    float num;
    while (true) {
        try {
            string num_str;
            cin >> num_str;

            // If the last character is '%', then it is a percent
            bool is_percent = num_str[num_str.length()-1] == '%';

            num = stof(num_str); // Convert to number (automatically strips '%')

            num = (is_percent) ? num/100 : num;

            break; // Break out of loop if successful
        } catch (const exception& e) {
            // If there is an error converting, print an error
            cerr << "Please enter a valid number" << endl;
        }
    }

    // Convert to letter grade and GPA
    string letter;
    float gpa;

    if (num > 1) { return 1; } else // Grade too large

    if (num >= .97) { letter = "A+"; gpa = 4.0; } else
    
    if (num >= .93) { letter = "A";  gpa = 3.9; } else
    
    if (num >= .90) { letter = "A-"; gpa = 3.7; } else
    
    if (num >= .87) { letter = "B+"; gpa = 3.3; } else
    
    if (num >= .83) { letter = "B";  gpa = 3.0; } else
    
    if (num >= .80) { letter = "B-"; gpa = 2.7; } else
    
    if (num >= .77) { letter = "C+"; gpa = 2.3; } else
    
    if (num >= .73) { letter = "C";  gpa = 2.0; } else
    
    if (num >= .70) { letter = "C-"; gpa = 1.7; } else
    
    if (num >= .67) { letter = "D+"; gpa = 1.3; } else
    
    if (num >= .63) { letter = "D";  gpa = 1.0; } else
    
    if (num >= .60) { letter = "D-"; gpa = 0.7; } else
    
    if (num >= .00) { letter = "F";  gpa = 0.0; } else

    { return 1; } // Grade below 0 is impossible

    cout << "Raw grade:    " << num << endl;
    cout << "Letter grade: " << letter << endl;
    cout << "GPA:          " << gpa << endl;

    return 0;
}

/// @brief Ask the user for numbers until they give a 0, then print the sum of all the numbers
/// @return Exit code (0 for success)
int task_3() {
    float sum;
    float num;

    do {
        // Get input
        string input;
        cin >> input;

        try {
            // Try to convert
            num = stof(input);
        } catch (const exception& e) {
            // If there is an error, print error and try again
            cerr << "Please enter a valid number" << endl;
            continue;
        }
        // If it was successful, add to total, continue
        sum += num;

    } while (num != 0); // If the number is `0`, don't loop again
    
    cout << "Total: " << sum << endl;

    return 0;
}

int main() {
    return task_3();
}
