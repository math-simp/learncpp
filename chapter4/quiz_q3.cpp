#include <cmath>
#include <iostream>

namespace PhysicsConstants
{
    double gravity = 9.8;
}

void printHeightOfBallAfterGivenTime(double towerHeight, double x_seconds)
{
    double distanceFallen = x_seconds == 0 ? 0 : (PhysicsConstants::gravity * std::pow(x_seconds, 2)) / 2.0;
    double heightOfBall = towerHeight - distanceFallen;
    if (heightOfBall <= 0)
    {
        std::cout << "At " << x_seconds << " seconds, the ball is on the ground.\n";
    }
    else
    {
        std::cout << "At " << x_seconds << " seconds, the ball is at height: " << heightOfBall << " meters\n";
    }
}

double getTowerHeight()
{
    double towerHeight{};
    std::cout << "Enter the height of the tower in meters: ";
    std::cin >> towerHeight;
    return towerHeight;
}

int main()
{
    double towerHeight{getTowerHeight()};

    printHeightOfBallAfterGivenTime(towerHeight, 0);
    printHeightOfBallAfterGivenTime(towerHeight, 1);
    printHeightOfBallAfterGivenTime(towerHeight, 2);
    printHeightOfBallAfterGivenTime(towerHeight, 3);
    printHeightOfBallAfterGivenTime(towerHeight, 4);
    printHeightOfBallAfterGivenTime(towerHeight, 5);

    std::cout << std::endl;

    return 0;
}