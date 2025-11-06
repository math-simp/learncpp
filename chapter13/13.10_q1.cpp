#include <iostream>

struct AdvertisementMetrics
{
    int watchCount;
    double percentageWatched;
    double averageEarningsPerClick;
};

void printAdMetrics(const AdvertisementMetrics &);

int main()
{
    using std::cin;
    using std::cout;
    using std::endl;

    int watchCount;
    double percentageWatched;
    double averageEarningsPerClick;

    cout << "How many ads were watched? Enter (int): ";
    cin >> watchCount;
    // cout << endl;

    cout << "What percentage of users clicked on an ad? Enter (double): ";
    cin >> percentageWatched;
    // cout << endl;

    cout << "The average earnings per clicked ad? Enter (double): ";
    cin >> averageEarningsPerClick;
    // cout << endl;

    AdvertisementMetrics myMetrics{watchCount, percentageWatched, averageEarningsPerClick};
    printAdMetrics(myMetrics);
}

void printAdMetrics(const AdvertisementMetrics &metrics)
{
    using std::cin;
    using std::cout;
    using std::endl;

    auto earnings = metrics.watchCount * metrics.percentageWatched * metrics.averageEarningsPerClick / 100;

    cout << "Total made for the day: $" << earnings << endl;
}