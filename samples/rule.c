#include <stdio.h>
#include "rule.leg.c"

int main()
{
  GREG g;
  yyinit(&g);
  while (yyparse(&g));
  yydeinit(&g);
  return 0;
}
