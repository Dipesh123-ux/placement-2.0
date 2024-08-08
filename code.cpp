#include <iostream>
#include <cmath>
#include <vector>
#include <map>
#include <tuple>
#include <iomanip>
#include <bits/stdc++.h>
using namespace std;

struct Device {
    double x, y;
};

int main() {
    int N;
    std::cin >> N;

    std::map<int, std::pair<int, std::vector<std::tuple<int, double, int>>>> devices;

    for (int i = 0; i < N; ++i) {
        int id, num;
        char colon;
        std::cin >> id >> colon >> num;
        devices[id] = std::make_pair(num, std::vector<std::tuple<int, double, int>>());

        for (int j = 0; j < num; ++j) {
            int d_id, distance, angle;
            std::cin >> d_id >> distance >> angle;
            devices[id].second.push_back(std::make_tuple(d_id, distance, angle));
        }
    }

    int device1, device2;
    std::cin >> device1 >> device2;

    Device coordinates[16]; // Assuming maximum 16 devices

    // Setting device 1 at (0,0)
    coordinates[device1].x = 0;
    coordinates[device1].y = 0;

    // Calculate coordinates for other devices based on distances and angles
    for (const auto& device : devices) {
        if (device.first != device1) {
            for (const auto& neighbor : device.second.second) {
                int neighbor_id, distance, angle;
                std::tie(neighbor_id, distance, angle) = neighbor;

                double x = coordinates[device.first].x + distance * cos(angle * M_PI / 180.0);
                double y = coordinates[device.first].y + distance * sin(angle * M_PI / 180.0);

                coordinates[neighbor_id].x = x;
                coordinates[neighbor_id].y = y;
            }
        }
    }

    // Calculate distance between device1 and device2
    double distance = sqrt(pow(coordinates[device2].x - coordinates[device1].x, 2) +
                           pow(coordinates[device2].y - coordinates[device1].y, 2));

    std::cout << std::fixed << std::setprecision(2) << distance << std::endl;

    return 0;
}
