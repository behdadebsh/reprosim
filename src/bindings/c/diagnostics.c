
#include "diagnostics.h"

#include "string.h"

void enter_exit_c(const char *sub_name, int *sub_name_len, int *place);
void set_diagnostics_level_c(int *level);

void enter_exit(const char *sub_name, int place)
{
  int sub_name_len = strlen(sub_name);
  enter_exit_c(sub_name, &sub_name_len, &place);
}

void set_diagnostics_level(int level)
{
  set_diagnostics_level_c(&level);
}
