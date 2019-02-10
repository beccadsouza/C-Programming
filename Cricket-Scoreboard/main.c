#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int i,j,k,ball=0,wick=0,wintoss,nxtbowler,losetoss,overs,total=0,extras=0,currbow=0,numover=0;
int bow,bat,temp,var;
char team[2][15];

struct batsman
{
    char bat_name[30];
    int runs;
    int no_fours;
    int no_sixes;
    int no_balls;
};
struct bowler
{
    char bowname[30];
    int no_overs;
    int no_wick;
    int bow_fours;
    int bow_sixes;
    int bow_run;
};
struct batsman t1[11];
struct bowler t2[11];
void strkch(i,j)
{
    if (i==k)
    {
        k=j;
    }
    else
    {
        k=i;
    }
}
/*void wicket(int i,int j)
{
    if (i==k)
    {
        if(i<j)
        {
            i=j+1;
        }
        else
        {
            i+=1;
        }
    }
    else
    {
        if(i<j)
        {
            j=j+1;
        }
        else
        {
            j=i+1;
        }
    }
}*/
void printtable()
{
    system("cls");
    system("COLOR 0A");

    printf("TEAM %s\n",team[wintoss]);
    printf("BATSMAN NAME");
    int sp;
    for(sp=0;sp<43;sp++)
        printf(" ");
    printf("RUNS\tBALLS\tFOURS\tSIXES\n");
    for(bat=0;bat<11;bat++)
    {
        printf("%s",t1[bat].bat_name);
        temp=strlen(t1[bat].bat_name);
        for(var=0;var<25+30-temp;var++)
        {printf(" ");}
        printf("  %d\t",t1[bat].runs);
        printf("  %d\t",t1[bat].no_balls);
        printf("  %d\t",t1[bat].no_fours);
        printf("  %d\n",t1[bat].no_sixes);
    }
    var=0;
    printf("\n---------------------------------------------------------------------------------------------\n");
    printf("TEAM %s\n",team[losetoss]);
    printf("BOWLER NAME");
    for(sp=0;sp<44;sp++)
        printf(" ");
    printf("OVERS\tWICKETS\tRUNS\tFOURS\tSIXES\n");
    for(bow=0;bow<11;bow++)
    {
        printf("%s",t2[bow].bowname);
        temp=strlen(t2[bow].bowname);
        for(var=0;var<25+30-temp;var++)
        {printf(" ");}
        printf("  %d\t",t2[bow].no_overs);
        printf("  %d\t",t2[bow].no_wick);
        printf("  %d\t",t2[bow].bow_run);
        printf("  %d\t",t2[bow].bow_fours);
        printf("  %d\n",t2[bow].bow_sixes);


    }
    printf("\n---------------------------------------------------------------------------------------------\n");
    printf("\n%s %d-%d\n",team[wintoss],total,wick);

}
void bat_input()
{
    int num=0;
    printf("\nTEAM %s\n\n",team[wintoss]);
    while(num<11)
    {
        printf("\nEnter the name of batsman %d: ",num+1);
        scanf("%s",t1[num].bat_name);
        num++;
    }
    printf("\n-----------------------------------------------------------------------------------------------\n");
}
void bow_input()
{
    int num;
    printf("TEAM %s\n",team[losetoss]);
    for(num=0;num<11;num++)
    {
        printf("\nEnter the name of bowler %d: ",num+1);
        scanf("%s",t2[num].bowname);
    }
}
void  team_input()
{
    int c1=0;
    printf("Enter the name of Team 1: \n");
    scanf("%s",team[0]);
    printf("Enter the name of Team 2: \n");
    scanf("%s",team[1]);
    printf("Who bats first?\nTeam 1 or Team 2\n");
    scanf("%d",&wintoss);
    wintoss--;
    while (c1==0)
    {
        switch(wintoss)
        {
            case 0: {losetoss=1; c1=1;
                break;}
            case 1: {losetoss=0; c1=1;
                break;}
            default: {
                printf("Error: Enter a valid input");
                c1=0;}
        }
    }
}
void br()
{
    i=0;j=1;k=i;
    int ballres;
    printf("\n\nEnter the number of overs: ");
    scanf("%d",&overs);
    //printf("1");
    while(ball<=overs*6)
    {
        //printf("2");
        if((ball%6==0)&&(ball!=0))
        {
            ++numover;
            printf("\n\nEND OF OVER %d\n",numover);
            //printf("3");
            ++t2[currbow].no_overs;
            printf("Enter Next Bowler Number");
            scanf("%d",&currbow);
            currbow--;
            strkch(i,j);
            ball++;

        }
        if(ball%6==0&&ball!=0)
            --ball;
        printf("Enter the result of the ball: ");
        scanf("%c",&ballres);
        switch(ballres)
        {
            case '0':
            {
                ball++;
                break;
            }
            case '1':
            {
                ball++;
                total++;
                t1[k].runs++;
                t1[k].no_balls++;
                strkch(i,j);
                t2[currbow].bow_run++;
                break;
            }
            case '2':
            {
                ball++;
                total+=2;
                t1[k].runs+=2;
                t1[k].no_balls++;
                t2[currbow].bow_run+=2;
                break;
            }
            case '3':
            {
                ball++;
                total+=3;
                t1[k].runs+=3;
                t1[k].no_balls++;
                t2[currbow].bow_run+=3;
                strkch(i,j);
                break;
            }
            case '4':
            {
                ball++;
                total+=4;
                t1[k].runs+=4;
                t1[k].no_fours+=1;
                t1[k].no_balls++;
                t2[currbow].bow_run+=4;
                t2[currbow].bow_fours++;
                break;
            }
            case'6':
            {
                ball++;
                total+=6;
                t1[k].no_balls++;
                t1[k].runs+=6;
                t1[k].no_sixes+=1;
                t2[currbow].bow_run+=6;
                t2[currbow].bow_sixes++;
                break;
            }
            case 'w':
            {
                wick+=1;
                if (i==k)
                {
                    if(i<j)
                    {
                        i=j+1;
                    }
                    else
                    {
                        i+=1;
                    }
                    k=i;
                }
                else
                {
                    if(i<j)
                    {
                        j=j+1;
                    }
                    else
                    {
                        j=i+1;
                    }
                    k=j;
                }

                t1[k].no_balls++;
                ball++;
                t2[currbow].no_wick++;
                break;

            }
            case 'x':
            {
                total+=1;
                extras+=1;
                t2[currbow].bow_run++;
                break;
            }
            case 'n':
            {
                total+=1;
                extras+=1;
                t2[currbow].bow_run++;
                break;
            }
            default: break;

        }
        printtable();
    }


}






int main()
{
    system("COLOR 0A");

    FILE *p;
    p = fopen("one.txt","a+");
    team_input();
    bat_input();
    bow_input();
    br();
    printf("^Z");

    fprintf(p,"TEAM %s\n",team[wintoss]);
    fprintf(p,"BATSMAN NAME");
    int sp;
    for(sp=0;sp<43;sp++)
        fprintf(p," ");
    fprintf(p,"RUNS\tBALLS\tFOURS\tSIXES\n");
    for(bat=0;bat<11;bat++)
    {
        fprintf(p,"%s",t1[bat].bat_name);
        temp=strlen(t1[bat].bat_name);
        for(var=0;var<25+30-temp;var++)
        {fprintf(p," ");}
        fprintf(p,"  %d\t",t1[bat].runs);
        fprintf(p,"  %d\t",t1[bat].no_balls);
        fprintf(p,"  %d\t",t1[bat].no_fours);
        fprintf(p,"  %d\n",t1[bat].no_sixes);
    }
    var=0;
    fprintf(p,"\n---------------------------------------------------------------------------------------------\n");
    fprintf(p,"TEAM %s\n",team[losetoss]);
    fprintf(p,"BOWLER NAME");
    for(sp=0;sp<44;sp++)
        fprintf(p," ");
    fprintf(p,"OVERS\tWICKETS\tRUNS\tFOURS\tSIXES\n");
    for(bow=0;bow<11;bow++)
    {
        fprintf(p,"%s",t2[bow].bowname);
        temp=strlen(t2[bow].bowname);
        for(var=0;var<25+30-temp;var++)
        {fprintf(p," ");}
        fprintf(p,"  %d\t",t2[bow].no_overs);
        fprintf(p,"  %d\t",t2[bow].no_wick);
        fprintf(p,"  %d\t",t2[bow].bow_run);
        fprintf(p,"  %d\t",t2[bow].bow_fours);
        fprintf(p,"  %d\n",t2[bow].bow_sixes);


    }
    fprintf(p,"\n---------------------------------------------------------------------------------------------\n");
    fprintf(p,"\n%s %d-%d\n",team[wintoss],total,wick);
    fprintf(p,"\n ^Z");

    fclose(p);

    return 0;
}