#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a;
    int even=0, odd=0;
    for (int i=1;i<=n; i++)
    {
        scanf("%d",&a);
        if(a%2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("%d %d",even,odd);
    return 0;
}