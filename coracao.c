// Feito com 💚 


#include <stdio.h>
#include <wchar.h>
#include <locale.h>

void cor(void)
{
  wchar_t c = 0x1F49A;
  wprintf(L"%lc\t", c);
}

int main(void) {
    setlocale(LC_CTYPE, "");
    int z;
    for(z=1;z<=400;z++)
      cor();
    
    return 0;
}

