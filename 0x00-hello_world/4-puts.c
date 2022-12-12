#include <stdio.h>
/**
*main = main block 
*Return: o
*
*/
import fileinput

for lines in fileinput.FileInput("test.txt", inplace=1):
	    lines = lines.strip()
	        if lines == '': continue
	        print lines
int main(void)
{
	puts("\"Programming is like building a multilingual puzzle");
	return (0);
}
