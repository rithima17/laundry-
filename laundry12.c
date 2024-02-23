#include<stdio.h>
main()
{
    int c ,r,no_outfits;
    char ch,a;
    float amount;
    do
    {
	
    printf("\n 1. washing");
    printf("\n 2 . iron");
    printf(" \n enter your choice");
    scanf("%c",&ch);
        switch(ch)
        {
            case '1':printf("\n a. Silk");
                     printf("\n b.Cotton");
                     printf("\n enter your choices in washing:");
                     scanf("%c",&c);
                     switch(c)
                     {
                     	case 'S':printf("\n Enter r & No_outfits");
                				scanf("%d%d",&r,&no_outfits);
                				amount=r*no_outfits;
               					printf("amount=%f",amount);
                				break;
                		case 'C':printf("\n Enter r & No_outfits");
                				scanf("%d%d",&r,&no_outfits);
                				amount=r*no_outfits;
                				printf("amount=%f",amount);
                				break;
					 }
					 break;
                    
            case '2':printf("\n a. Saree");
                     printf("\n b.Shirt");
                     printf("\n enter your choices in washing:");
                     scanf("%c",&c);
                     switch(c)
                     {
                     	case 'W':printf("\n Enter r & No_outfits");
                				scanf("%d%d",&r,&no_outfits);
                				amount=r*no_outfits;
               					printf("amount=%f",amount);
                				break;
                		case 'T':printf("\n Enter r & No_outfits");
                				scanf("%d%d",&r,&no_outfits);
                				amount=r*no_outfits;
                				printf("amount=%f",amount);
                				break;
                     	
					 }
                     break;
            
        }
        printf("\n do you want to continue: %c");
        scanf("%c",&a);
}
while (a=='y');
}
