#include <iostream>
using namespace std;

int main() {
    void hanoi(int, char, char, char);
    hanoi(3, 'A', 'B', 'C'); // change the number of disk(s) as per requirement
}

void hanoi(int n, char source, char destination, char temp)
{
    if(1 == n)
    {
        cout << "Move disk 1 from " << source << " to " << destination << endl;
        return;
    }
    hanoi(n-1, source, temp, destination);
    cout << "Move disk " << n << " from " << source << " to " << destination << endl;
    hanoi(n-1, temp, destination, source);
}
