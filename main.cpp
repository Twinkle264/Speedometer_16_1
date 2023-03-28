#include <iostream>

int main() {
    float speed = 0.0f;
    char speed_str[10];

    do {
        float delta = 0.0f;

        std::cout << "Input the delta of speed: ";
        std::cin >> delta;
        speed += delta;

        if (speed < 0.0f) {
            speed = 0.0f;
        } else if (speed > 150.0f) {
            speed = 150.0f;
        }
        std::sprintf(speed_str, "%.1f km/h", speed);
        std::cout << std::endl;
        std::cout << "Your speed is: " << speed_str << std::endl;

    } while (speed > 0.01);
    return 0;
}
