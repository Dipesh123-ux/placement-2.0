#include <bits/stdc++.h>
using namespace std;

int calculateNewPosition(vector<int>& elements, int position) {
    int index = -1;
    int maximum = -1;
    int size = elements.size();
    for (int i = 0; i < size; i++) {
        if (maximum < elements[i]) {
            index = i;
            maximum = elements[i];
        }
    }
    if (index == position) return 0;
    elements[index] = -1;

    for (int i = 0; i < index; i++) {
        if (elements[i] > 0) elements[i]++;
    }

    return 1 + calculateNewPosition(elements, position);
}

void takeInput(vector<int>& elements, int& targetPosition) {
    int size;
    cin >> size;
    elements.resize(size);
    for (auto &element : elements) cin >> element;
    cin >> targetPosition;
    targetPosition--;
}

void printOutput(int result) {
    cout << result << endl;
}

int main() {
    int testCases, size;
    vector<int> elements;
    int targetPosition;
    
    takeInput(elements, targetPosition);
    int result = 1 + calculateNewPosition(elements, targetPosition);
    printOutput(result);
    
    return 0;
}
