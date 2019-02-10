//#include<stdio.h>
//
//int main()
//{
//    int i;
//    char c;
//    for(i=1; i<=5; i++)
//    {
//        scanf("%c", &c); /* given input is 'b' */
//        ungetc(c, stdout);
//        printf("%c", c);
//        ungetc(c, stdin);
//    }
//    return 0;
//}

/* myprog.c */
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
    printf("%d\n",argc);
    printf("%c\n",*argv);
    int i, j=0;
    for(i=0; i<argc; i++)
        j = j+atoi(argv[i]);
    printf("%d\n", j);
    return 0;
}
