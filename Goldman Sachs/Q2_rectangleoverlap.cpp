#include <iostream>
using namespace std;
class overlap
{
public:
    int x, y;
    bool isOverlapping(overlap l1, overlap r1, overlap l2, overlap r2);
};
bool overlap::isOverlapping(overlap l1, overlap r1, overlap l2, overlap r2)
{
    if (l1.x > r2.x || l2.x > r1.x)
        return false;
    if (l1.y < r2.y || l2.y < r1.y)
        return false;
    return true;
}
int main()
{
    overlap a ;
    overlap l1 = {0, 10}, r1 = {5, 5};
    overlap l2 = {6, 6}, r2 = {10, 10};
    if (a.isOverlapping(l1, r1, l2, r2))
        cout << "Rectangles are Overlapping";
    else
        cout << "Rectangles are not Overlapping";
}
