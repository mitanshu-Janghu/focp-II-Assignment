#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    string name;

    cout << "Enter student name: ";
    getline(cin, name);

    // Handle empty input
    if (name.empty()) {
        cout << "Name cannot be empty!" << endl;
        return 0;
    }

    // Excuse templates
    vector<string> excuses = {
        "{name} couldn't finish the assignment because the laptop battery died unexpectedly.",
        "{name} was about to complete the homework when the Wi-Fi mysteriously disappeared.",
        "{name} tried finishing the assignment, but the keyboard stopped working.",
        "{name} lost the file right before submission due to a system crash.",
        "{name}'s computer froze exactly when the assignment was almost done.",
        "{name} accidentally deleted the assignment while cleaning files.",
        "{name} was updating the system and it took forever to restart.",
        "{name} couldn't submit because the file got corrupted.",
        "{name} was ready to submit but the internet stopped working.",
        "{name}'s USB drive stopped working at the worst possible time."
    };

    // Seed random
    srand(time(0));

    // Random excuse
    int index = rand() % excuses.size();
    string excuse = excuses[index];

    // Replace {name}
    size_t pos = excuse.find("{name}");
    while (pos != string::npos) {
        excuse.replace(pos, 6, name);
        pos = excuse.find("{name}");
    }

    cout << "\n📢 Excuse: " << excuse << endl;

    return 0;
}