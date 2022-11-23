#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>
#define MAX 100
void game();
void home();
void round_1();
void round_2();
void view_score();
void help();
void personal_details();
char playername[MAX];
int age;
int countr;
double score;


int main()
{
    printf("\n\n\t\t\tQUIZ GAME\n");
    printf("\n\t\t---------------------------------------");

    printf("\n\t\t\t   WELCOME !!");

    
    printf("\n\t\t---------------------------------------");
    printf("\n\t\t---------------------------------------");
    printf("\n\t\t >> Press S to start the game");
    printf("\n\t\t >> Press V to view the highest score  ");
    printf("\n\t\t >> Press R to view score");
    printf("\n\t\t >> Press W to see score record");
    printf("\n\t\t >> press H for help            ");
    printf("\n\t\t >> press Q to quit             ");
    printf("\n\t\t---------------------------------------\n\n");
    char input;
    printf("Enter a choice\n");
    
    scanf("%c", &input);
    char key = toupper(input);
    if(key == 'S')
    {
        game();
    }
    else if(key == 'H')
    {
        help();
    }  
    else if(key == 'R')
    {
        view_score();
    }

    else if(key == 'Q')
    {
        exit;
    }
    
    return 0;
}


void game()
{
    personal_details();

    char key;
    printf("\n ------------------  Welcome %s --------------------------",playername);
    
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 2 rounds in this Quiz Game,ROUND 1 & ROUND 2");
    printf("\n >> In first round you will be asked a total of 3 questions to test your");
    printf("\n    general knowledge. You are eligible to play the game if you give atleast 2");
    printf("\n    right answers, otherwise you can't proceed further to the Challenge Round.");
    printf("\n >> Your game starts with CHALLANGE ROUND. In this round you will be asked a");
    printf("\n    total of 10 questions. Each right answer will be awarded 4 points!");
   
    printf("\n >> You will be given 4 options and you have to select A, B ,C or D for the");
    printf("\n    right option.");
   
    printf("\n >> 1 point will be deducted for each wrong answer");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!\n");
    
    scanf("%c", &key);
    scanf("%c");
    key = toupper(key);
    if(key == 'Y')
    {
        round_1();
    }
    else{
        main();
    }
}

void round_1()
{
    
    printf("\n***** YOUR FIRST ROUND STARTS HERE*****\n");
    int count=0;
    char ans_1, ans_2, ans_3;

     for(int i=1;i<=3;i++)
     {


     switch(i)
		{
		case 1:
		printf("\n\nWhich of the following is a Palindrome number?");
		printf("\n\nA.42042\t\tB.101010\n\nC.23232\t\tD.01234");

        
        printf("\n");
        
        scanf("%c", &ans_1);
        scanf("%c");
		if (toupper(ans_1)=='C')
			{
			    printf("\n\nCorrect!!!");
                count++;
			    
			    break;
            }
		else
		       {
		           printf("\n\nWrong!!! The correct answer is C.23232");
		           
		       break;
		       }

        case 2:
		printf("\n\n\nThe Grand Canyon located in which country? ");
		printf("\n\nA.Ghana\t\tB.The US\n\nC.Canada\t\tD.Bolivia");
        scanf("%c");
        printf("\n");
        scanf("%c", &ans_2);
        
       
		if (toupper(ans_2)=='B')
			{printf("\n\nCorrect!!!");
            count++;
			
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.The US");
		     
		       break;}

        case 3:
		printf("\n\n\nThe first pico satellite of India is- ");
		printf("\n\nA.GSAT-4\t\tB.ANUSAT\n\nC.INSAT\t\tD.STUDSAT");
        scanf("%c");
        printf("\n");
        scanf("%c", &ans_3);
        printf("\n");
        
		if (toupper(ans_3)=='D')
			{printf("\n\nCorrect!!!");
            count++;
			
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.STUDSAT");
		       
		       break;}
        }
     }    
	if(count>=2)
	{
        printf("\n\n\tYou are eligible to play challenge round\n");
        round_2();
    }
	else
	{
	
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY THIS GAME, BETTER LUCK NEXT TIME");
    scanf("%c");
    home();
    }
}
void round_2()
{
     
    printf("\n\n\t*** CONGRATULATIONS you are eligible to play the Game ***");
    
    
    countr=0;
    char ans_1, ans_2, ans_3, ans_4, ans_5, ans_6, ans_7, ans_8, ans_9,
    ans_10, ans_11, ans_12, ans_13, ans_14, ans_15, ans_16, ans_17, ans_18,
    ans_19, ans_20, ans_21, ans_22, ans_23;
     for(int i=0;i<10;i++)
     {
     
     int question = rand()%23;

     switch(question)
		{
		case 1:
		printf("\n\nThe famous Lucknow pact of 1916 was signed between __________.");
		printf("\n\nA.Mahatma Gandhi and Muhammad Ali Jinnah\t\tB.Bal Gangadhar Tilak and Aga Khan\n");
        printf("C.Mahatma Gandhi and Aga Khan\t\tD.Bal Gangadhar Tilak and Muhammad Ali Jinnah");
        scanf("%c");
        printf("\n");
        scanf("%c", &ans_1);
		if (toupper(ans_1)=='D')
			{printf("\n\nCorrect!!!");
            
            countr = countr + 4;
            
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Bal Gangadhar Tilak and Muhammad Ali Jinnah");
               countr--;
		       
		       break;}

		case 2:
		printf("\n\n\nWhich of the following personalities gave ‘The Laws of Heredity?");
		printf("\n\nA.Robert Hook \t\tB.G.J. Mendel\n\nC.) Charles Darwin\t\tD. William Harvey");
        scanf("%c");
        printf("\n");
        scanf("%c", &ans_2);
		if (toupper(ans_2)=='B')
			{printf("\n\nCorrect!!!");
            countr = countr + 4;
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.G.J. Mendel");
               countr--;
		      
		       break;
		       }

        case 3:
		printf("\n\n\nAmong the top 10 highest peaks in the world, how many lie in Nepal? ");
		printf("\n\nA.6\t\tB.7\n\nC.8\t\tD.9");
        scanf("%c");
        printf("\n");
        scanf("%c", &ans_3);
		if (toupper(ans_3)=='C')
			{printf("\n\nCorrect!!!");
            countr = countr + 4;
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.8");
               countr--;
		      
		       break;}

        case 4:
		printf("\n\n\nWhich of the following is not a member of the European Union?");
		printf("\n\nA.Greece\t\tB.Finland\n\nC.Norway\t\tD.The United Kingdom");
        scanf("%c");
        printf("\n");
         scanf("%c", &ans_4);
		if (toupper(ans_4)=='C')
			{printf("\n\nCorrect!!!");
            countr = countr + 4;
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is C.Norway");
                countr--;
		      
		       break;
		       }

        case 5:
		printf("\n\n\nIn the World Boxing Championships 2017, who won India its first medal?");
		printf("\n\nA.Gaurav Bidhuri\t\tB.Alexzander\n\nC.Tarzan\t\tD.Mitsuda");
        scanf("%c");
        printf("\n");
         scanf("%c", &ans_5);
		if (toupper(ans_5)=='A')
			{
                printf("\n\nCorrect!!!");
                countr = countr + 4;
                break;}
		else
		    {
		        printf("\n\nWrong!!! The correct answer is A.Gaurav Bidhuri");
		        countr--;
		       
		        break;
		    }

		case 6:
		printf("\n\n\nWhich element is found in Vitamin B12?");
		printf("\n\nA.Zinc\t\tB.Cobalt\n\nC.Calcium\t\tD.Iron");
        scanf("%c");
        printf("\n");
        scanf("%c", &ans_6);
		if (toupper(ans_6)=='B' )
			{
                printf("\n\nCorrect!!!");
                countr = countr + 4;
			    break;
            }
		else{
                printf("\n\nWrong!!! The correct answer is B.Cobalt");
                countr--;
		        break;
            }

        case 7:
		printf("\n\n\nWhat is the capital of South Korea?");
		printf("\n\nA.Seoul\t\tB.Perish\n\nC.Kabul\t\tD.Islamabad");
        scanf("%c");
        printf("\n");
         scanf("%c", &ans_7);
		if (toupper(ans_7)=='A')
			{
                printf("\n\nCorrect!!!");
                countr = countr + 4;
                break;}
		else
		    {
                printf("\n\nWrong!!! The correct answer is A.Seoul");
		        countr--;
		        break;
            }

        case 8:
		printf("\n\n\nWhich country launched its first large-scale electric car-sharing programme?");
		printf("\n\nA.India\t\tB.China\n\nC.Singapore\t\tD.South Korea");
        scanf("%c");
        printf("\n");
        scanf("%c", &ans_8);
		if (toupper(ans_8)=='C')
			{
                printf("\n\nCorrect!!!");
                countr = countr + 4;
                break;
            }
		else
		    {
                printf("\n\nWrong!!! The correct answer is C.Singapore");
		        countr--;
		        break;
            }

        case 9:
		printf("\n\n\nName of the city in the world known as ‘Big Apple’?");
		printf("\n\nA.New Yorkt\tB.Sweden\n\nC.Kanada\t\tD.Uganda");
        scanf("%c");
        printf("\n");
         scanf("%c", &ans_9);
		if (toupper(ans_9)=='A')
			{
                printf("\n\nCorrect!!!");
                countr = countr + 4;
			    break;
            }
		else{
            printf("\n\nWrong!!! The correct answer is A.New York");
		    countr--;
		    break;
            }

        case 10:
		printf("\n\n\nWhich is the longest River in the world?");
		printf("\n\nA.Nile\t\tB.Koshi\n\nC.Ganga\t\tD.Amazon");
        scanf("%c");
        printf("\n");
         scanf("%c", &ans_10);
		if (toupper(ans_10)=='A')
			{
                printf("\n\nCorrect!!!");
                countr = countr + 4;
                break;}
		else{
                printf("\n\nWrong!!! The correct answer is A.Nile");
                countr--;
                break;
            }

        case 11:
		printf("\n\n\nWhat is the color of the Black Box in aeroplanes?");
		printf("\n\nA.White\t\tB.Black\n\nC.Orange\t\tD.Red");
        scanf("%c");
        printf("\n");
         scanf("%c", &ans_11);
		if (toupper(ans_11)=='C')
			{
                printf("\n\nCorrect!!!");
                countr = countr + 4;
			    break;}
		else{
              printf("\n\nWrong!!! The correct answer is C.Orange");
              countr--;
              break;
              
              }

        case 12:
		printf("\n\n\nWhich city is known at 'The City of Seven Hills'?");
		printf("\n\nA.Rome\t\tB.Vactican City\n\nC.Madrid\t\tD.Berlin");
        scanf("%c");
        printf("\n");
         scanf("%c", &ans_12);
		if (toupper(ans_12)=='A')
			  {printf("\n\nCorrect!!!");
               countr = countr + 4;
              
			   break;}
		else
              {printf("\n\nWrong!!! The correct answer is A.Rome");
              countr--;
              break;
            }

		case 13:
		printf("\n\n\nWhen World War 1 ended?");
		printf("\n\nA.11 November 1918\t\tB.12 November 1918\n\nC.10 November 1918");
        printf("\t\t13 November 1918");
        scanf("%c");
        printf("\n");
         scanf("%c", &ans_13);
		if (toupper(ans_13)=='A')
			{printf("\n\nCorrect!!!");
            countr = countr + 4;
            
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.11 November 1918");
               countr--;
		       break;
               
               }

        case 14:
		printf("\n\n\nWho is the author of 'Pulpasa Cafe'?");
		printf("\n\nA.Narayan Wagle\t\tB.Lal Gopal Subedi\n\nC.B.P. Koirala\t\tD.Khagendra Sangraula");
        scanf("%c");
        printf("\n");
         scanf("%c", &ans_14);
		if (toupper(ans_14)=='A')
			{printf("\n\nCorrect!!!");
            countr = countr + 4;
            
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Narayan Wagle");
               countr--;
		       break;
              
               }

		case 15:
		printf("\n\n\nWhich Blood Group is known as the Universal Recipient?");
		printf("\n\nA.A\t\tB.AB\n\nC.B\t\tD.O");
        scanf("%c");
        printf("\n");
         scanf("%c", &ans_15);
		if (toupper(ans_15)=='B')
			{printf("\n\nCorrect!!!");
            countr = countr + 4;
            
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.AB");
               countr--;
		      
               break;
               }

		case 16:
		printf("\n\n\nWhat is the unit of measurement of distance between Stars?");
		printf("\n\nA.Light Year\t\tB.Coulomb\n\nC.Nautical Mile\t\tD.Kilometer");
        scanf("%c");
        printf("\n");
         scanf("%c", &ans_16);
		if (toupper(ans_16)=='A')
			{printf("\n\nCorrect!!!");
            countr = countr + 4;
            
			break;
			}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Light Year");
		       countr--;
		       break;}


		case 17:
		printf("\n\n\nThe country famous for Samba Dance is........");
		printf("\n\nA.Brazil\t\tB.Venezuela\n\nC.Nigeria\t\tD.Bolivia");
        scanf("%c");
        printf("\n");
         scanf("%c", &ans_17);
		if (toupper(ans_17)=='A')
			{printf("\n\nCorrect!!!");
            countr = countr + 4;
            
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A.Brazil");
               countr--;
		       break;}

		case 18:
		printf("\n\n\nWind speed is measured by__________?");
		printf("\n\nA.Lysimeter\t\tB.Air vane\n\nC.Hydrometer\t\tD.Anemometer\n\n");
        scanf("%c");
        printf("\n");
         scanf("%c", &ans_18);
		if (toupper(ans_18)=='D')
			{printf("\n\nCorrect!!!");
            countr = countr + 4;
            break;
            }
		else
		       {printf("\n\nWrong!!! The correct answer is D.Anemometer");
               countr--;
		       break;}

		case 19:
		printf("\n\n\nWhich football player has won the FIFA World Player Award (FIFA Ballon d’or"); 
        printf("for four years in a row?");
		printf("\n\nA.Andres Iniesta\tB.Christiane Ronaldo\n\n");
        printf("C.Lionel Mesai\tD.Michel Platini\n\n");
        scanf("%c");
        printf("\n");
         scanf("%c", &ans_19);
		if (toupper(ans_19)=='C')
			{printf("\n\nCorrect!!!");
            countr = countr + 4;
            
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.C.Lionel Mesai");
               countr--;
		       break;}

		case 20:
		printf("\n\n\nWhich hardware was used in the First Generation Computer?");
		printf("\n\nA.Transistor\t\tB.Valves\n\nC.I.C\t\tD.S.S.I");
        scanf("%c");
        printf("\n");
         scanf("%c", &ans_20);
		if (toupper(ans_20)=='B')
			{printf("\n\nCorrect!!!");
            countr = countr + 4;
            
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B.Valves");
               countr--;
		       break;}

		case 21:
		printf("\n\n\nTelephone was invented by");
		printf("\n\nA.J.L. Baird\t\tB.Stevensonn\nC.Newton\t\tD.Alexander Graham Bell");
        scanf("%c");
        printf("\n");
         scanf("%c", &ans_21);
		if (toupper(ans_21)=='D')
			{printf("\n\nCorrect!!!");
            countr = countr + 4;
            
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Alexander Graham Bell");
               countr--;
		       break;}

		case 22:
		printf("\n\n\nWho won the Women's Australian Open Tennis in 2007?");
		printf("\n\nA.Martina Hingis\t\tB.Maria Sarapova\n\nC.Kim Clijster\t\tD.Serena Williams");
        scanf("%c");
        printf("\n");
         scanf("%c", &ans_22);
		if (toupper(ans_22)=='D')
			{printf("\n\nCorrect!!!");
            countr = countr + 4;
             

			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D.Serena Williams");
               countr--;
		       break;}

		case 23:
		printf("\n\n\nActivity of brain is recorded by _______.");
		printf("\n\nA.MET\t\tB.CG\n\nC.ECG\t\tD.EEG");
        scanf("%c");
        printf("\n");
         scanf("%c", &ans_23);
		if (toupper(ans_23)=='D')
			{printf("\n\nCorrect!!!");
            countr = countr + 4;
            
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C.EEG");
               countr--;
		       break;}
        }
    }
    scanf("%c");
    view_score();
}

void view_score()
{
    
	int score = countr*1;
	if(score == 40)
	{
	   printf("\n\n\t\t**************** CONGRATULATIONS *****************");
	     printf("\n\t You scored full points");
        }

	 else if(score > 0 && score < 40)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATIONS ****************");
	    
	    printf("\n\t\t You scored %d points", score);
	    printf("\n\t\t Thank You!!");
	}
	 else
    {
	 printf("\n\n\t******** SORRY YOU DIDN'T SCORE ANY POINT ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");
        
        }

    home();

}

void home()
{
    char key;
    printf("\n\nPress Y to play again");
    printf("\nPress any key to return to the main menu\n");
    key = toupper(key);
    scanf("%c");
    printf("\n");
    scanf("%c", &key);
    
    if(key == 'Y')
    {
        game();
    }
    else
    {
        main();
    }

}
void help()
{
    printf("\n\n                              HELP");
    printf("\n -------------------------------------------------------------------------");
    printf("\n .........................Quiz Game...........");
    printf("\n >> There are two rounds in the game, ROUND 1 & ROUND 2");
    printf("\n >> In first round you will be asked a total of 3 questions to test your general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 2");
    printf("\n    right answers otherwise you can't play the Game...........");
    printf("\n >> Your game starts with the CHALLANGE ROUND. In this round you will be asked");
    printf("\n    total 10 questions each right answer will be awarded 4 points");
    
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> 1 point will be deducted for each wrong answer");

	scanf("%c");
    main();
}
  

void personal_details()
{
    printf("Register your name and age\n");
    printf("NAME : ");
    scanf("%c", playername);
    
    fgets(playername,MAX,stdin);
    printf("\n");
   
    printf("AGE  : ");
    scanf("%d", &age);
}

