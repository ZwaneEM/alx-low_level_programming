#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>

#define ERROR_USAGE 98
#define ERROR_READ 99
#define ERROR_WRITE 100

ssize_t read_textfile(const char *filename, size_t letters);

int create_file(const char *filename, char *text_content);

int append_text_to_file(const char *filename, char *text_content);

int cpy_files(char *filename_f, char *filename_t);

#endif
