#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    const char *message = "Hello, World!\n";
    size_t message_length = 13; // Length of the message, including the newline character

    // Write the message to stdout (file descriptor 1)
    write(1, message, message_length);

    // Exit the program with a success status code (0)
    exit(0);

    return 0; // This line is not reached, but it's good practice to include it
}
