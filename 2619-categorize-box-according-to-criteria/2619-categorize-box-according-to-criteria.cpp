#include <string>
#include <cmath>
using namespace std;

class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        string answer;
        bool bulky = false;
        bool heavy = false;

        // Use long long to prevent overflow
        long long volume = static_cast<long long>(length) * width * height;

        if(length >=10000 || width >= 10000 || height >= 10000 || volume >= 1000000000LL) {
            bulky = true;
        }
        if(mass >= 100) {
            heavy = true;
        }

        if(bulky && heavy) {
            answer = "Both";
        } else if(bulky) {
            answer = "Bulky";
        } else if(heavy) {
            answer = "Heavy";
        } else {
            answer = "Neither";
        }

        return answer;
    }
};
