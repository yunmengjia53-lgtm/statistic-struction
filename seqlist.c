#include 'studio.h'
#define MAXSIZE 100
typedef int elemtype
typedef struct ｛
elemtype data[MAXSIZE];
int length;
｝seqlist;
viod initlist(seqlist* L)｛
L-›length = 0;
｝;
printf('%d', L-›length)
