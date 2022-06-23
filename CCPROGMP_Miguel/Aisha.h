#include <stdio.h>

int Aisha(int *timecount, int *charisma)
{
	int talk;
	int emptymodifier = 0;
	int dice;
	int diceroll;
	int Adialogue1;
	int Adialogue2;
	int Adialogue3;
	int talk1 = 0;
	int talk2 = 0;
	int talk3 = 0;

	
	printf("-------------------------------------------------------------------------------------------------\n");
	printf("\"Aisha: Hey! what's up?\"\n");
	printf("[1]How are you?\n");
	printf("[2]What are you doing?\n");
	printf("[3]Talk about interests (gift)\n");
	printf("[4]Bye!\n");
	
	
	scanf("%d", &talk);
	
	while(talk < 1 || talk > 4)
{
	printf("Please Enter Correct Choice\n");
	scanf("%d", &talk);
}

if(talk == 4)
{
*timecount = *timecount;
}
else
{
*timecount = *timecount + 1;	
}
	
while(talk != 4)
{


	if(talk == 1 && talk1 != 1)
	{
			printf("-------------------------------------------------------------------------------------------------\n");
			
			Adialogue1 = 1 + rand()%3;
			if(Adialogue1 == 1)
			{
			printf("\"Aisha: Oh, I'm doing fine! Just a little too chilly for my comfort, but still warm with company\n");
			printf("nonetheless.\"\n");	
			}
			else if(Adialogue1 == 2)
			{
			printf("\"Aisha: I'm doing swell! Just got caught up with the others and I'm warming up quite well to them!\n");
			printf("Been a lone wolf for a while now but talkin' with others ain't so bad after all.\"\n");	
			}
			else if(Adialogue1 == 3)
			{
			printf("\"Aisha: Just a bit famished so I'm waiting on Breakfast/Lunch/Supper but ever since the start of\n");
			printf("my stay here the food has been free, so who's to complain!\"\n");	
			}
			printf("[1]How are you?\n");
			printf("[2]What are you doing?\n");
			printf("[3]Talk about interests (gift)\n");
			printf("[4]Bye!\n");
			
			talk1 = 1;
			scanf("%d", &talk);
			
				while(talk < 1 || talk > 4)
			{
				printf("Please Enter Correct Choice\n");
				scanf("%d", &talk);
			}
	
	}		
	else if(talk == 2 && talk2 != 2)
	{
			printf("-------------------------------------------------------------------------------------------------\n");
				
				Adialogue2 = 1 + rand()%3;
				if(Adialogue2 == 1)
				{
				printf("\"Aisha: Just sorting through stuff that I... procured. I didn't steal anything from the bazaar\n"); 
				printf("this time I swear!\"\n");	
				}
				else if(Adialogue2 == 2)
				{
				printf("\"Aisha: Thinkin' of playing another prank on the others, you wanna join in?\"\n");	
				}
				else if(Adialogue2 == 3)
				{
				printf("\"Aisha: Nothin' much at the moment. If you want I could accompany ya'. Wait you're busy?\n"); 
				printf("Doin' what?\"\n");	
				}
				printf("[1]How are you?\n");
				printf("[2]What are you doing?\n");
				printf("[3]Talk about interests (gift)\n");
				printf("[4]Bye!\n");		
				
			talk2 = 2;
			scanf("%d", &talk);
			
				while(talk < 1 || talk > 4)
			{
				printf("Please Enter Correct Choice\n");
				scanf("%d", &talk);
			}
	}
	else if(talk == 3 && talk3 != 3)
	{
			printf("-------------------------------------------------------------------------------------------------\n");
			
					printf("\"Aisha: hmm interests huh?\"\n");
					printf("\n");
					printf("Roll your dice to persuade.\n");
					printf("[1]Roll Dice\n");
					scanf("%d", &dice);
					
					diceroll = DiceRolling(*charisma);

					if (dice == 1)
					{
					printf("-------------------------------------------------------------------------------------------------\n");
					printf("\"You rolled a %d\"\n", diceroll);
				 	}
					
					while(dice < 1 || dice > 1)
					{
						printf("Please Enter Correct Choice\n");
						scanf("%d", &dice);
					}
							
					if (diceroll <= 12)
					{
						Adialogue3 = 1 + rand()%3;
						if(Adialogue3 == 1)
						{
						printf("-------------------------------------------------------------------------------------------------\n");
						printf("\"Aisha: OOOO, why're you askin? Got somethin' cheeky planned out don't ya? Well let's make it a\n"); 
						printf("little harder for you to figure out!\"\n");	
						}
						else if(Adialogue3 == 2)
						{
						printf("-------------------------------------------------------------------------------------------------\n");
						printf("\"Aisha: I know when a little birdie got intentions behind a question, you ain't getting squat\n"); 
						printf("outta me, surprise me though with whatever you're doing!\"\n");	
						}
						else if(Adialogue3 == 3)
						{
						printf("-------------------------------------------------------------------------------------------------\n");
						printf("\"Aisha: Hmm not really sure what I want right now, besides I could just snatch for me self.\"\n");	
						}

					}
					
					else if (diceroll >= 13)
					{
						printf("-------------------------------------------------------------------------------------------------\n");
						printf("\"Aisha: shiny stuff!\"\n");
					}
					
					printf("[1]How are you?\n");
					printf("[2]What are you doing?\n");
					printf("[3]Talk about interests (gift)\n");
					printf("[4]Bye!\n");	
					
			talk3 = 3;
			scanf("%d", &talk);	
			
				while(talk < 1 || talk > 4)
			{
				printf("Please Enter Correct Choice\n");
				scanf("%d", &talk);
			}
	}			
	
 	else
 	{
 		
	printf("you already asked that.\n");
	scanf("%d", &talk);
	
		while(talk < 1 || talk > 4)
		{
			printf("Please Enter Correct Choice\n");
			scanf("%d", &talk);
		}
		
	}
	
}

	
if(talk == 4)
	{
		printf("\"Aisha: See ya later!\"\n");
	}






}

