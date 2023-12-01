
// Why use While Loops:

    // While loops are actually more useful when you are waiting for a certain event to occur!

    // Example:

        // Video Game:
        // The game should continue until the player loses all of their lives. You do not know how long
        // this will take, so a while loop is more appropiate. 

    // If you have specific loop parameters, a for loop will be better. 

#include <iostream>
using namespace std;

int main() {

    int player_lives = 3;

    while (player_lives > 0) {
        // video game code
        // goes here
    }

    return 0;

}

// More Notes:

/* 
A 
while
 loop usually contains a boolean expression(s) in its header and nothing else.

A 
for
 loop contains a header that specifies where an iterator variable starts, where it ends, and how it is changed per iteration.

A 
for
 loop is better if a command needs to be executed a certain number of times.

A counting variable needs to be declared and initialized before a 
while
 loop can be executed properly.
*/