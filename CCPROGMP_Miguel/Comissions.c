#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <conio.h>
#include <time.h>



int Fight1(int *timecount, int *player_health, int *money, int *player_healthmax, int *potioncount, int *strength, int *armorclass)
{	
	
	int attack;
	int enemyattack = 0;
	int diceroll;
	int enemydiceroll = 0;
	int damage = 0;
	int emptymodifier = 0;
	int enemy_healthmin = 10;
	int enemy_healthmax = 20;
	int enemy_health = 0;
	enemy_health = enemy_healthmin +rand()%(enemy_healthmax + 1 - enemy_healthmin);
 	int enemy_healthdisplay = enemy_health;

	while(enemy_health > 0 && *player_health > 1 && attack != 4 )
	{
	system("cls");
	printf("-------------------------------------------------------------------------------------------------\n");
	printf("A wild thang is disturbing the area\n");
	printf("Health: %d/%d\t\t\t\t\t\tEnemy Health: %d/%d\n",*player_health,*player_healthmax,enemy_health,enemy_healthdisplay);
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
						
							if(diceroll >= 11)
							{	
								printf("You hit!\n");
								enemy_health = enemy_health - damage;
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
						
							if(diceroll >= 11)
							{	
								printf("You hit!\n");
								enemy_health = enemy_health - damage;
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
		
		
			if(attack == 3 && *potioncount != 0 && *player_health < *player_healthmax || attack == 1 || attack == 2)
			{
					enemydiceroll = DiceRolling(emptymodifier);
					enemyattack = 1 + rand()%20;
					
					if(enemydiceroll >= *armorclass)
					{	
						*player_health = *player_health - enemyattack;
						printf("\n");
						printf("The enemy hits you! for...\n");
					}
					else
					{
						printf("\n");
						printf("The enemy misses!\n");
					}		
			}	
					
			if(attack == 4)
			{
				printf("You run for your life.\n");
			}
			Pause();Pause();
			
	}

	system("cls");
	if(enemy_health <= 0)
	{
	enemy_health = 0;

	printf("-------------------------------------------------------------------------------------------------\n");
	printf("A wild thang is disturbing the area\n");
	printf("Health: %d/%d\t\t\t\t\t\tEnemy Health: %d/%d\n",*player_health,*player_healthmax,enemy_health,enemy_healthdisplay);
	printf("[1]Attack\t\t\t\t\t\tAttack: %d\n",enemydiceroll);									
	printf("[2]HeavyAttack\t\t\t\t\t\tDamage: %d\n", enemyattack);
	printf("[3]Use health potion\n");
	printf("[4]Flee\n");		
		
	
		printf("\n");
		printf("You killed it yey!\n");
		printf("You earn 30 gold!\n");
		Pause();
		printf("You go back to do your personal objective.\n");
		*money = *money + 30;
		*timecount = *timecount + 1;
	}
		
	if(*player_health <= 1 || *player_health <! 1)
	{
	*player_health = 1;
	printf("-------------------------------------------------------------------------------------------------\n");
	printf("A wild thang is disturbing the area\n");
	printf("Health: %d/%d\t\t\t\t\t\tEnemy Health: %d/%d\n",*player_health,*player_healthmax,enemy_health,enemy_healthdisplay);
	printf("[1]Attack\t\t\t\t\t\tAttack: %d\n",enemydiceroll);									
	printf("[2]HeavyAttack\t\t\t\t\t\tDamage: %d\n", enemyattack);
	printf("[3]Use health potion\n");
	printf("[4]Flee\n");
		
	printf("You flee, you're badly injured\n");
	*timecount = *timecount + 1;
	}
	Pause();		

}



int Fight2(int *timecount, int *player_health, int *money, int *player_healthmax, int *potioncount, int *strength, int *armorclass)
{
	int attack;
	int enemyattack = 0;
	int diceroll;
	int enemydiceroll = 0;
	int damage = 0;
	int emptymodifier = 0;
	int enemy_healthmin = 30;
	int enemy_healthmax = 60;
	int enemy_health = 0;
	enemy_health = enemy_healthmin +rand()%(enemy_healthmax + 1 - enemy_healthmin);
 	int enemy_healthdisplay = enemy_health;

	while(enemy_health > 0 && *player_health > 1 && attack != 4 )
	{
	system("cls");
	printf("-------------------------------------------------------------------------------------------------\n");
	printf("A wild thang is disturbing the area\n");
	printf("Health: %d/%d\t\t\t\t\t\tEnemy Health: %d/%d\n",*player_health,*player_healthmax,enemy_health,enemy_healthdisplay);
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
						damage = 3 + rand()%20;
						printf("Attack: %d\n", diceroll);
						printf("Damage: %d\n", damage);
						
						if(diceroll >= 14)
						{	
							printf("You hit!\n");
							enemy_health = enemy_health - damage;
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
						
						if(diceroll >= 14)
						{	
							printf("You hit!\n");
							enemy_health = enemy_health - damage;
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
		
			if(attack == 3 && *potioncount != 0 && *player_health < *player_healthmax || attack == 1 || attack == 2)
			{
					enemydiceroll = DiceRolling(emptymodifier);
					enemyattack = 1 + rand()%20;
					
					if(enemydiceroll >= *armorclass)
					{	
						*player_health = *player_health - enemyattack;
						printf("\n");
						printf("The enemy hits you! for...\n");
					}
					else
					{
						printf("\n");
						printf("The enemy misses!\n");
					}		
			}	
							
			if(attack == 4)
			{
				printf("You run for your life.\n");
			}
			Pause();Pause();	
	}


	system("cls");
	if(enemy_health <= 0)
	{
	enemy_health = 0;

	printf("-------------------------------------------------------------------------------------------------\n");
	printf("A wild thang is disturbing the area\n");
	printf("Health: %d/%d\t\t\t\t\t\tEnemy Health: %d/%d\n",*player_health,*player_healthmax,enemy_health,enemy_healthdisplay);
	printf("[1]Attack\t\t\t\t\t\tAttack: %d\n",enemydiceroll);									
	printf("[2]HeavyAttack\t\t\t\t\t\tDamage: %d\n", enemyattack);
	printf("[3]Use health potion\n");
	printf("[4]Flee\n");		
		
	
		printf("\n");
		printf("You killed it yey!\n");
		printf("You earn 60 gold!\n");
		Pause();
		printf("You go back to do your personal objective.\n");
		*money = *money + 60;
		*timecount = *timecount + 1;
	}
		
	if(*player_health <= 1 || *player_health <! 1)
	{
	*player_health = 1;
	printf("-------------------------------------------------------------------------------------------------\n");
	printf("A wild thang is disturbing the area\n");
	printf("Health: %d/%d\t\t\t\t\t\tEnemy Health: %d/%d\n",*player_health,*player_healthmax,enemy_health,enemy_healthdisplay);
	printf("[1]Attack\t\t\t\t\t\tAttack: %d\n",enemydiceroll);									
	printf("[2]HeavyAttack\t\t\t\t\t\tDamage: %d\n", enemyattack);
	printf("[3]Use health potion\n");
	printf("[4]Flee\n");
		
	printf("You flee, you're badly injured\n");
	*timecount = *timecount + 1;
	}
	Pause();		

}



int Fight3(int *timecount, int *player_health, int *money, int *player_healthmax, int *potioncount, int *strength, int *armorclass)
{
	int attack;
	int enemyattack = 0;
	int diceroll;
	int enemydiceroll = 0;
	int damage = 0;
	int emptymodifier = 0;
	int enemy_healthmin = 100;
	int enemy_healthmax = 200;
	int enemy_health = 0;
	enemy_health = enemy_healthmin +rand()%(enemy_healthmax + 1 - enemy_healthmin);
 	int enemy_healthdisplay = enemy_health;

	while(enemy_health > 0 && *player_health > 1 && attack != 4 )
	{
	system("cls");
	printf("-------------------------------------------------------------------------------------------------\n");
	printf("A wild thang is disturbing the area\n");
	printf("Health: %d/%d\t\t\t\t\t\tEnemy Health: %d/%d\n",*player_health,*player_healthmax,enemy_health,enemy_healthdisplay);
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
						
						if(diceroll >= 16)
						{	
							printf("You hit!\n");
							enemy_health = enemy_health - damage;
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
						
						if(diceroll >= 16)
						{	
							printf("You hit!\n");
							enemy_health = enemy_health - damage;
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
		
			if(attack == 3 && *potioncount != 0 && *player_health < *player_healthmax || attack == 1 || attack == 2)
			{
					enemydiceroll = DiceRolling(emptymodifier);
					enemyattack = 1 + rand()%20;
					
					if(enemydiceroll >= *armorclass)
					{	
						*player_health = *player_health - enemyattack;
						printf("\n");
						printf("The enemy hits you! for...\n");
					}
					else
					{
						printf("\n");
						printf("The enemy misses!\n");
					}		
			}	
					
			if(attack == 4)
			{
				printf("You run for your life.\n");
			}
			Pause();Pause();
		
	}

	system("cls");
	if(enemy_health <= 0)
	{
	enemy_health = 0;

	printf("-------------------------------------------------------------------------------------------------\n");
	printf("A wild thang is disturbing the area\n");
	printf("Health: %d/%d\t\t\t\t\t\tEnemy Health: %d/%d\n",*player_health,*player_healthmax,enemy_health,enemy_healthdisplay);
	printf("[1]Attack\t\t\t\t\t\tAttack: %d\n",enemydiceroll);									
	printf("[2]HeavyAttack\t\t\t\t\t\tDamage: %d\n", enemyattack);
	printf("[3]Use health potion\n");
	printf("[4]Flee\n");		
		
	
		printf("\n");
		printf("You killed it yey!\n");
		printf("You earn 100 gold!\n");
		Pause();
		printf("You go back to do your personal objective.\n");
		*money = *money + 100;
		*timecount = *timecount + 1;
	}
		
	if(*player_health <= 1 || *player_health <! 1)
	{
	*player_health = 1;
	printf("-------------------------------------------------------------------------------------------------\n");
	printf("A wild thang is disturbing the area\n");
	printf("Health: %d/%d\t\t\t\t\t\tEnemy Health: %d/%d\n",*player_health,*player_healthmax,enemy_health,enemy_healthdisplay);
	printf("[1]Attack\t\t\t\t\t\tAttack: %d\n",enemydiceroll);									
	printf("[2]HeavyAttack\t\t\t\t\t\tDamage: %d\n", enemyattack);
	printf("[3]Use health potion\n");
	printf("[4]Flee\n");
		
	printf("You flee, you're badly injured\n");
	*timecount = *timecount + 1;
	}
	Pause();		

}

