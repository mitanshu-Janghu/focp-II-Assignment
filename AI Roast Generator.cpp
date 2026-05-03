#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    string name;

    cout << "Enter your name: ";
    getline(cin, name);

    // Handle empty input
    if (name.empty()) {
        cout << "Name cannot be empty!" << endl;
        return 0;
    }

    // Roast templates
    vector<string> roasts = {
        "{name} writes code so slow that even a turtle switched to Python.",
        "If procrastination were an Olympic sport, {name} would have gold.",
        "{name}'s debugging style is staring at the screen until bugs leave.",
        "{name} doesn't write bugs — bugs write {name}.",
        "{name}'s code has more issues than a magazine.",
        "{name} types so slow, autocomplete gives up.",
        "{name} tried coding once... even the compiler laughed.",
        "{name}'s logic is like Wi-Fi — weak and unstable.",
        "{name} opens IDE just to close it again.",
        "{name}'s code works... only in imagination."
    };

    // Seed random
    srand(time(0));

    // Pick random roast
    int index = rand() % roasts.size();
    string roast = roasts[index];

    // Replace {name} with actual name
    size_t pos = roast.find("{name}");
    while (pos != string::npos) {
        roast.replace(pos, 6, name);
        pos = roast.find("{name}");
    }

    cout << "\n🔥 Roast: " << roast << endl;

    return 0;
}