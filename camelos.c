#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void) {
    setlocale(LC_CTYPE, "");
    int t;
    
    wchar_t camelos = 0x1F42B; // Unicode camelo
    for(t=0;t<85;t++)
      wprintf(L"%lc\t", camelos);
    
    return 0;
}
