#include<stdio.h>
#include<strings.h>
int main()
{
    char atr[100];
    char btr[100];
    char ctr[100];

    scanf("%s%s%s",atr,btr,ctr);
    if(strcmp(atr,"vertebrado")==0)
    {
        if(strcmp(btr,"ave")==0)
        {
            if(strcmp(ctr,"carnivoro")==0)
            {
                printf("aguia\n");
            }
            else
            {
                printf("pomba\n");
            }
        }
        else if(strcmp(btr,"mamifero")==0)
        {
            if(strcmp(ctr,"onivoro")==0)
            {
                printf("homem\n");
            }
            else
            {
                printf("vaca\n");
            }
        }



    }


    if(strcmp(atr,"invertebrado")==0)
    {
        if(strcmp(btr,"inseto")==0)
        {
            if(strcmp(ctr,"hematofago")==0)
            {
                printf("pulga\n");
            }
            else
            {
                printf("lagarta\n");
            }
        }

        else if(strcmp(btr,"anelideo")==0)
        {
            if(strcmp(ctr,"hematofago")==0)
            {
                printf("sanguessuga\n");
            }
            else
            {
                printf("minhoca\n");
            }
        }



    }
    return 0;
}
