
#ifndef PACKGED_H
#define PACKGED_H
#include "libini.h"

// ������Ϣ�������
void pack_set_print_func(void (*print_funcs)(void *opaque, const char *msg));
void mpr_tou(INI *pini);
///dir,file,
int PackgedMrp(char *cfile,char **fj,char *mrpname);/////////////�������ʱ������

#endif//PACKGED_H