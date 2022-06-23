#include <stdio.h>

int Faine(int *timecount, int *charisma)
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
	printf("\"Faine: How ya doin'?\"\n");
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
			printf("\"Faine: I'm doing mighty fine right now! Don't know about the others but this hotel is snazzy!.\"\n");	
			}
			else if(Adialogue1 == 2)
			{
			printf("\"Faine: I'm itching for some action right now! I feel like I might hit up the guild for some extra coin.\"\n");	
			}
			else if(Adialogue1 == 3)
			{
			printf("\"Faine: I'm in a sightseeing mode right now! Might hit up the casino to and maybe get lucky for some\n");
			printf("coin and some company.\"\n");
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
				printf("\"Faine: Just cleaning up my blades and puffin' up my wings, I may look like a ruffian but\n");	
				printf("I'm pretty high maintenance!\"\n");
				}
				else if(Adialogue2 == 2)
				{
				printf("\"Faine: I'm looking for some fun around here! Anything to get me wasted here ya' think?\"\n");	
				}
				else if(Adialogue2 == 3)
				{
				printf("\"Faine: Just looking for some conversation around here making new friends. Speaking of,\n");	
				printf("how about we have a talk over some ale?\"\n");
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
			
					printf("\"Faine: interests? let me think..\"\n");
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
						printf("\"Faine: I am in need of all the riches and company of the entire world!!! Well at the moment,\n"); 	
						printf("a far-fetched dream, but a plausible one, I believe.\"\n");
						}
						else if(Adialogue3 == 2)
						{
						printf("-------------------------------------------------------------------------------------------------\n");
						printf("\"Faine: Ain’t really in need of anything right now, why’d ya ask?\"\n");	
						}
						else if(Adialogue3 == 3)
						{
						printf("-------------------------------------------------------------------------------------------------\n");
						printf("\"Faine: Maybe a bit of your time over a candelabrum and some dinner might be somethin'\n");
						printf("I'm interested in.\"\n");	
						}

					}
					
					else if (diceroll >= 13)
					{
						printf("-------------------------------------------------------------------------------------------------\n");
						printf("\"Faine: Well, another set of accesory on my horns can't be that bad...I like it more mettalic!\"\n");
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
		printf("\"Faine: Catch ya later!\"\n");
	}


}













