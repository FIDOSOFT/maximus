#ifndef _WES_WINSTR_H
#define _WES_WINSTR_H

#define stricmp strcasecmp
#define strnicmp strncasecmp

#ifdef  __cplusplus
extern "C" {
#endif

char *strupr(char *s);
char *strlwr(char *s);
char *itoa(int value, char *buffer, int radix);
int memicmp(const void *p, const void *q, size_t length);

#ifdef  __cplusplus
}
#endif

#endif
