#include <iostream>
#include "Model.h"
#include "Controller.h"
#include "View.h"
using namespace std;

/*
g++ main.cpp src/*.cpp -I include -std=c++20 -o main
*/

int main() {

    Model *model = new Model();
    Controller *controller = new Controller(model);

    return 0;
}