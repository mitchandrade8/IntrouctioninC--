

#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  int x = stoi(argv[1]);
  
  //add code below this line

  if (x % 5 == 0 && x % 2 == 0) {
    cout << to_string(x) + " is divisible by 5 and even";
  } else {
    cout << to_string(x) + " is not divisible by 5 or it is odd";
  }


  //add code above this line
  
  return 0;
  
}

// Codio Solution:

    /* if ((x % 5 == 0) && (x % 2 == 0)) { 
    cout << to_string(x) + " is divisible by 5 and even";
    }
    else {
    cout << to_string(x) + " is not divisible by 5 or it is odd";
    } */