#ifndef RECORD_H
#define RECORD_H

int record_open(const char *filename, const char *mode);
int record_close();
int record_add(const char);
char record_get();

#endif
