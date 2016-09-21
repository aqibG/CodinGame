#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    //loop
    while (1) {
        int height = 0;
        int iheight = 0;
        
        for (int i = 0; i < 8; i++) {
            int mountainH; // Height of mountain
            cin >> mountainH; cin.ignore();
            
            if (mountainH > max) {
                height = mountainH;
                iheight = i;
            }
        }

        cout << iheight << endl;
    }
}
