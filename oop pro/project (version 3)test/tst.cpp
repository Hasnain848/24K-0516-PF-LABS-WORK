#include <iostream>
#include "ConsoleManipulation.h"
#include <string>
#define YELLOW "\033[33m"
using namespace std;
int screenWidth = 20;


void print(string color, string text) {
    cout << color << text ;
}

int main() {
    // cout<< "A";
    string yellow = "a3saooooooooooooooooooooooooooooooooooooooooooooooooopppppppppppppppppppppppppppppppppppppppppppppp";
    // cout << yellow << "hello" << endl;
    printText(yellow, screenWidth, WHITE, false);
    // cout << "| " << WHITE << "Welcome, " << WHITE << "!" 
}
// printText("+======================+", scre, YELLOW, true)