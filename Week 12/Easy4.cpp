#include <iostream>
using namespace std;

int main() {
    int crystals = 200;
    int vial_cost = 50;
    int vials;

    cout << "Welcome to the Vial Shop!\n";
    cout << "Each effective vial costs " << vial_cost << " gold pieces.\n\n";
    cout << "How many vials would you like to buy? ";
    cin >> vials;

    int total_cost = vials * vial_cost;

    if (total_cost <= crystals) {
        crystals -= total_cost;
        cout << "You bought " << vials << " vials for " << total_cost << " crystal shards.\n";
        cout << "You now have " << crystals << " crystal shards left. Safe travels, adventurer!\n";
    } else {
        cout << "You do not have enough crystal shards to buy " << vials << " vials.\n";
        cout << "You only have " << crystals << " crystal shards.\n";
    }

    return 0;
}
