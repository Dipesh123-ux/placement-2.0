#include <bits/stdc++.h>
using namespace std;

std::string gameWinner(std::string colors) {
    std::string currPlayer = "wendy";
    std::string prevPlayer = "";
    std::string winner = "";

    while (true) {
        bool moveMade = false;
        if (currPlayer == "wendy") {
            size_t whiteIndex = colors.find("www");
            if (whiteIndex != std::string::npos) {
                // 3 consecutive whites found, remove the middle one
                colors.erase(whiteIndex + 1, 1);
                moveMade = true;
                prevPlayer = currPlayer;
                currPlayer = "bob";
            }
        } else {
            size_t blackIndex = colors.find("bbb");
            if (blackIndex != std::string::npos) {
                // 3 consecutive blacks found, remove the middle one
                colors.erase(blackIndex + 1, 1);
                moveMade = true;
                prevPlayer = currPlayer;
                currPlayer = "wendy";
            }
        }

        // if no moves possible break
        if (!moveMade) {
            winner = prevPlayer;
            break;
        }
    }

    return winner;
}

int main() {
    std::string colors;
    cin>>colors;
    std::string result = gameWinner(colors);
    std::cout << "The winner is: " << result << std::endl;

    return 0;
}
