#include <iostream>
#include <string>
using namespace std;

/// @brief Finds the last occurrence of a string
/// @param str String to search
/// @param find String to find
/// @return The index of the last occurrence
size_t find_last(string& str, string& find) {
    // Set initial values
    size_t pos = str.find(find);
    size_t last_pos = pos;

    while (true) {
        // Look for instance after current position
        pos = str.find(find, pos + 1);
        if (pos == string::npos) return last_pos; // If there isn't one, then this is the last one. Return

        last_pos = pos; // If there is, keep looking
    }
}

/// @brief Removes the prefix if present, if it isn't present, do nothing
/// @param str The string to modify
/// @param rm_str The prefix to remove
void remove_prefix(string& str, string& rm_str) {
    size_t pos = str.find(rm_str); // Find the string

    if (pos != 0) return; // 

    str.erase(pos, rm_str.length());
}

/// @brief Removes the suffix if present, if it isn't present, do nothing
/// @param str The string to modify
/// @param rm_str The suffix to remove
void remove_suffix(string& str, string& rm_str) {
    // Find the last occurrence of the string
    size_t pos = find_last(str, rm_str);

    if (pos != str.length() - rm_str.length()) return; // If the string is not at the very end, return
    
    // Erase the 
    str.erase(pos, rm_str.length());
}
