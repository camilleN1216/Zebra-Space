//file: theLabyrinth.ch
//final project

//declare

/*
int hpDosOne = 120
int hpDosTwo = 300;
int hpDosThree = 360;
int hpTresOne = 120;
int hpTresTwo = 85;
int hpTresThree = 150;
*/

//int
int hpMasterHand = 60;

//r1
int hpElmo = 120;
int hpRonMcDon = 120;
int hpCaillou = 300;
int hpBarney = 360;

//r2
int hpHellTower = 120;
int hpDeadBasil = 300;
int hpAlice = 360;

//r3
int hpUndyingB = 180;
int hpUndyingD = 400;
int hpAliceFinal = 520;


//gen stats
int groupHp = 30;
int turn = 1;
//battle choice
int bC;
int soda;
int sodaUse = 3;

//text
string_t uName; 
string_t dogName;
string_t cuzName;
string_t plotMap, mapDone, done, retry, choiceOne, choiceTwo, bigChoice, rIchII, rIIpI;

//setup
void setup(){
	//setup story
	printf("\nWhat's your name?\n");
	scanf("%s", &uName);
	printf("What's your dog's name?\n");
	scanf("%s", &dogName);
	printf("What about your cousin, what's their name?\n");
	scanf("%s", &cuzName);
	sleep(2);
	printf("Great! Your name is %s. Your dog's name is %s. Your cousin's name is %s.\n", uName, dogName, cuzName);
	sleep(4);
	
	//road map
	printf("Do you want to see the plot route road map? (Yes/No)\n");
	scanf("%s", &plotMap);
	if(plotMap != "Yes" && plotMap != "yes" && plotMap != "No" && plotMap != "no"){
		do{
			printf("\nSorry, that wasn't a valid response. Please answer.\n\n");
			scanf("%s", &choiceOne);
		}while(plotMap != "Yes" && plotMap != "yes" && plotMap != "No" && plotMap != "no");
	}
	if(plotMap == "Yes" || plotMap == "yes"){
		printf("\nYou chose to view the map.");
		printf("\n[insert map here]");
		sleep(10);
		printf("\n\nAre you done? (Yes/No)\n");
		scanf("%s", &mapDone);
		do{
			if(mapDone == "No" || mapDone == "no"){
				printf("Have another look!");
				printf("\n[insert map here]");
				sleep(10);
				printf("\n\nAre you done? (Yes/No)\n");
				scanf("%s", &mapDone);
			}
		}while(mapDone == "No" || mapDone == "no");
	}
	if (plotMap == "No" || plotMap == "no"){
		printf("\nYou chose not to view the map.");
	}
	sleep(4);
	printf("\nWell, let's start the story!\n\n");
}


//introduction
void intro(){
	
	
	//story start
	sleep(4);
	printf("You're %s, a normal kid in the normal town of SafetyVille.\n", uName);
	printf("One night while walking your dog with your cousin, the leash flies loose from your hand!\n");
	sleep(7);
	printf("You run after %s, following her down the street.\n", dogName);
	printf("However, you and %s soon slow as you get a good look at the building now replacing where the library used to be.\n\n", cuzName);
	sleep(8);
	printf("It looks like a giant warehouse with red blood oozing down the side, \nthe screams of the damned coming through its high windows and on the front is a sign.\n");
	sleep(8);
	printf("A horrible arrow, heart-piercingly sharp, sits below the display of it’s name that \nstrikes both fear and rage into all hearts of men...");
	sleep(8);
	printf("\nAMAZON.\n\n");
	sleep(2);
	
	printf("Your dog comes back to you, looking toward the warehouse. You turn to %s.\n", cuzName);
	sleep(6);
	printf("You say, ''She thinks someone is trapped in there, and that we need to go in and save them!''\n");
	sleep(6);
	printf("%s is confused for a moment, ''How do you know that?''\n", cuzName);
	sleep(3);
	printf("''I can speak dog,'' you say.\n");
	sleep(3);
	printf("''What?''\n");
	sleep(1);
	printf("''What?''\n");
	sleep(5);
	printf("''Whatever,'' %s says, ''We don't have time for that. Wanna go to Taco Bell?''\n", cuzName);
	sleep(6);
	
	//Choice 1
	printf("\nDo you...? \nGo to Taco Bell \nGo inside of the warehouse\n\n");
	scanf("%s", &choiceOne);
}



//"first" route
void routeOne(){
	if(choiceOne != "Go to Taco Bell" && choiceOne != "go to Taco Bell" && choiceOne != "go to taco bell" && choiceOne != "Go inside of the warehouse" && choiceOne != "go inside of the warehouse"){
		do{
			printf("\nSorry, that wasn't a valid response. Please answer.\n\n");
			scanf("%s", &choiceOne);
		}while(choiceOne != "Go to Taco Bell" && choiceOne != "go to Taco Bell" && choiceOne != "go to taco tell" && choiceOne != "Go inside of the warehouse" && choiceOne != "go inside of the warehouse");
	}
	if(choiceOne == "Go to Taco Bell" || choiceOne == "go to Taco Bell" || choiceOne == "go to taco bell"){
		printf("\nWith a tug on %s's leash, you and %s go to taco bell.\n", dogName, cuzName);
		sleep(4);
		printf("While you both eat tacos, the monsters and beasts from within the warehouse take over the world.\n");
		sleep(5);
		printf("A few actually come inside the taco bell. \nYou share some tacos with them and are best friends for the rest of your short life.\n");
		sleep(5);
		exit(1);
	}
}



//route 2
void routeIIendI(){
    sleep(3);
    printf("You, %s, %s, and Barney become co-rulers of Earth. \nYou fund the extermination of the boringness of the human race. \nSomehow, it's a lot less fun than you thought it would be. \nTHE END", cuzName, dogName);
    
}
void routeTwoUno(){
    printf("\n\nYou decided to lie and say you agree.");
    sleep(3);
    printf("Elmo nods and lets you pass. \n%s and %s give you weird looks as you all continue down the hallway.", dogName, cuzName);
    sleep(5);
    printf("''Don't worry,'' you tell them, ''I lied.'' \nJust as you speak, a menacing figure in red and yellow, walks out of the shadows.");
    sleep(4);
    printf("\nRonald McDonald speaks, ''Of course you would trick my friend from before, but you will not trick me!''");
    sleep(4);
    printf("\nYou tell him that you don't really care. \n''Then I will take your life!'' Ronald says, beginning his attack.");
    sleep(3);
    printf("BATTLE START\n\n");
    
    //[insert battle here]
    
    sleep(3);
    printf("''You have defeated me,'' Ronald says, ''You fought well.'' \n''Thanks I guess,'' %s responds. \n%s barks.", cuzName, dogName);
    sleep(3);
    printf("\n''Guess we should keep going,'' you say, going around the dead Ronald McDonald.");
    sleep(3);
    printf("\n\nAs the hallway gets darker and darker, you're nerves are set on edge. \nIt's damper and colder the further you go in. \nYou don't like the feeling creeping down your back.");
    sleep(5);
    printf("\nIn a bright flash of brilliant fire, a tall gigantic figure rises from its ashes. \nPurple scales shining and terrifying teeth bared in aggression.");
    sleep(3);
    printf("\nThe King of Mosters, Barney the Dinosaur, confronts your group.");
    sleep(3);
    printf("\n\n''Your motives confuse me, humans and dog,'' Barney says, ''You killed one of are own but spared another.''");
    sleep(3);
    printf("\n''You have the makings of a ruler, would you all like to join me as co-rulers of the world?'' \n''This is ridiculous,'' %s says, ''You decide, I don't want to.''", cuzName);
    sleep(5);
    //ending decidion
    printf("\n\nDo you..? \n\nJoin \nFight");
    scanf("%s", &rIIpI);
    
    if(rIIpI != "Join" && rIIpI != "join" && rIIpI != "Fight" && rIIpI != "fight"){
		do{
			printf("\nSorry, that wasn't a valid response. Please answer.\n\n");
			scanf("%s", &rIIpI);
		}while(rIIpI != "Join" && rIIpI != "join" && rIIpI != "Fight" && rIIpI != "fight");
	}
    if(rIIpI == "Join" || rIIpI == "join"){
        routeIIendI();
    }
    
    
}

void routeTwoDos(){
    
}

void routeTwo(){
    sleep(3);
    printf("\n\nYou decide to go left.");
    sleep(2);
    printf("\nAfter a minute or so of walking, you encounter a Great Monsterous Beast with much wisdom.");
    sleep(4);
    printf("\nElmo.");
    sleep(3);
    
    printf("\n\n''Welcome, humans and dog,'' Elmo says, ''For making it this far in, I suppose I must \ntell you of the goals I aspire to achieve.''");
    sleep(4);
    printf("''You see, humans have gone too far. Living their lives boringly and \nwithout fun is no good life to live. So we will conquer them and purge them of this, do you agree?''");
    sleep(6);
    printf("You don't really agree. Do you...? \nLie \nTell the truth\n");
    scanf("%s", &rIIchI);
    
    if(rIIchI != "Lie" && rIIchI != "lie" && rIIchI != "Tell the truth" && rIIchI != "tell the truth"){
		do{
			printf("\nSorry, that wasn't a valid response. Please answer.\n\n");
			scanf("%s", &rIIchI);
		}while(rIIchI != "Lie" && rIIchI != "lie" && rIIchI != "Tell the truth" && rIIchI != "tell the truth");
	}
    if(rIIchI == "Lie" || rIIchI == "lie"){
        routeTwoUno();
    }
    if(rIIchI == "Tell the truth" || rIIchI == "tell the truth"){
        routeTwoDos();
    }
}

//route 3
void routeThree(){
}


//route 4
void routeFour(){
}


//battle stuff
void tutorial(){

	printf("\n\nHow to play:");
	sleep(2);
	printf("\n\nHP are the Health Points. Your entire group shares them. \nWhen you run out of them, it's game over. You die. \nWhen the enemy's HP runs out, they die.\n\n");
	printf("\nFor each turn, you can choose to play as %s (Option 1), %s (Option 2), or %s (Option 3).\n\n", dogName, uName, cuzName);
	printf("\n%s has a knife, which works better on close-range enemies (2-5ft). \n%s has a boomerang, which works best on mid-range enemies (6-9ft). \n%s has a gun, which works best on long-range enemies (10-13ft)", dogName, uName, cuzName);
	printf("\nAnother option you can choose is to Guard (Option 4), which allows you to lose less HP if the enemy attacks.");
	printf("\nThe last option you have is to drink a soda (Option 5), which restores 4-10 HP. You have three sodas each battle.");
	printf("\n\nPLEASE MAKE SURE YOU ENTER IN A NUMBER");
    sleep(6);
	printf("\n\nThat was a lot of things to remember, are you done reading? (Yes/No)\n");
	scanf("%s", &done);
}

void tutorialAns(){
	if(done != "Yes" && done != "yes" && done != "No" && done != "no"){
		do{
			printf("\nSorry, that wasn't a valid response. Please answer.\n\n");
			scanf("%s", &done);
		}while(done != "Yes" && done != "yes" && done != "No" && done != "no");
	}
	if(done == "No" || done == "no"){
		do{
			printf("\nHere it is again!");
			tutorial();
			if(done != "Yes" && done != "yes" && done != "No" && done != "no"){
				do{
					printf("\nSorry, that wasn't a valid response. Please answer.\n\n");
					scanf("%s", &done);
				}while(done != "Yes" && done != "yes" && done != "No" && done != "no");
			}
			if(done == "No" || done == "no"){
				printf("\nHere it is again!");
				tutorial();
			}
		}while(done == "No" || done == "no");
	}
	if(done == "Yes" || done == "yes"){
		printf("\n\nOnto the battle!");
	}
}

void tutorialBattle(){
	do{
		
		int dmg = randint(4, 12);
		int distance = randint(2, 13);
		
		
		printf("\n\n\n\n						   The Master Hand approaches!");
		printf("\n				Distance: %d		Enemy HP: %d		 Your HP: %d																								  aw man\n", distance, hpMasterHand, groupHp);
		printf("							Turn %d", turn);
		printf("\n\nChoose your action: \n(1) %s (knife) \n(2) %s (boomerang) \n(3) %s (gun) \n(4) Guard \n(5) Soda (%d left)\n\n", dogName, uName, cuzName, sodaUse);
		scanf("%d", &bC);
		
		//not valid answer
		if(bC != 1 && bC != 2 && bC != 3 && bC != 4 && bC != 5){
			do{
				printf("\nSorry, that wasn't a valid response. Please answer.\n\n");
				scanf("%d", &bC);
			}while(bC != 1 && bC != 2 && bC != 3 && bC != 4 && bC != 5);
		}
		
		//knife damage
		if(bC == 1){
			//bad knife
			if(distance >= 10 && distance <= 13){
				int badKnifeDmg = randint(5, 12);
				hpMasterHand = hpMasterHand - badKnifeDmg;
				printf("\n						   %s did %d damage!", dogName, badKnifeDmg);
			}
			//ok knife
			if(distance >= 6 && distance <= 9){
				int okKnifeDmg = randint(11, 18);
				hpMasterHand = hpMasterHand - okKnifeDmg;
				printf("\n						   %s did %d damage!", dogName, okKnifeDmg);
			}
			//good knife
			if(distance >= 2 && distance <= 5){
				int goodKnifeDmg = randint(17, 24);
				hpMasterHand = hpMasterHand - goodKnifeDmg;
				printf("\n						   %s did %d damage!", dogName, goodKnifeDmg);
			}
		}
		//boomerang damage
		if(bC == 2){
			//bad boomerang
			if(distance >= 2 && distance <= 5){
				int badBoomerDmg = randint(5, 12);
				hpMasterHand = hpMasterHand - badBoomerDmg;
				printf("\n						   %s did %d damage!", uName, badBoomerDmg);
			}
			//ok boomerang
			if(distance >= 10 && distance <= 13){
				int okBoomerDmg = randint(11, 18);
				hpMasterHand = hpMasterHand - okBoomerDmg;
				printf("\n						   %s did %d damage!", uName, okBoomerDmg);
			}
			//good boomerang
			if(distance >= 6 && distance <= 9){
				int goodBoomerDmg = randint(17, 24);
				hpMasterHand = hpMasterHand - goodBoomerDmg;
				printf("\n						   %s did %d damage!", uName, goodBoomerDmg);
			}
		}
		//gun
		if(bC == 3){
			//bad gun
			if(distance >= 2 && distance <= 5){
				int badGunDmg = randint(5, 12);
				hpMasterHand = hpMasterHand - badGunDmg;
				printf("\n						   %s did %d damage!", cuzName, badGunDmg);
			}
			//ok gun
			if(distance >= 6 && distance <= 9){
				int okGunDmg = randint(11, 18);
				hpMasterHand = hpMasterHand - okGunDmg;
				printf("\n						   %s did %d damage!", cuzName, okGunDmg);
			}
			//good gun
			if(distance >= 10 && distance <= 13){
				int goodGunDMG = randint(17, 24);
				hpMasterHand = hpMasterHand - goodGunDMG;
				printf("\n						   %s did %d damage!", cuzName, goodGunDMG);
			}
		}
		
		//Guard
        if(bC == 4){
			if(distance >= 2 && distance <= 5){
				dmg = dmg - 2;
			}
			if(distance >= 6 && distance <= 9){
				dmg = dmg - 4;
			}
			if(distance >= 10 && distance <= 13){
				dmg = dmg - 6;
			}
		}
		
		//soda
        if(bC == 5){
			if(sodaUse != 0){
				soda = randint(4, 10);
				groupHp = groupHp + soda;
				if(groupHp > 30){
					groupHp = 30;
					printf("						   You drank some soda! You now have full HP.");
				}else{
					printf("						   You drank some soda! You now have %d HP.", groupHp);
				}
				sodaUse--;
			}else{
				printf("						   You're out of Soda!");
			}
		}
		
		
		//enemy turn
        if(hpMasterHand > 0){
			printf("\n\n						   The Master hand attacks!");
			groupHp = groupHp - dmg;
			sleep(2);
			printf("\n						   It hits the group! You lost %d HP!", dmg);
		}
		
		turn++;
		sleep(3);
	}while(hpMasterHand > 0 && groupHp > 0);
	
    //end battle lose
	if(groupHp <= 0){
		printf("You, %s, and %s have died. F\n\n", dogName, cuzName);
		sleep(3);
        printf("Do you want to try again? (Yes/No);");
        scanf("%s", &retry);
        if(retry != "Yes" && retry != "yes" && retry != "No" && retry != "no"){
            do{
                printf("\nSorry, that wasn't a valid response. Please answer.\n\n");
                scanf("%s", &retry);
            }while(retry != "Yes" && retry != "yes" && retry != "No" && retry != "no");
        }
        if(retry == "Yes" || retry == "yes"){
            printf("Restarting battle...");
            sleep(5);
            turn = 1;
            sodaUse = 3;
            tutorialBattle();
        }
        if(retry == "No" || retry == "no"){
            printf("You chose not to restart the battle.\n						   GAME OVER");
            sleep(4);
            exit(1);
        }
	}
	
	//end battle win
    if(hpMasterHand <= 0){
		printf("\n\n						   The Master Hand has been defeated! Congratulations! It took you %d turns.", turn);
        sleep(4);
		printf("\n\nYour group leveled up! You are now level 2.\n");
		sleep(2);
		printf("+4 in Strength. You all can hit harder now!");
		sleep(3);
        turn = 1;
        sodaUse = 3;
	}
}



//what leads to the actual main routes
void mainRoute(){
	printf("You, %s, and %s head into the warehouse.\n", dogName, cuzName);
	sleep(3);
	printf("''It's creepy in here,'' %s says as you all walk down a long hallway.\n", cuzName);
	sleep(4);
	printf("It's dim, but it looks like an average warehouse, but with more walls. \nIt's desolate, not even a box or crate can be seen. ");
	printf("\nWait no, nevermind. You see a box up ahead on the left side of the hallway, do you open it?\n");
	printf("\nYes \nNo\n");
	scanf("%s", &choiceTwo);
	if(choiceTwo != "Yes" && choiceTwo != "yes" && choiceTwo != "No" && choiceTwo != "no"){
		do{
			printf("\nSorry, that wasn't a valid response. Please answer.\n\n");
			scanf("%s", &choiceOne);
		}while(choiceTwo != "Yes" && choiceTwo != "yes" && choiceTwo != "No" && choiceTwo != "no");
	}
	//get weapons
	if(choiceTwo == "Yes" || choiceTwo == "yes"){
		sleep(2);
		printf("\nYou decide to open the box");
		sleep(3);
		printf(".");
		sleep(3);
		printf(".");
		sleep(3);
		printf(".																																 Are you having a hard time there, buddy? Fine, I'll tell you.\n");
		sleep(3);
		printf("\nYou found weapons!																											  the box whispers to you, ''thank you....''\n");
		printf("\nA boomerang, a knife, and a... gun!?\n");
		sleep(3);
		printf("No, just a picture of one. However, underneath the picture is ammo.\n\n");
		sleep(4);
		printf("''I knew I had a bad feeling about this,'' %s says, taking a gun out of their pocket and \ntaking the ammo.", cuzName);
		sleep(6);
		printf("\nYou decide not to ask why they have a gun and move on.");
		sleep(3);
		printf("\n%s takes the knife from the box, refusing to give it to you. \nThere's only one wapon left.\n", dogName);
		sleep(4);
		printf("+1 boomerang!");
		sleep(3);
		
	}
	if(choiceTwo == "No" || choiceTwo == "no"){
		sleep(2);
		printf("\nYou decide to leave it there.");
		sleep(3);
		printf("\nAlone.");
		sleep(2);
		printf("\nIn this dark, dark place.");
		sleep(3);
		printf("\nPart of it is collapsed in on itself.");
		sleep(3);
		printf("\nIt looks pretty pathetic.");
		sleep(3);
	}
	printf("\n\nYou continue down the hallway.");
	sleep(4);
	printf("\n\nAs you come across a crossroads, a swirling pool of darkness opens up in the middle \nof the dirty floor.");
	sleep(4);
	printf("\nRising up from it is a giant white glove, reaching up and towering above the \nthree of you.");
	sleep(4);
	printf("\nThe hand rises up high, but %s pushes all of you out of the way just before \nit comes slamming down\n", cuzName);
	sleep(4);
	printf("%s barks, asking if you're okay. You nod, ''It looks like we'll all need to fight!''\n", dogName);
	sleep(4);
	
	//how to get weapons anyway
	if(choiceTwo == "No" || choiceTwo == "no"){
		printf("%s pulls something out of their bag (that you never noticed they had on). \nIt's a... gun!?!");
		printf("\n\n''I knew I had a bad feeling about this,'' %s says, taking a gun out of their pocket.", cuzName);
		sleep(5);
		printf("\nYou decide not to ask why they have a gun and move on.\n");
		sleep(3);
		printf("%s takes the knife from the bag, refusing to give it to you. \nThere's only one wapon left.\n", dogName);
		sleep(4);
		printf("\n+1 boomerang!\n\n");
		sleep(3);
	}
	
	printf("The Master Hand seems like it's not going to stop its attack.\n\n");
	sleep(3);
    printf("\n\nBATTLE START!");
	
}

void routeChoice(){
	printf("You all look past the corpse of the Master Hand and see that the path \nbranches off into three paths.");
    printf("''Well,'' %s says, ''Do we go left, right, or forward?''", cuzName);
    scanf("%s", &bigChoice);
    //decision
    if(bigChoice != "Left" && bigChoice != "left" && bigChoice != "Right" && bigChoice != "right" && bigChoice != "Forward" && bigChoice != "forward"){
		do{
			printf("\nSorry, that wasn't a valid response. Please answer.\n\n");
			scanf("%s", &bigChoice);
		}while(bigChoice != "Left" && bigChoice != "left" && bigChoice != "Right" && bigChoice != "right" && bigChoice != "Forward" && bigChoice != "forward");
	}
    if(bigChoice == "Left" || bigChoice == "left"){
        routeTwo();
    }
    if(bigChoice != "Right" && bigChoice != "right"){
        routeFour();
    }
    if(bigChoice != "Forward" && bigChoice != "forward"){
        routeThree();
    }
}
















//start
void main(){
    setup();
	intro();
	routeOne();
	if(choiceOne == "Go inside of the warehouse" || choiceOne == "go inside of the warehouse"){
        mainRoute();
        tutorial();
		tutorialAns();
		tutorialBattle();
		routeChoice();
	}
	
}

