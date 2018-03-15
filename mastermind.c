#include <stdio.h>
#include <stdlib.h>

void updatetab(int *zgodnosc,int *poz1,int *poz2,int *poz3,int *poz4,int zap1,int zap2,int zap3,int zap4,int bialein,int czarnein)
{
    for(int i=0;i<1296;i++)
        {
            if(bialein!=biale(poz1[i],poz2[i],poz3[i],poz4[i],zap1,zap2,zap3,zap4))
                zgodnosc[i]=0;
            if(czarnein!=czarne(poz1[i],poz2[i],poz3[i],poz4[i],zap1,zap2,zap3,zap4))
                zgodnosc[i]=0;
        }
}

int check(int *zgodnosc)
{
    int sum=0;
    for(int i=0;i<1296;i++)
        if(zgodnosc[i]==1)
            sum++;

    if(sum==1)
    {
        int t=0;
        while(zgodnosc[t]==0)
            t++;

        return t;
    }

    if(sum>1)
        return -1;

    if(sum==0)
        return -2;
}

int czarne(int wz1,int wz2,int wz3,int wz4,int zap1,int zap2,int zap3,int zap4)
{
    int suma=0;
    if(wz1==zap1)
        suma++;
    if(wz2==zap2)
        suma++;
    if(wz3==zap3)
        suma++;
    if(wz4==zap4)
        suma++;

    return suma;
}

int biale(int wz1,int wz2,int wz3,int wz4,int zap1,int zap2,int zap3,int zap4)
{
    int suma=0;
    if(wz1!=zap1&&(wz1==zap2||wz1==zap3||wz1==zap4))
        suma++;
    if(wz2!=zap2&&(wz2==zap1||wz2==zap3||wz2==zap4))
        suma++;
    if(wz3!=zap3&&(wz3==zap1||wz3==zap2||wz3==zap4))
        suma++;
    if(wz4!=zap4&&(wz4==zap1||wz4==zap2||wz4==zap3))
        suma++;

    return suma;
}

int main()
{
    int bialetmp,czarnetmp;


    int poz1[1296];
    int poz2[1296];
    int poz3[1296];
    int poz4[1296];
    int zgodnosc[1296];

    for(int i=0;i<6;i++)
        for(int j=0;j<6;j++)
            for(int k=0;k<6;k++)
                for(int l=0;l<6;l++)
                {
                    poz1[i+j*6+k*6*6+l*6*6*6]=i;
                    poz2[i+j*6+k*6*6+l*6*6*6]=j;
                    poz3[i+j*6+k*6*6+l*6*6*6]=k;
                    poz4[i+j*6+k*6*6+l*6*6*6]=l;
                }

    for(int i=0;i<1296;i++)
        zgodnosc[i]=1;

    printf("zgadnij wzorzec\n");

    while(check(zgodnosc)==-1)
    {
        
        int counter=0;
        while(zgodnosc[counter]==0)
        counter++;
        
        printf("czy to?\n");
        printf("%d %d %d %d \n",poz1[counter],poz2[counter],poz3[counter],poz4[counter]);
        
        printf("podaj ile bialych i ile czarnych\n");
        scanf("%d %d",&bialetmp,&czarnetmp);
        updatetab(zgodnosc,poz1,poz2,poz3,poz4,poz1[counter],poz2[counter],poz3[counter],poz4[counter],bialetmp,czarnetmp);
    }

    if(check(zgodnosc)==-2)
        printf("Oszukujesz\n");

    if(check(zgodnosc)!=-2)
    {
        int x=check(zgodnosc);
        printf("Zakodowany uklad to %d %d %d %d\n",poz1[x],poz2[x],poz3[x],poz4[x]);
    }


    return 0;
}
