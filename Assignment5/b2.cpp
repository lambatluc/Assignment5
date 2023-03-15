#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Coin
{
private:
    string sideUp;

public:
    Coin()
    {
        // Initialize the random number generator
        srand(time(0));
        // Randomly determine the side of the coin that is facing up
        int randNum = rand() % 2;
        if (randNum == 0)
        {
            sideUp = "heads";
        }
        else
        {
            sideUp = "tails";
        }
    }
    void toss()
    {
        // Randomly determine the side of the coin that is facing up
        int randNum = rand() % 2;
        if (randNum == 0)
        {
            sideUp = "heads";
        }
        else
        {
            sideUp = "tails";
        }
    }
    string getSideUp() const
    {
        return sideUp;
    }
};

int main()
{
    Coin myCoin;
    cout << "The side facing up is initially: " << myCoin.getSideUp() << endl;

    int numHeads = 0, numTails = 0;
    for (int i = 0; i < 20; i++)
    {
        myCoin.toss();
        cout << "Toss " << i + 1 << ": " << myCoin.getSideUp() << endl;
        if (myCoin.getSideUp() == "heads")
        {
            numHeads++;
        }
        else
        {
            numTails++;
        }
    }

    cout << "Number of times heads is facing up: " << numHeads << endl;
    cout << "Number of times tails is facing up: " << numTails << endl;

    return 0;
}
