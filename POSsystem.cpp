#include <iostream>
#include "POSsystem.h"
#define PERCENTAGE 10

using namespace std;

namespace calculate {

    float calculateTip(float gross, float percentage){
        return gross * (percentage/100);
    }

    float calculateNet(float tip, float gross, float percentage) {
        return gross + calculateTip(gross, percentage);
    }

    void displayReciept(float gross, float net, float tip, float percentage) {
        std::cout << "Your Gross Amount is: " << gross << endl;
        std::cout << "=============================================" << endl;
        std::cout << "Percentage for tip: " << percentage << endl;
        std::cout << "Gratuity: " << tip << endl;
        std::cout << "=============================================" << endl;
        std::cout << "Net Payment is: " << net;
    }
}

int main(int argc, char const *argv[]) {
    float gross;

    std::cout << "Gross Amount: " << '\n';
    std::cin >> gross;

    float tip = calculate::calculateTip(gross, PERCENTAGE);
    float net = calculate::calculateNet(tip, gross, PERCENTAGE);

    calculate::displayReciept(gross, net, tip, PERCENTAGE);
    cin.get();
    return 0;
}
