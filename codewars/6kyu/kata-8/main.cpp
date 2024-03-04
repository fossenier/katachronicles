#include <iostream>
#include <vector>

bool isValidWalk(std::vector<char> walk);

int main()
{
    std::cout << std::boolalpha << isValidWalk({'n', 's', 'n', 's', 'n', 's', 'n', 's', 'n', 's'}) << std::endl;
}

bool isValidWalk(std::vector<char> walk)
{
    /*
    Purpose:
        reads a series of directions 'n', 's', 'e', 'w' and determines if a
        ten minute walk in that time is possible
    Pre-conditions:
        a series of valid directions
    Post-conditions:
        none
    Returns:
        truthy value for the walk possibility
    */
    // treat the walk as a 2D grid
    int x = 0, y = 0;
    for (char direction : walk)
    {
        switch (direction)
        {
        case 'n':
            y++;
            break;
        case 's':
            y--;
            break;
        case 'e':
            x++;
            break;
        case 'w':
            x--;
            break;
        }
    }

    return y == 0 && x == 0 && walk.size() == 10;
}
