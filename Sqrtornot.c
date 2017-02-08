/** C Program to check Perfect Square **/

#include <stdio.h>

int main()
{
    int a, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(a = 0; a <= n; a++)
    {
        if (n == a * a)
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}

/* C Program to check Perfect Square using sqrt function */

#include <stdio.h>
#include <math.h>

int main(
{
    int n, temp;
    printf("Enter a number: ");
    scanf("%d",&n);

    temp = sqrt(n);

    if(temp*temp == n) printf("YES.");
    else printf("NO.");

    return 0;
}