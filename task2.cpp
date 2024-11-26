#include <iostream>
#include <vector>
#include <string>

using namespace std;

int count_rotations(const vector<string>& directions) {
    // ... same logic as before
}

int main() {
    int num_directions;

    cout << "Enter the number of directions: ";
    cin >> num_directions;
    vector<string> directions(num_directions);

    cout << "Enter the directions (left or right):\n";
    for (int i = 0; i < num_directions; ++i) {
        cin >> directions[i];
    }

    int rotations = count_rotations(directions);
    cout << "Number of full rotations: " << rotations << endl;

    return 0;
}