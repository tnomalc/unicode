#include <stdio.h>
#include <wchar.h>
#include <locale.h>

void cafes(void)
{
  wchar_t c = 0x2615;
  wprintf(L"%lc\t", c);
}

int main(void) {
    setlocale(LC_CTYPE, "");
    int z;
    for(z=1;z<=2024;z++)
      cafes();
    
    return 0;
}
