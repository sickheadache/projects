#include <stdio.h>
#include <ctype.h>

int ft_isascii(int c) {
    
    if (c >= 0 && c <= 0177)
        return 1;
    
        return 0;
}

int main() {
    
    printf("%d %d %d\n", ft_isascii(0), ft_isascii(177), ft_isascii(696));
    printf("%d %d %d", isascii(0), isascii(177), isascii(696));
}
