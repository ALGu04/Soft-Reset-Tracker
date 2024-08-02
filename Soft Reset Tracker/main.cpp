//
//  main.cpp
//  Soft Reset Tracker
//
//  Created by Anyu Gu on 7/15/24.
//

#include <iostream>
using namespace std;

int main() {
    int i = 0;
    string input(" ");
    int x;
    cout << "Enter last count: ";
    cin >> x;
    i = x;
    while (input != "yes" && input != "stop") {
        cout << "Is it shiny?" << endl;
        cin >> input;
        if (input != "yes" && input != "stop") {
            i++;
            cout << "Encounters: " << i << endl;
            getline(cin, input);
        }
    }
    if (input == "yes") {
        cout << "Shiny Pokemon found in " << i << " encounters. Congratulations!" << endl;
    }
    else {
        cout << "Shiny hunt stopped at " << i << " encounters." << endl;
    }
    return 0;
}
