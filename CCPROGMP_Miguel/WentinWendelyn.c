#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <conio.h>
#include <time.h>
#include "Aisha.h"
#include "Vincent.h"
#include "Draken.h"
#include "Faine.h"

void Pause(void)
{
    int c;
    do
    {
    	c = getchar();
    } while((c != '\n') && (c != EOF));
}


#include "Comissions.c"


int MainMenu()
{
	int choice;
	
	printf("Dungeons and Dragons: Went in Wendelyn\n");
	printf("[1]Start\n");
	printf("[2]Exit\n");
	scanf("%d", &choice);

return choice;	
}


void Intro()
{
    printf("You are a student in Strixhaven, where you learned your first skills/spells throughout\n");
    Pause();
    printf("your first year of college. You and your friends decide to go on a vacation from\n");
    Pause();
    printf("finishing the first year and surviving the chaos that almost killed you, \"The Orics\".\n");
    Pause();
    printf("Will you stay and relax with the time you have or");
    Pause();
    printf("will you investigate the horrors that lie within the place?\n");
    Pause();
    printf("The story begins...\n");
    Pause();
    printf("You arrive in Wendelyn");
    Pause();
    printf("It's December and you see everyone preparing for the Winter Solstice.\n");
    Pause();
    printf("Objective: Buy gifts for your friends, you only have a week in Wendelyn.\n");
    Pause();
}


int GameMenu(int *daycount, int *timecount)
{
	int gamechoice;
	
	system("cls");
	
	printf("-------------------------------------------------------------------------------------------------\n");
	printf("%d Day/s left in Wendelyn\n",*daycount);
	Time(timecount);
	printf("\n");
	printf("[1]Explore\n");	
	printf("[2]Display Stats and Inventory\n");
	printf("[3]Long Rest\n");
	printf("[4]Roll Dice\n");
    printf("[5]Exit\n");
	scanf("%d", &gamechoice);	
	
			if(*timecount >= 4)
			{
				
				while(gamechoice <= 1 || gamechoice > 5) 
				{
				printf("Its getting late you need to rest...\n");
				scanf("%d", &gamechoice);
				}	
				
				if(gamechoice == 5)
				{
				 printf("Till next time!\n");
				}
				
				else if(gamechoice == 3)
				{
				*timecount = *timecount - 3;
				}
			}
	
	
	while(gamechoice > 5 || gamechoice < 1)
	{
		printf("Please Enter Correct Choice\n");
		scanf("%d", &gamechoice);	
	}
		
return gamechoice;
}



int DiceRolling(int Modifier)
{
    int DiceRoll;
    DiceRoll = 1 + rand()%20;
    DiceRoll = DiceRoll + Modifier;
    return DiceRoll;
}


int ClassChoice(int* wisdom, int* charisma, int* strength, int* constitution)
{
	int classchoice;
	int loopin = 1;
	printf("-------------------------------------------------------------------------------------------------\n");
	printf("Pick a Class:\n");
	printf("[1]Fighter\n");
	printf("[2]Magic User\n");
	scanf("%d", &classchoice);
	
		while(loopin)
		{
		
			switch(classchoice)
			{
				case 1: 
					*strength = 1;
					*charisma = 1;
					*constitution = 1;
                    loopin = 0;
				break;
				
				case 2:
					*charisma = 1;
					*wisdom = 2;
                    loopin = 0;
				break;
				
				default:	
					printf("Please Enter Correct Choice");
					scanf("%d", &classchoice);
				break;
			}
		}
		
}



int Buy(int itemprice, int *money, int *iteminv)
{
	*money = *money - itemprice;
	*iteminv = *iteminv + 1;
}


int ShopBuying(int gift1price, int gift2price, int gift3price, int gift4price, int gift5price, int gift6price, int gift7price, 
				int gift8price, int *potioncount, int *armorcheck, int *gift1inv, int *gift2inv, int *gift3inv, int *gift4inv, 
				int *gift5inv, int *gift6inv,int *gift7inv,int *gift8inv, int shopchoice, int *money, int *armorclass)
{
	switch(shopchoice)
	{
		case 1:
				if(*money >= 10)
				{
					Buy(10, money, potioncount);
					printf("\"Thank you for your purchase!\"\n");
					Pause();
				}
				else
				{
					printf("\"I'm afraid you cannot get that item.\"\n");
					Pause();
				}
					Pause();
		break;
		
		case 2:
				if(*money >= 40 && *armorcheck != 1)
				{
					Buy(40, money, armorcheck);
					printf("\"Thank you for your purchase!\"\n");
					*armorclass = *armorclass + 2;
					Pause();
				}
				else
				{
					printf("\"I'm afraid you cannot get that item.\"\n");
					Pause();
				}
					Pause();
		break;
		
		case 3:
				if(*money >= gift1price && *gift1inv != 1)
				{
					Buy(gift1price, money, gift1inv);
					printf("\"Thank you for your purchase!\"\n");
					Pause();
				}
				else
				{
					printf("\"I'm afraid you cannot get that item.\"\n");
					Pause();
				}
					Pause();
		break;
		
		case 4:
				if(*money >= gift2price && *gift2inv != 1)
				{
					Buy(gift2price, money, gift2inv);
					printf("\"Thank you for your purchase!\"\n");
					Pause();
				}
				else
				{
					printf("\"I'm afraid you cannot get that item.\"\n");
					Pause();
				}
					Pause();
		break;
		
		case 5:
				if(*money >= gift3price && *gift3inv != 1)
				{
					Buy(gift3price, money, gift3inv);
					printf("\"Thank you for your purchase!\"\n");
					Pause();
				}
				else
				{
					printf("\"I'm afraid you cannot get that item.\"\n");
					Pause();
				}
					Pause();
		break;
		
		case 6:
				if(*money >= gift4price && *gift4inv != 1)
				{
					Buy(gift4price, money, gift4inv);
					printf("\"Thank you for your purchase!\"\n");
					Pause();
				}
				else
				{
					printf("\"I'm afraid you cannot get that item.\"\n");
					Pause();
				}
					Pause();
		break;
		
		case 7:
				if(*money >= gift5price && *gift5inv != 1)
				{
					Buy(gift5price, money, gift5inv);
					printf("\"Thank you for your purchase!\"\n");
					Pause();
				}
				else
				{
					printf("\"I'm afraid you cannot get that item.\"\n");
					Pause();
				}
					Pause();
		break;
		
		case 8:
				if(*money >= gift6price && *gift6inv != 1)
				{
					Buy(gift6price, money, gift6inv);
					printf("\"Thank you for your purchase!\"\n");
					Pause();
				}
				else
				{
					printf("\"I'm afraid you cannot get that item.\"\n");
					Pause();
				}
					Pause();
		break;
		
		case 9:
				if(*money >= gift7price && *gift7inv != 1)
				{
					Buy(gift7price, money, gift7inv);
					printf("\"Thank you for your purchase!\"\n");
					Pause();
				}
				else
				{
					printf("\"I'm afraid you cannot get that item.\"\n");
					Pause();
				}
					Pause();
		break;
		
		case 10:
				if(*money >= gift8price && *gift8inv != 1)
				{
					Buy(gift8price, money, gift8inv);
					printf("\"Thank you for your purchase!\"\n");
					Pause();
				}
				else
				{
					printf("\"I'm afraid you cannot get that item.\"\n");
					Pause();
				}
					Pause();
		break;
	}

}



int GiftStartPrices(int *gift1price, int *gift2price, int *gift3price, int *gift4price, int *gift5price, 
					int *gift6price, int *gift7price, int *gift8price, int giftpricemin, int giftpricemax)
{
    *gift1price = giftpricemin +rand()%(giftpricemax + 1 - giftpricemin);
    *gift2price = giftpricemin +rand()%(giftpricemax + 1 - giftpricemin);
    *gift3price = giftpricemin +rand()%(giftpricemax + 1 - giftpricemin);
    *gift4price = giftpricemin +rand()%(giftpricemax + 1 - giftpricemin);
    *gift5price = giftpricemin +rand()%(giftpricemax + 1 - giftpricemin);
    *gift6price = giftpricemin +rand()%(giftpricemax + 1 - giftpricemin);
    *gift7price = giftpricemin +rand()%(giftpricemax + 1 - giftpricemin);
    *gift8price = giftpricemin +rand()%(giftpricemax + 1 - giftpricemin);
}



int ShopMenu(int gift1price, int gift2price, int gift3price, int gift4price, int gift5price, int gift6price, int gift7price,
			 int gift8price, int giftpricemin, int *money, int *isKthere, int *gift1inv, int *gift2inv, int *gift3inv, int *gift4inv, 
			 int *gift5inv, int *gift6inv, int *gift7inv,int *gift8inv, int *potioncount,int *armorcheck, int *timecount, int *armorclass)
{
	
    int buychoice;
    int kbuychoice;
    
	system("cls");
	printf("-------------------------------------------------------------------------------------------------\n");
    printf("A tall Leonin stands that the other side of the counter and welcomes you in his shop.\n");
    printf("\"Excelsior: What'll it be?\"\n");
    printf("Items:\n");
    printf("[1]Health Potion \t\t10 Gold\n");
    printf("[2]Iron Breastplate\t\t40 Gold\n");
    printf("Gift Items:\n");
    printf("[3]Painting Set\t\t\t%d\t%d\n", gift1price, *gift1inv);
    printf("[4]Pocket Watch\t\t\t%d\t%d\n", gift2price, *gift2inv);
    printf("[5]Polished Brooch\t\t%d\t%d\n", gift3price, *gift3inv);
    printf("[6]Mirror\t\t\t%d\t%d\n", gift4price, *gift4inv);
    printf("[7]Vogue Clothes\t\t%d\t%d\n", gift5price, *gift5inv);
    printf("[8]Hourglass\t\t\t%d\t%d\n", gift6price, *gift6inv);
    printf("[9]Horn Ring\t\t\t%d\t%d\n", gift7price, *gift7inv);
    printf("[10]Bandana\t\t\t%d\t%d\n\n", gift8price, *gift8inv);
	printf("Gold: %d\n\n", *money);

	    if(*isKthere >= 50)
	    {
	        printf("[11]You hear the bustle and hustle of the workshop. Kaiden may be able to help you with your gifts.\n");
	    }
	    else
	    {
	        printf("The workshop seems silent. It seems Kaiden is not here.\n");
	    }
    
    printf("[12]Back\n");
    scanf("%d", &buychoice);
    
		if(buychoice == 11 && *isKthere >= 50)
		{
			printf("\"Kaiden: Oh! You're here, if I can help with making anything I can give it to you.\"\n");
			printf("All gift items are 20 Gold, you may choose an item\n");
			scanf("%d", &kbuychoice);
			ShopBuying(giftpricemin, giftpricemin, giftpricemin, giftpricemin, giftpricemin, giftpricemin, giftpricemin, giftpricemin, potioncount, 
						armorcheck, gift1inv, gift2inv, gift3inv, gift4inv, gift5inv, gift6inv, gift7inv, gift8inv, kbuychoice, money, armorclass);
		}
		
	
		if(buychoice != 12 && buychoice != 11)
		{	
			*timecount = *timecount + 1;
		}
		
		if(buychoice == 12)
		{	
			printf("You leave the shop.\n");
			Pause();Pause();
		}
		
return buychoice;
}



int ExploreChoice(int *timecount)
{
    int explorechoice;
    
	printf("-------------------------------------------------------------------------------------------------\n");
	Time(timecount);
	printf("\n");
    printf("Where would you like to go?");
    printf("\n");
    printf("[1]Church\n");	
	printf("[2]Casino\n");
	printf("[3]Guild\n");
	printf("[4]Hotel\n");
    printf("[5]Shop\n");
    printf("[6]Back\n");
    scanf("%d", &explorechoice);


		if(*timecount >= 3)
	    	{	
	    		while(explorechoice == 1)
	    		{
	    		printf("The church is closed at this hour, you may come again tomorrow\n");
	    		scanf("%d", &explorechoice);
	    		}
			}
			
		if(*timecount == 1 || *timecount == 2)
		{	
			while(explorechoice == 2)
			{
			printf("The casino is closed at this hour, you may come in the evening\n");
			scanf("%d", &explorechoice);
			}
		}
		
		while(explorechoice > 6 || explorechoice < 1)
		{
			printf("Please Enter Correct Choice\n");
			scanf("%d", &explorechoice);	
		}
				
		return explorechoice;
}	



int Church(int *strength, int *constitution, int *wisdom, int *charisma, int *money, int *timecount, 
			int *player_health, int *player_healthmax, int *tempstat1, int *tempstat2)
{	
	
	int church;
	
	system("cls");
	printf("-------------------------------------------------------------------------------------------------\n");
	printf("You hear the echoes of the church surround you and you see a little girl walking towards you.\n");
	printf("\"E'rishi: Hi... Would you like to have blessings for a day?.. its 10 gold.\"\n");
	printf("[1]Strength Blessing\n");
	printf("[2]Constitution Blessing\n");
	printf("[3]Wisdom Blessing\n");
	printf("[4]Charsima Blessing\n");
	printf("[5]Leave\n");
	printf("\n");
	printf("Gold: %d\n\n", *money);
	scanf("%d", &church);
	
	
		while(church < 1 || church > 5)
		{
			printf("Please Enter Correct Choice\n");
			scanf("%d", &church);
		}

	
			if (*money < 10)
			{
				printf("\"E'rishi: Sorry... you don't have enough gold..\"\n");
			}
			
			if (*money < 0)
			{
				*money = 0;
			}
			
			if (church == 5)
			{
				printf("\"E'rishi: Bye...\"\n");
			}
			
			else if(*money >= 10)
			{
				*money = *money - 10;
				printf("\"E'rishi: Thank you for your contribution...\"\n");
			
			
					switch(church)
					{
						case 1:	
								if(*timecount == 1)
								{
									*tempstat1 = 1;
								}
								if(*timecount == 2)
								{
									*tempstat2 = 1;
								}
								*strength = *strength + 1;		
						break;
						
						case 2:
								if(*timecount == 1)
								{
									*tempstat1 = 2;
								}
								if(*timecount == 2)
								{
									*tempstat2 = 2;
								}
								*constitution = *constitution + 1;
								*player_healthmax = *player_healthmax + 20;
								*player_health = *player_healthmax;
						break;
						
						case 3:
								if(*timecount == 1)
								{
									*tempstat1 = 3;
								}
								if(*timecount == 2)
								{
									*tempstat2 = 3;
								}
								*wisdom = *wisdom + 1;
						break;
						
						case 4:
								if(*timecount == 1)
								{
									*tempstat1 = 4;
								}
								if(*timecount == 2)
								{
									*tempstat2 = 4;
								}
								*charisma = *charisma + 1;
						break;	
					}
					
	
			if(church >= 1 || church <= 4)
			{
				*timecount = *timecount + 1;
			}
			else
			{
			}
			
			printf("\n");
			printf("Gold: %d\n\n", *money);
	}	
		
}



int Casino()
{	
	
	int casino;
	
	system("cls");
	printf("-------------------------------------------------------------------------------------------------\n");
	printf("It looks like the casino is alive and busy.\n");
	printf("\"Atsa: Hey there, would you like to try your luck?\"\n");
	printf("[1]Gamble\n");
	printf("[2]Leave\n");
	scanf("%d", &casino);
	
	
		while(casino < 1 || casino > 2)
		{
			printf("Please Enter Correct Choice\n");
			scanf("%d", &casino);	
		}
			
		return casino;
}



int Gamble(int *money, int *timecount, int *wisdom)
{
	int emptymodifier = 0;
	int dice;
	int moneygive;
	int diceroll;
	int moneydisplay;
	
	printf("How much gold will you gamble?\n");
	printf("\n");
	printf("Gold: %d\n\n", *money);
	scanf("%d", &moneygive);
	
	
		while (*money < moneygive || *money == 0 || moneygive == 0)
		{
			printf("\"Atsa: Looks like you don't have any gold, sorry pal no can do.\"\n");
			scanf("%d", &moneygive);
		}
	
	
		*money = *money - moneygive;
		
		if (*money <! 0)
		{
			*money = 0;
		}
	
	printf("\n");
	printf("Gold: %d\n\n", *money);
	printf("\"Atsa: Roll your dice and lets see how good your luck is HAHAHA.\"\n");
	printf("[1]Roll Dice\n");
	scanf("%d", &dice);
	
	
		diceroll = DiceRolling(*wisdom);
		
		if (dice == 1)
		{
		printf("\"You rolled a %d\"\n", diceroll);
	 	}

	
	
		if (diceroll <= 14)
		{
			printf("Too bad you don't get anything, you lose!\n");
			*timecount = *timecount + 1;
		}
		
		else if (diceroll >= 15)
		{
			*money = moneygive + moneygive + *money;
			printf("Ah dang, alright here you go you win..you get %d gold\n", moneygive + moneygive);
			*timecount = *timecount + 1;
		}
		
	
	printf("\n");
	printf("Gold: %d\n\n", *money);
	

	while(dice < 1 || dice > 1)
	{
		printf("Please Enter Correct Choice\n");
		scanf("%d", &dice);	
	}

}


int Guild(int *player_health)
{	
	
	int guild;
	int commission;
	
	system("cls");
	printf("-------------------------------------------------------------------------------------------------\n");
	printf("You see a short Tabaxi\n");
	printf("\"Sho: Do commission and get gold hm?\"\n");;
	printf("[1]Take Commission\n");
	printf("[2]Leave\n");
	scanf("%d", &guild);
	
		while(guild < 1 || guild > 2)
		{
			printf("Please Enter Correct Choice\n");
			scanf("%d", &guild);
		}	
		
		while(guild == 1 && *player_health <= 10)
		{
			printf("\"Sho: you can't go and take a commission you're injured\"\n");
			scanf("%d", &guild);
		}
		
		return guild;	
}


int Commission()
{
	int commission;
	
	printf("-------------------------------------------------------------------------------------------------\n");
	printf("\"Sho: More gold, the harder the commission *meow* \"\n");
	printf("[1]30 gold commission\n");
	printf("[2]60 gold commission\n");
	printf("[3]100 gold commission\n");
	printf("[4]Leave\n");
	scanf("%d", &commission);
	
		while(commission < 1 || commission > 4)
	{
		printf("Please Enter Correct Choice\n");
		scanf("%d", &commission);
	}
		
}



int Hotel(int *timecount)
{	
	
	int hotel;
	
	system("cls");
	if(*timecount == 1)
	{
		printf("-------------------------------------------------------------------------------------------------\n");
		printf("You see 2 out of 4 friends sitting from the table\n");
		printf("[1]Talk to Aisha\n");
		printf("[2]Talk to Vincent\n");	
		printf("[5]Leave\n");
		scanf("%d", &hotel);
		
		while(hotel < 1 || hotel == 3 || hotel == 4 || hotel > 5)
		{
				printf("Please Enter Correct Choice\n");
				scanf("%d", &hotel);	
		}
	}
	
	
	else if(*timecount == 2)
	{
		printf("-------------------------------------------------------------------------------------------------\n");
		printf("You see 2 out of 4 friends sitting from the table\n");	
		printf("[3]Talk to Draken\n");
		printf("[4]Talk to Faine\n");
		printf("[5]Leave\n");
		scanf("%d", &hotel);
		
		while(hotel < 3 || hotel > 5)
		{
				printf("Please Enter Correct Choice\n");
				scanf("%d", &hotel);	
		}
		
	}
	
	
	else if(*timecount == 3)
	{
		printf("-------------------------------------------------------------------------------------------------\n");
		printf("You see all your friends sitting from the table\n");
		printf("[1]Talk to Aisha\n");
		printf("[2]Talk to Vincent\n");
		printf("[3]Talk to Draken\n");
		printf("[4]Talk to Faine\n");
		printf("[5]Leave\n");
		scanf("%d", &hotel);
		
		
		
		while(hotel < 1 || hotel > 5)
		{
				printf("Please Enter Correct Choice\n");
				scanf("%d", &hotel);	
		}
	}	
	

	return hotel;

}




int LongRest(int *daycount, int *player_health, int *player_healthmax,int *strength, int *constitution, int *wisdom, int *charisma, int *tempstat1, int *tempstat2)
{
		if(*tempstat1 != 0)
		{	
			if(*tempstat1 == 1)
			{
			*strength = *strength - 1;	
			}		
			else if(*tempstat1 == 2)
			{
			*constitution = *constitution - 1;
			*player_healthmax = *player_healthmax - 20;	
			*player_health = *player_healthmax;
			}		
			else if(*tempstat1 == 3)
			{
			*wisdom = *wisdom - 1;	
			}				
			else if(*tempstat1 == 4)
			{
			*charisma = *charisma - 1;	
			}	
			*tempstat1 = 0;
		}
		
		if(*tempstat2 != 0)
		{
			
			if(*tempstat2 == 1)
			{
			*strength = *strength - 1;	
			}		
			else if(*tempstat2 == 2)
			{
			*constitution = *constitution - 1;
			*player_healthmax = *player_healthmax - 20;	
			*player_health = *player_healthmax;
			}		
			else if(*tempstat2 == 3)
			{
			*wisdom = *wisdom - 1;	
			}				
			else if(*tempstat2 == 4)
			{
			*charisma = *charisma - 1;	
			}	
			*tempstat2 = 0;
		}
		
		if(*player_health < *player_healthmax)
		{
		*player_health = *player_healthmax;
		}
		
	*daycount = *daycount - 1;	
	printf("-------------------------------------------------------------------------------------------------\n");	
	printf("You take a long rest\n");
	printf("All blessings have left your body.\n");
	printf("Full Health Restored!\n");
		
	
}



int Time(int *timecount, int *daycount)
{
	
	int gamechoice;
	
	
	if (*timecount == 1)
	{
		printf("Morning\n");
	}
	else if (*timecount == 2)
	{
		printf("Afternoon\n");
	}
	else if (*timecount == 3)
	{
		printf("Evening\n");
	}
	else
	{
		printf("Late Evening\n");
	}
	
	
	
}

int GameChoice(int gamechoice, int *player_health, int *player_healthmax ,int *money, int *strength, int *wisdom, int *constitution, int *charisma,
                int gift1price, int gift2price, int gift3price, int gift4price, int gift5price, int gift6price, int gift7price, int gift8price, int giftpricemin, 
				int *potioncount, int *armorcheck, int *gift1inv, int *gift2inv, int *gift3inv, int *gift4inv, int *gift5inv, int *gift6inv, 
				int *gift7inv, int *gift8inv, int *daycount, int *timecount, int *bossroll, int *bosskey, int *tempstat1, int *tempstat2, int *armorclass)
{
	int emptymodifier = 0;
    int explorechoice;
	int shopchoice;
	int commission;
	int isKThere;
	int casino;
	int hotel;
	int guild;
	int talk;
	
			switch(gamechoice)
		    {
		        case 1:
		        explorechoice = ExploreChoice(timecount);
			            switch(explorechoice)
			            {
			                case 1:
			                	UnlockBoss(bossroll, bosskey, wisdom);
			                    Church(strength, constitution, wisdom, charisma, money, timecount, player_health, player_healthmax, tempstat1, tempstat2);
			                    Pause();Pause();
			                break;
			                
			                case 2: 
			              	 	UnlockBoss(bossroll, bosskey, wisdom);
			                	casino = Casino();
				                	switch(casino)
				                	{
				                		case 1:
				                			Gamble(money, timecount, wisdom);
				                			Pause();Pause();
				                		break;
				                		
				                		case 2:
				                			printf("\"Atsa: Come again next time!\"\n");
				                			Pause();Pause();
				                		break;
									}
							break;
							
			                case 3: 
			              		UnlockBoss(bossroll, bosskey, wisdom);
			                	guild = Guild(player_health);
				                	switch(guild)
				                	{
				                		case 1:
				                			commission = Commission();
					                			switch(commission)
					                			{
							                			case 1:
							                			Fight1(timecount, player_health, money, player_healthmax, potioncount, strength, armorclass);
							                			Pause();Pause();
							                			break;
							                		
							                			case 2:
							                			Fight2(timecount, player_health, money, player_healthmax, potioncount, strength, armorclass);
							                			Pause();Pause();
							                			break;
							                		
							                			case 3:
							                			Fight3(timecount, player_health, money, player_healthmax, potioncount, strength, armorclass);
							                			Pause();Pause();
							                			break;
							                			
							                			case 4:
							                			printf("\"Sho: *meow*\"\n");
							                			Pause();Pause();
							                			break;
												}
			                			break;
			                			
				                		case 2:
				                			printf("\"Sho: hm ok. bye\"\n");
				                			Pause();Pause();
				                		break;
									}
			                	
							break;
							
			                case 4:
			                	UnlockBoss(bossroll, bosskey, wisdom);
			                	hotel = Hotel(timecount);
				                	switch(hotel)
				                	{
				                		case 1:
				                			Aisha(timecount, charisma);
				                			Pause();Pause();
				                		break;
				                		
				                		case 2:
				                			Vincent(timecount, charisma);
				                			Pause();Pause();		
				                		break;
				                		
				                		case 3:
				                			Draken(timecount, charisma);
				                			Pause();Pause();	
				                		break;
				                		
				                		case 4:
				                			Faine(timecount, charisma);
				                			Pause();Pause();	
				                		break;
				                		
				                		case 5:
				                			printf("You leave the hotel.\n");
				                			Pause();Pause();	
				                		break;
				                	}
							break;
							
			                case 5:
				               	UnlockBoss(bossroll,bosskey,wisdom);
								isKThere = 1 + rand()%100;
								while(shopchoice != 12)
								{
									shopchoice = ShopMenu(gift1price, gift2price, gift3price, gift4price, gift5price, gift6price, gift7price, 
															gift8price, giftpricemin, money, &isKThere, gift1inv, gift2inv, gift3inv, gift4inv,
															gift5inv, gift6inv, gift7inv, gift8inv, potioncount, armorcheck, timecount, armorclass);
									if(shopchoice == 11 && isKThere >= 50)
									{
										isKThere = 0;
										printf("Kaiden leaves the shop to tend to other things. He may return tommorow.");
										Pause();
									}
									else
									{
										ShopBuying(gift1price, gift2price, gift3price, gift4price, gift5price, gift6price, gift7price,
										 			gift8price, potioncount, armorcheck, gift1inv, gift2inv, gift3inv, gift4inv, gift5inv, 
													gift6inv, gift7inv, gift8inv, shopchoice, money, armorclass);
									}
								}
			                break;
			                
			                case 6:
			                	
			                break;
		            	}
		       	break;
		
		        case 2:
		            DisplayStats(player_health, player_healthmax, money, strength, wisdom, constitution, charisma, armorclass); 
		            Inventory(potioncount, armorcheck, gift1inv, gift2inv, gift3inv, gift4inv, gift5inv, 
								gift6inv, gift7inv, gift8inv, player_health, player_healthmax, armorclass);
		            Pause();Pause();  
		        break;
		        
		        case 3: 
					LongRest(daycount, player_health, player_healthmax, strength, constitution, wisdom, charisma, tempstat1, tempstat2);
					*timecount = 1;
					Pause();
				break;
				
		        case 4:
		        	printf("-------------------------------------------------------------------------------------------------\n");	
					printf("\"You rolled a %d\"\n", DiceRolling(emptymodifier));
					Pause();
		        break;     
		    }
    
}



int StartHealth(int *player_health, int *player_healthmax, int *constitution)
{
	
	if (*constitution)
	{
		*player_health = 120;
		*player_healthmax = 120;
	}
	
	else 
	{
		*player_health = 100;
		*player_healthmax = 100;
	}
	
}


int DisplayStats(int *player_health, int *player_healthmax ,int *money, int *strength, int *wisdom, int *constitution, int *charisma, int *armorclass)
			
{
	printf("-------------------------------------------------------------------------------------------------\n");
	printf("AC: %d\n", *armorclass);
	printf("Health: %d/%d\n", *player_health, *player_healthmax);
	printf("Gold: %d\n", *money);
	printf("\n");
	printf("Strength: %d\n", *strength);
	printf("Wisdom: %d\n", *wisdom);
	printf("Constitution: %d\n", *constitution);
	printf("Charisma: %d\n", *charisma);

}


int Inventory(int *potioncount, int *armorcheck, int *gift1inv, int *gift2inv, int *gift3inv, int *gift4inv, int *gift5inv, 
				int *gift6inv, int *gift7inv, int *gift8inv, int *player_health, int *player_healthmax, int *armorclass)
{
	
	int use;
	
	printf("\n");
		if(*armorcheck == 1)
		{
		printf("Armor: Equipped\n");
		}
		else
		{
		printf("Armor: None\n");
		}
	printf("Health potion: %d\n", *potioncount);
	printf("[1]Use Health potion\n");
	printf("[2]Back\n");
	
	printf("\n");
	printf("Items:\n");
		if(*gift1inv == 1)
		{
		printf("Painting Set\n");
		}
		if(*gift2inv == 1)
		{
		printf("Pocket Watch\n");
		}
		if(*gift3inv == 1)
		{
		printf("Polished Brooch\n");
		}
		if(*gift4inv == 1)
		{
		printf("Mirror\n");
		}
		if(*gift5inv == 1)
		{
		printf("Vogue Clothes\n");
		}
		if(*gift6inv == 1)
		{
		printf("Hourglass\n");
		}
		if(*gift7inv == 1)
		{
		printf("Horn Ring\n");
		}
		if(*gift8inv == 1)
		{
		printf("Bandana\n");
		}
	
	
	
	scanf("%d", &use);
	if(use == 1) 
	{
		if(*potioncount > 0 && *player_health < *player_healthmax)
		{
		*potioncount = 	*potioncount - 1;
		*player_health = *player_health + 20;
		if(*player_health > *player_healthmax)
		{
		*player_health = *player_healthmax;
		}
		printf("Potion used!\n");
		}
		else if (*potioncount <= 0)
		{
		printf("You don't have any Health potions anymore\n");
		}
		
		else if(*player_health >= *player_healthmax)
		{
		printf("Your Health is full!\n");
		}
	}
	else
	{
	}
	
	
		while(use < 1 || use > 2)
		{
			printf("Please Enter Correct Choice\n");
			scanf("%d", &use);	
		}


}



int UnlockBoss(int *bossroll, int *bosskey, int *wisdom)
{
	int emptymodifier = 0;
	int boss;
	
	if(*bosskey  <= 3)
	{
		system("cls");
		*bossroll = DiceRolling(*wisdom);
	
			if(*bossroll <= 17)
			{
			printf("%d (...)\n",*bossroll);
			}
			
			if(*bossroll >= 18)
			{
			printf("%d (You see something slithering...it doesn't matter)\n", *bossroll);
			*bosskey = *bosskey + 1;
			printf("%d",*bosskey);
			}
			Pause();Pause();
	}	
	
	else
	{	
	}
		
}



int BossFight(int *enemyboss, int *player_health, int *player_healthmax, int *potioncount, int *strength, int *armorclass)
{
	int attack;
	int enemyattack = 0;
	int diceroll;
	int enemydiceroll = 0;
	int damage = 0;
	int modifier = 3;
	int enemy_healthmin = 200;
	int enemy_healthmax = 500;
	*enemyboss = 0;
	*enemyboss = enemy_healthmin +rand()%(enemy_healthmax + 1 - enemy_healthmin);
 	int enemy_healthdisplay = *enemyboss;

	while(*enemyboss > 0 && *player_health > 0 && attack != 4 )
	{
	system("cls");
	printf("-------------------------------------------------------------------------------------------------\n");
	printf("A wild thang is disturbing the area\n");
	printf("Health: %d/%d\t\t\t\t\t\tBoss Health: %d/%d\n",*player_health,*player_healthmax,*enemyboss,enemy_healthdisplay);
	printf("[1]Attack\t\t\t\t\t\tAttack: %d\n",enemydiceroll);									
	printf("[2]HeavyAttack\t\t\t\t\t\tDamage: %d\n", enemyattack);
	printf("[3]Use health potion\n");
	printf("[4]Flee\n");
	printf("Health potion: %d\n", *potioncount);
	scanf("%d", &attack);
	
	
	while(attack < 1 || attack > 4)
	{
		printf("Please Enter Correct Choice\n");
		scanf("%d", &attack);
	}
	
			switch(attack)
			{
				case 1:
						diceroll = DiceRolling(*strength);
						damage = 1 + rand()%20;
						printf("Attack: %d\n", diceroll);
						printf("Damage: %d\n", damage);
						
						if(diceroll >= 1)
						{	
							printf("You hit!\n");
							*enemyboss = *enemyboss - damage;
						}
						else
						{
							printf("You missed!\n");
						}	
				break;
				
				case 2:
						diceroll = DiceRolling(*strength);
						damage = 5 + rand()%20;
						printf("Attack: %d\n", diceroll);
						printf("Damage: %d\n", damage);
						
						if(diceroll >= 17)
						{	
							printf("You hit!\n");
							*enemyboss = *enemyboss - damage;
						}
						else
						{
							printf("You missed!\n");
						}	
				break;
				
				case 3:
						if(*potioncount <= 0)
						{
							printf("You don't have health potions anymore!\n");
						}
						else if(*potioncount > 0 && *player_health < *player_healthmax)
						{
							*player_health = *player_health + 20;
							if(*player_health > *player_healthmax)
							{
								*player_health = *player_healthmax;
							}
							*potioncount = *potioncount - 1;
							printf("Health potion used!\n");
						}
						else if(*player_health >= *player_healthmax)
						{
						printf("Your Health is full!\n");
						}
				break;
			}
	
	
			if(attack == 1 || attack == 2)
			{
				printf("\n");
				printf("Your friends help you!\n");
				damage = 1 + rand()%20;
				printf("Damage: %d\n", damage);
				*enemyboss = *enemyboss - damage;
				Pause();Pause();
				
			}
		
			if(attack == 3 && *potioncount != 0 || attack == 1 || attack == 2)
			{
				enemydiceroll = DiceRolling(modifier);
				enemyattack = 6 + rand()%20;
				
				if(enemydiceroll >= *armorclass)
				{	
					*player_health = *player_health - enemyattack;
					printf("\n");
					printf("The Boss hits you! for...\n");
					Pause();Pause();
				}
				else
				{
					printf("\n");
					printf("The Boss misses you!\n");
					Pause();Pause();
				}		
			}				
		
	}

	system("cls");
	if(*enemyboss <= 0)
	{
	*enemyboss = 0;
	}
		
	else if(*player_health <= 0)
	{
	*player_health = 0;
	}
	Pause();		
	
}
	
	


int main()
{
	int start_choice;
	int game_choice;
    int explore_choice;
	int money = 15;
    int potioncount = 0, armorcheck = 0;
    int gift1 = 0, gift2 = 0, gift3 = 0, gift4 = 0, gift5 = 0, gift6=  0, gift7 = 0, gift8 = 0;
    int gift1price, gift2price, gift3price, gift4price, gift5price, gift6price, gift7price, gift8price;
    int giftpricemin = 20;
    int giftpricemax = 50;
	int player_health = 0;
	int player_healthmax = 0;
	int other_health = 0;
	int other_healthmax = 0;
	int armorclass = 14;
	int wisdom = 0;
	int strength = 0;
	int charisma = 0;
	int constitution = 0;
	int tempstat1 = 0;
	int tempstat2 = 0;
	int daycount = 7;
	int timecount = 1;
    int bossroll = 0;
    int bosskey = 0;
    int enemyboss = 10;
    int boss;
    int give, give1 = 0, give2 = 0, give3 = 0, give4 = 0;
    
	/*Initialize a random sequence based on time*/
    time_t t;
    srand(time(NULL));
	
	start_choice = MainMenu();
		if (start_choice !=2)
		{
			Intro();
			ClassChoice(&wisdom, &charisma, &strength, &constitution);
            GiftStartPrices(&gift1price, &gift2price, &gift3price, &gift4price, &gift5price, &gift6price, &gift7price, &gift8price, giftpricemin, giftpricemax);
            StartHealth(&player_health, &player_healthmax, &constitution);
		
		
				while(game_choice != 5 && daycount != 0 && enemyboss != 0 && player_health != 0)
				{
					game_choice = GameMenu(&daycount, &timecount);
					Pause();
					GameChoice(game_choice, &player_health, &player_healthmax, &money, &strength, &wisdom, &constitution, &charisma, gift1price, 
								gift2price, gift3price, gift4price, gift5price, gift6price, gift7price, gift8price, giftpricemin, &potioncount, 
								&armorcheck, &gift1, &gift2, &gift3, &gift4, &gift5, &gift6, &gift7, &gift8, &daycount, &timecount, &bossroll, 
								&bosskey, &tempstat1, &tempstat2, &armorclass);
								
								
							if(daycount == 0)
							{
							system("cls");
							printf("%d Day/s left in Wendelyn\n",daycount);
							printf("You spent a week in Wendelyn, getting gifts for your friends...getting gold from commissions or\n");
							Pause();
							printf("even trying out to gamble in the casino...even instances of seeing something \"unusual\" \n");
							Pause();
							printf("But all is well and now is the time to give your gifts to your friends.\n");
							Pause();Pause();
							
								while(give1 != 1 || give2 != 2 || give3 != 3 || give4 != 4)
								{
								system("cls");
								printf("Give Gifts!\n");
								printf("[1]Aisha\n");
								printf("[2]Vincent\n");
								printf("[3]Draken\n");
								printf("[4]Faine\n");
								scanf("%d", &give);
								
								
							
							
									while(give < 1 || give > 5)
									{
										printf("Please Enter Correct Choice\n");
										scanf("%d", &give);
									}
								
									
											if(give == 1 && give1 != 1)
											{
												if(gift3 == 1)
												{
												printf("Aisha: Oh my! Where'd you even find this, I was lookin' everywhere for it!\n");
												printf("Oh thank you! I'll treasure this!\n");
												}
												else if(gift4 == 1)
												{
												printf("Aisha: Oh well, at least you tried!\n");
												}
												else
												{
												printf("You didn't buy any gift\n");
												}
												give1 = 1;
											
												Pause();Pause();
											}
									
											else if(give == 2 && give2 != 2)
											{
												if(gift2 == 1)
												{
												printf("Vincent: You got me a new pocket watch! And one to replace to the old one too.\n");
												printf("Thank you! I truly do appreciate this gift, and your company.\n");
												}
												else if(gift1 == 1)
												{
												printf("Vincent: Oh... um. Thank you for this... I guess.\n");
												}
												else
												{
												printf("You didn't buy any gift\n");
												}
												give2 = 2;
												Pause();Pause();
											}
											
											else if(give == 3 && give3 != 3)
											{
												if(gift5 == 1)
												{
												printf("Draken: Oh my! These clothes shows the elegance and ambiguity in one's presence\n");
												printf("which is quite exquisite. Thank you for this!, I should let you pick out my clothes more.\n");
												}
												else if(gift8 == 1)
												{
												printf("Draken: A gift is a gift I suppose. Though really you should have gotten me something less gaudy.\n");
												}
												else
												{
												printf("You didn't buy any gift\n");
												}
												give3 = 3;
												Pause();Pause();
											}
											
											else if(give == 4 && give4 != 4)
											{
												if(gift7 == 1)
												{
												printf("Faine: Thanks a bunch! I was lookin' to replace some of my decorative pieces on me horn, which means\n");
												printf("a lot considerin' what these accessories mean. I appreciate it.\n");
												}
												else if(gift6 == 1)
												{
												printf("Faine: Um... What am I supposed to do with this.\n");
												}
												else
												{
												printf("You didn't buy any gift\n");
												}
												give4 = 4;
												Pause();Pause();
											}
											
											else
											{
												printf("you already gave a gift.\n");
												Pause();Pause();
											
												while(give < 1 || give > 4)
												{
													printf("Please Enter Correct Choice\n");
													scanf("%d", &give);
												}	
											}
								}
									
								
	
									if(gift2 == 1 && gift3 == 1 && gift5 == 1 && gift7 == 1)
									{
									system("cls");
									printf("You successfully gave the correct gifts!\n");
									printf("Your friends are satisfied and they will treasure the gifts that you gave to them.\n");
									printf("You and your friends happily celebrate the winter solstice in Wendelyn.\n");
									printf("TRUE ENDING\n");		
									}
									if(gift1 == 0 && gift2 == 0 && gift3 == 0 && gift4 == 0 && gift5 == 0 && gift6 == 0 && gift7 == 0 && gift8 == 0)
									{
									system("cls");
									printf("You didn't buy any gifts at all\n");
									printf("But you and your friends celebrate the winter solstice in Wendelyn.\n");
									printf("END\n");				
									}
									else 
									{
									system("cls");
									printf("Unfortunately some of the gifts you gave were incorrect...or you didn't buy any gifts for the others\n");
									printf("But you and your friends celebrate the winter solstice in Wendelyn.\n");
									printf("END\n");			
									}
								
							}

	
							if(bosskey == 3)
							{
								system("cls");
								printf("You unlock the Boss Fight!\n");
								printf("continue?...\n");
								printf("[1]Yes\n");
								printf("[2]No\n");
								printf("you wont see this again.\n");
								printf("you can't go back once you opt for it.\n");
								scanf("%d",&boss);
							
							
									while(boss < 1 || boss > 2)
									{
										printf("Please Enter Correct Choice");
									}
									
									
										if(boss == 1)
										{
											while(enemyboss > 0 && player_health > 0)
											{
											BossFight(&enemyboss, &player_health, &player_healthmax, &potioncount, &strength, &armorclass);
											}
										}
										else if (boss == 2)
										{
											bosskey = bosskey + 1;
										}	
										
										if(enemyboss == 0)
										{
										system("cls");
										printf("You defeated the boss! and the people of Wendelyn along with your friends are safe.\n");
										printf("Due to the destruction of the boss in the town, you aren't able to buy the gifts.\n");
										printf("But you are now labeled as the HERO of Wendelyn.\n");
										printf("BOSS ENDING\n");
										}
										else if(player_health == 0)
										{
										system("cls");
										printf("Unfortunately, you DIED.\n");
										printf("Your friends mourn your lose and the town of Wendelyn fell to its doom.\n");
										printf("BAD ENDING\n");
										}
							}
				}
		}	
}









