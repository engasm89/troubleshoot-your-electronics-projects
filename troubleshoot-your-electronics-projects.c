// Demonstrate a troubleshooting loop with logging of actions and outcomes
#include <stdio.h> // Logs

int main(void) { // Entry
  printf("Troubleshoot Your Electronics Projects\n"); // Title
  const char* steps[] = {"Inspect","Measure","Isolate","Repair","Test"}; // Steps
  for (int i = 0; i < 5; ++i) { // Iterate
    printf("Step: %s\n", steps[i]); // Log step
    printf("Result: %s OK\n", steps[i]); // Outcome
  } // End iteration
  return 0; // Exit
} // End main
