int main()
{
int m[5] = { 4, 3, 2, 1, 0 };
int *p;
p=m+2;
printf("m is %lu, &m is %lu, &m[0] is %lu, m[0] is %lu\n", m,
(unsigned long)&m, (unsigned long)&m[0], m[0]);
printf("p is %lu, &p is %lu, &p[0] is %lu, p[0] is %lu\n", p,
(unsigned long)&p, (unsigned long)&p[0], p[0]);
}


/*
a) What is the output of the program?

m is 1140849248, &m is 1140849248, &m[0] is 1140849248, m[0] is 4
p is 1140849256, &p is 1140849240, &p[0] is 1140849256, p[0] is 2

b) Draw a diagram showing m and p and their addresses and values.

| Element  |     Address     |   Value   |
|   m[0]   | 140737488347920 |     4     |
|   m[1]   | 140737488347924 |     3     |
|   m[2]   | 140737488347928 |     2     |
|   m[3]   | 140737488347932 |     1     |
|   m[4]   | 140737488347936 |     0     |
|    p     | 140737488347928 |     2     |


c) Explain why the first three values in the first printf are the same.

Because m, &m, and &m[0] are all the address of the element in the array 'm'.

d) Explain why the first three values in the second printf are not the same.

Because p is the address of the third element of 'm', &p is he adress of the pointer p, and &p[0] is the address of the third element of the array 'm'.

e) What are the values of p[-1] and p[-2]? Explain.

The value of p[-1] is 3 because its the value before p[0] which is m[1], 3.
The value of p[-2] is 4 because its the value before p[-1] which is m[0], 4.
*/