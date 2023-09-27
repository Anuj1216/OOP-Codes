#include <iostream>
using namespace std;

class Weight {
private:
    int kg;
    int g;

public:
    Weight(int kg, int g) : kg(kg), g(g) {}

    void display() {
        cout << "Weight: " << kg << " kg " << g << " g" << endl;
    }

    Weight operator+(const Weight& other) {
        int total_kg = kg + other.kg;
        int total_g = g + other.g;

        if (total_g >= 1000) {
            total_kg += total_g / 1000;
            total_g %= 1000;
        }

        return Weight(total_kg, total_g);
    }
};

int main() {
    Weight weight1(5, 750);
    Weight weight2(3, 850);

    Weight total_weight = weight1 + weight2;

    weight1.display();
    weight2.display();

    cout << "Total ";
    total_weight.display();

    return 0;
}

