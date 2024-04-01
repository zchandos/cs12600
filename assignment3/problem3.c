#include <stdio.h>
#include <string.h>

int main() {
    char n[10]; // line 1
    char m[10] = "September"; // line 2
    char *p = "October"; // line 3
    strcpy(n, p+2);
    strncat(n, m+3, 3);
    printf("m contains \"%s\" at address %p\n", m, (void*)&m);
    printf("n contains \"%s\" at address %p\n", n, (void*)&n);
    printf("p points to \"%s\" at address %p\n", p, (void*)&p);
    printf("main is at address %p\n", (void*)&main);
    printf("\"October\" has value %lu at address %p\n", (unsigned long)"October", (void*)"October");
    printf("\"October\"+3 has value %lu at address %p\n", (unsigned long)("October"+3), (void*)("October"+3));
    printf("p+4 is %p\n", (void*)(p+4));
    // p[0] = 'A'; // line 11
    return 0;
}

/*

a) Add code to this program to print the memory addresses for m, n, p, main.

Code added

b) Run the program, then draw a diagram showing the contents and addresses of m, n, p, main, and
"October".

m:  | S | e | p | t | e | m | b | e | r | \0|
&m: Address of m "00000083a2fffadc"

n: | t | o | b | e | r | t | e | m | \0|
&n: Address of n "00000083a2fffae6"

p: | O  | c | t | o | b | e | r | \0|
&p Address of p "00000083a2fffad0"

c) Lines 2 and 3 look very similar. Explain, referring to your diagram, how those lines differ.

Line 2 intitalizes and array m with the string "September" while line 3 intializes a pointer p which points to the string "October".

d) Show that the string "October" is stored far from the local variables.

The string "October" would be stored somewhere such as read only memory while the local variables would be part of the stack.

3) What happens when the program executes line 11? It turns out that string literals are stored in
read-only memory. Can you think of a way to allow p to point to a string that is mutable?

When line 11 is uncommented I get a complile error. This is because its trying to modify a string literal which is in read only memory. To allow p to point to a string that is mutable you can dynamically allocate memory and copy the string to it.

*/