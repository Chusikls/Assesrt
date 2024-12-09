#include <iostream>
#include <cassert>
float travelTime(float distance, float speed) {
        float travelTime = 0;
        travelTime = distance / speed;
        return travelTime;
}

int main()
{
    float distance, speed;
    std::cout << "Enter distance: \n";
    std::cin >> distance;
    std::cout << "Enter speed: \n";
    std::cin >> speed;
    assert(speed > 0);
    std::cout << "Time: " << travelTime(distance, speed);
}

