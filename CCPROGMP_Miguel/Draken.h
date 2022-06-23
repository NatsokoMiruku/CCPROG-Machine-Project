#include <stdio.h>

int Draken(int *timecount, int *charisma)
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
	printf("\"Draken: The weather is nice today isn't it?\"\n");
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
			printf("\"Draken: I'm doing splendid. Would you like to talk more over a cup of tea?\"\n");	
			}
			else if(Adialogue1 == 2)
			{
			printf("\"Draken: A bit busy because of the paperwork of our missions, however there are things in the\n");
			printf("bazaar that seemed interesting...\"\n"); 
			}
			else if(Adialogue1 == 3)
			{
			printf("\"Draken: I feel inspired! I might pick up my pen and tools later and draw something for the\n");
			printf("Solstice.\"\n"); 	
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
				printf("\"Draken: I'm just doodling on my sketchbook at the moment, the snow outside gives a serene\n");
				printf("feeling, and watching it through the window can let me draw in peace.\"\n"); 		
				}
				else if(Adialogue2 == 2)
				{
				printf("\"Draken: Looking at ledgers and contacts to see where we're going next. Could you be a dear\n");
				printf("and call the others? I know they'd listen to you when you call them.\"\n"); 		
				}
				else if(Adialogue2 == 3)
				{
				printf("\"Draken: Well nothing at the moment I'm afraid. On that note would you like to talk about\n");
				printf("anything? Rumors and gossip alike is what I have.\"\n"); 		
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
			
					printf("\"Draken: Interests...?\"\n");
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
						printf("\"Draken: I'm a bit indecisive on the things that I want at the moment, but you could ask me later\n");
						printf("if you wish.\"\n"); 			
						}
						else if(Adialogue3 == 2)
						{
						printf("-------------------------------------------------------------------------------------------------\n");
						printf("\"Draken: I think you're on to something, if you want I could tell what the other's might like.\n");
						printf("For me however, It'll take quite a bit more persuading to get anything from me.\"\n"); 	
						}
						else if(Adialogue3 == 3)
						{
						printf("-------------------------------------------------------------------------------------------------\n");
						printf("\"Draken: Why? Are you picking up gifts for the Winter Solstice? I can come with to help you pick?\n");
						printf("Oh is it a surprise well it will be fine! I won't look I promise!\"\n"); 	
						}

					}
					
					else if (diceroll >= 13)
					{
						printf("-------------------------------------------------------------------------------------------------\n");
						printf("\"Draken: I think something fancy or exquisite to wear is something i want to add to my fashion.\"\n");
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
		printf("\"Draken: Stay safe out there!\"\n");
	}


}













