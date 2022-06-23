#include <stdio.h>

int Vincent(int *timecount, int *charisma)
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
	printf("\"Vincent: In need of something?\"\n");
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
			printf("\"Vincent: I'm doing well. I was just catching up to some old books that I borrowed from\n");
			printf("the Biblioplex, as they say, there's no rest for the weary... or the wicked.\"\n");	
			}
			else if(Adialogue1 == 2)
			{
			printf("\"Vincent: I was thinking about some nefarious things... That you'll probably scold me on now that\n");
			printf("I've told you, but now that you're here, it puts me at ease, won't you join me for a cup of coffee?\"\n");	
			}
			else if(Adialogue1 == 3)
			{
			printf("\"Vincent: Just a thinking of our remaining missions here. Nothing to fret about since we already\n");
			printf("planned it out. And afterwards, we would have more than enough time to spend time together with\n");
			printf("our friends. Oh, the sights we shall see.\"\n");		
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
				printf("\"Vincent: Just fixing up some of the gear I've brought with me, like past time activities,\n");	
				printf("books... weapons... err, emergency clothes. The usual.\"\n");
				}
				else if(Adialogue2 == 2)
				{
				printf("\"Vincent: I was about to do some reconnaissance at the locations we've been scoping out,\n");
				printf("would you like to join me and afterwards maybe we could explore the bazaar together?\"\n");	
				}
				else if(Adialogue2 == 3)
				{
				printf("\"Vincent: Just reading through some of the books and ledgers we've procured. Some of them\n");	
				printf("seemed to have been tampered. And by the looks of it, it was a certain someone you've brought\n"); 
				printf("in a few days ago...\"\n");
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
			
					printf("\"Vincent: hmm interests?\"\n");
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
						printf("\"Vincent: I think time well spent with a certain someone is all that I'm interested in right now,\n");	
						printf("wouldn't you agree?\"\n");
						}
						else if(Adialogue3 == 2)
						{
						printf("-------------------------------------------------------------------------------------------------\n");
						printf("\"Vincent: Did the other's put you to this, is this another prank by them?\"\n");
						}
						else if(Adialogue3 == 3)
						{
						printf("-------------------------------------------------------------------------------------------------\n");
						printf("\"Vincent: Hmm, what do you mean? Would you like to go to the bazaar if there's anything that you\n");
						printf("would like?\"\n");	
						}

					}
					
					else if (diceroll >= 13)
					{
						printf("-------------------------------------------------------------------------------------------------\n");
						printf("\"Vincent: I guess \"time\" will tell\"\n");
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
			printf("\"Vincent: I will see you later then.\"\n");
		}


}













