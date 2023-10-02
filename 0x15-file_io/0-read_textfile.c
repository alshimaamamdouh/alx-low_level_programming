#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints
 * @filename: input filename
 * @letters: input length
 *
 *
 * Return: number of letters it could read and print
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

ssize_t  file, read_file, write_file; 

char *buffer;


buffer = malloc(letters);

if (buffer == NULL)
{
return (0);

}
if (!filename)

{

return (0);
}
file = open(filename, O_RDONLY);
if (file == -1)
{
free(buffer);
return (0);
}
read_file = read(file, buffer, letters);
write_file = write(STDOUT_FILENO, buffer, read_file);
close(file);
return (write_file);
}
