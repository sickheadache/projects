#include <stdio.h>
#include <ctype.h>

int ft_isalnum(int c) {
    if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') ||( c >= 'a' && c <= 'z'))
        return 1;
    
        return 0;
}

int main () {
    
    printf("%d %d %d %d %d %d %d\n", ft_isalnum(345), ft_isalnum(48), ft_isalnum(57), ft_isalnum(65), ft_isalnum(90), ft_isalnum(97), ft_isalnum(122));
    printf("%d %d %d %d %d %d %d", isalnum(345), isalnum(48), isalnum(57), isalnum(65), isalnum(90), isalnum(97), isalnum(122));
}
