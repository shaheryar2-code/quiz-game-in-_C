#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#include<dos.h>

void displayscore()
{
	char name[20];
	float s;
	FILE *f;
	system("cls");
	f=fopen("score.text","r");
	fscanf(f,"%s%f",&name,&s);
	printf("\n\n\t\t ");
	printf("\n\n\t\t %s has secured the highest score %.2f",name,s);
	printf("\n\n\t\t ");
	fclose(f);
	getch();
}



void help()
{
	system("cls");
	printf("\n\n\n\tThis game is very easy to play.You will be asked some genernal");
	printf("\n\n\tknowledge questions and the right answer is to be chosen among ");
	printf("\n\n\tthe four option provided.your score will be calculated at the ");
	printf("\n\n\tend.Remember that the more quicker you give answer the more");
	printf("\n\n\tscore you will secure.Your score wil be calculated and displayed and displayed");
	printf("\n\n\tat the end and displayed.if you secure highest score, your score");
	printf("\n\n\twill be recorded.So best of luck.");
}
void writescore(float score,char plnm[20])
{
	float sc;
	char nm[20];
	FILE *f;
	system("cls");
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if(score>=sc)
	{
		sc=score;
		fclose(f);
		f=fopen("score.txt","w");
		fprintf(f,"%s\n%.2f",plnm,sc);
		fclose(f);
	}
}
int main()
	{
		int countq,countr;
		int r,i;
		int pa;int nq[6];int w;
		float score;
		char choice;
		char playername[20];
		time_t initialtime,finaltime;
		system("cls");
        //randomize();
		mainhome:
		system("cls");
		printf("\n\n\n\n\t\t\t\t***********************************");
		printf("\n\t\t\t\t* ******************************* *");
		printf("\n\t\t\t\t*  *****************************  *");
		puts("\n\t\t\t\t*   WELCOME TO I.Q TEST PROGRAM   *");
		printf("\t\t\t\t*   ---------------------------   *");
    //puts("\n\t\t\t\t*                                 *");
		puts("\n\t\t\t\t*   ENTER 'S' TO START GAME       *");
		puts("\t\t\t\t*   ENTER 'V' TO VIEW HIGH SCORE  *");
		puts("\t\t\t\t*   ENTER 'H' FOR HELP            *");
		puts("\t\t\t\t*   ENTER 'Q' TO QUIT             *");
		printf("\t\t\t\t*   ----------------------------  *\n\t\t  ");
		printf("\t\t*  *****************************  *\n");
		printf("\t\t\t\t* ******************************* *\n");
		printf("\t\t\t\t***********************************");
		choice=toupper(getch());
		if(choice=='v')
		{
			displayscore();
			goto mainhome;

		}
		else if (choice=='Q')
			exit(1);
		else if(choice=='H')
		{
			help();
			getch();
			goto mainhome;
		}
		else if(choice=='S')
		{
			system("cls");


	}
	system("cls");

printf("\n\n\n\t\t\tEnter your name...");
printf("\n\t\t\t(only one word)\n\n\t\t\t");
gets(playername);

home:
    system("cls");
    initialtime=time(NULL);
    countq=countr=0;
    i=1;
    start:
        srand (time(NULL) );
        r=rand()%23+1;
        nq[i]=r;
        for (w=0;w<i;w++)
            if (nq[w]==r) goto start;

        switch (r)
        {
        case 1:
            printf("\n\nWhat is the maximum no. of asymptotes of the curve x^4+2x+6=0?");
            printf("\n\nA.4\tB.3\n\nC.none\tD.infinite\n\n");
            countq++;
            if (toupper(getch())=='A')
            {printf("\n\nCorrect!!!");countr++;break;}
            else {printf("\n\nWrong!!! The correct answer is A.4");break;}

        case 2:
            printf("\n\n\nWhich horse breed is most expensive in the world?");
            printf("\n\nA.Hanovarian\tB.Oldenburg\n\nC.Arabian\tD.Thoroughbred\n\n");
            countq++;
            if (toupper(getch())=='D')
            {
                printf("\nCorrect!!!");countr++;break;
            }
            else
                printf("\nWrong!!! The correct answer is D.Thoroughbred");
            break;

        case 3:
            printf("\n\n\nWhen was the first US Parliment established?");
            printf("\n\nA.1st Jan 1780\tB.23rd Sep 1789\n\nC.4th March 1789\tD.25th April 1786\n\n");
            countq++;
            if (toupper(getch())=='C')
            {
                printf("\nCorrect!!!");countr++;break;
            }
            else
            {
                printf("\nWrong!!! The correct answer is C.4th March 1789");break;
            }

        case 4:
            printf("\n\n\n Who was awarded the 'Man of Tournament'of ICC World Cup 2019?");
            printf("\n\nA.Glen Magrath\tB.Yuvraj Singh\n\nC.Mitchell Starc\tD.Kane Williamson\n\n");
            countq++;
            if (toupper(getch())=='D')
            {
                printf("\nCorrect!!!");countr++;break;
            }
            else
            {
                printf("\nWrong!!! The correct answer is D.Kane Williamson");break;
            }

        case 5:
            printf("\n\n\nWhich country won the Fifa World Cup 2014?");
            printf("\n\nA.France\tB.Brazil\n\nC.Germany\t.DEngland\n\n");
            countq++;
            if (toupper(getch())=='C')
            {
                printf("\nCorrect!!!");countr++;break;
            }
            else
            {
                printf("\nWrong!!! The correct answer is C.Germany");break;
            }

        case 6:
            printf("\n\n\nWhich syllabe is stressed in the word 'democracy'?");
            printf("\n\nA.1st\tB.2nd\n\nC.3rd\t.D4th\n\n");
            countq++;
            if (toupper(getch())=='B')
            {
                printf("\n\nCorrect!!!");countr++;break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is B.2nd");break;
            }

        case 7:
            printf("\n\n\n Tesla is a company famous for making? ");
            printf("\n\nA.Electric cars\tB. Gasoline cars\n\nC.Medicines\tD.Bikes\n\n");
            countq++;
            if (toupper(getch())=='A')
            {
                printf("\n\nCorrect!!!");countr++;break;
            }
            else
            {
                printf("\n\nWrong!!! The correct answer is A.Electric cars");break;
            }
case 8:
	printf("\n\n\nwhat is the height of mount everest");
	printf("\n\nA.8648\tB.6648\n\nC.8884\tD.8848\n\n");
	countq++;
	if(toupper(getch())=='D'){
		printf("\n\nCorrect!!!");
		countr++;
		break;
	}else{
		printf("\n\nWrong!!The Corret Answer is D.8848");
		break;
	}

case 9:
	printf("\n\n\nWhen was C language developed?");
	printf("\n\nA.1956\tB.1971\n\nC.1970\t\tD.1972\n\n");
	countq++;
	if(toupper(getch())=='D'){
		printf("\n\nCorrect!!!");
		countr++;
		break;
	}else{
		printf("\n\nWrong!!The Corret Answer is D.1972");
		break;
	}
case 10:
	printf("\n\n\nWhich syllabus is stressed in the word 'instantaneous'");
	printf("\n\nA.1st\tB.2nd\n\nC.3rd\tD.4th\n\n");
	countq++;
	if(toupper(getch())=='C'){
		printf("\n\nCorrect!!!");
		countr++;
		break;
	}else{
		printf("\n\nWrong!!The Corret Answer is C.3rd");
		break;
	}
case 11:
	printf("\n\n\nWho was the only player to score 6 successive sixes in an over?");
	printf("\n\nA.Adam Gilchrist\tB.M.S.Dhoni\n\nC.Herschel Gibbs\tD.Sanath Jayasurya\n\n");
	countq++;
	if(toupper(getch())=='C'){
		printf("\n\nCorrect!!!");
		countr++;
		break;
	}else{
		printf("\n\nWrong!!The Corret Answer is C.Herschel Gibbs");
		break;
	}
case 12:
	printf("\n\n\nWho was the only player to score 4 successive Wickets?");
	printf("\n\nA.Malinga Bandara\tB.Lasith Malinga\n\nC.Bret Lee\tD.Murali Daran\n\n");
	countq++;
	if(toupper(getch())=='B'){
		printf("\n\nCorrect!!!");
		countr++;
		break;
	}else{
		printf("\n\nWrong!!The Corret Answer is B.Lasith Malinga");
		break;
	}
case 13:
	printf("\n\n\nWhich country is hosting fifa world cup 2010?");
	printf("\n\nA.South Africa\tB.Argentena\n\nC.Spain\tD.Itly\n\n");
	countq++;
	if(toupper(getch())=='A'){
		printf("\n\nCorrect!!!");
		countr++;
		break;
	}else{
		printf("\n\nWrong!!The Corret Answer is A.South Africa");
		break;
	}
case 14:
	printf("\n\n\nWho is the author of 'pulpasa cafe'?");
	printf("\n\nA.Narayan Wagle\tB.Lal Gopal Subedi\n\nC.B.P.Koirala\tD.khagendra Sangraula\n\n");
	countq++;
	if(toupper(getch())=='A'){
		printf("\n\nCorrect!!!");
		countr++;
		break;
	}else{
		printf("\n\nWrong!!The Corret Answer is A.Narayan Wagle");
		break;
	}
case 15:
	printf("\n\n\nWhich country is maria sarapova from?");
	printf("\n\nA.Russia\tB.Switzerland\n\nC.Argentena\tD.Spain\n\n");
	countq++;
	if(toupper(getch())=='A'){
		printf("\n\nCorrect!!!");
		countr++;
		break;
	}else{
		printf("\n\nWrong!!The Corret Answer is A.Russia");
		break;
	}
case 16:
	printf("\n\n\nWho was awarded the most youngest player of fifa world cup 2006?");
	printf("\n\nA.Wayne Rooney\tB.Lukas Podolski\n\nC.Lionel Messi\tD.Cristiano Ronaldo\n\n");
	countq++;
	if(toupper(getch())=='B'){
		printf("\n\nCorrect!!!");
		countr++;
		break;
	}else{
		printf("\n\nWrong!!The Corret Answer is B.Lukas Podolski");
		break;
	}


	int q,i,count,option,countq;
	switch(option)
 case 17:
 printf("\n\nWhat is the smallest city of Nepal?");
 printf("\n A. Lalitpur\t B. Karnali\n C.Bhaktapur\tD. Gulmi\n");
 countq++;
 if(toupper(getch())=='C')
 {
 printf("\n Correct!!!");
 count++;
 break;
 }
 else
 {
 printf("\nWrong!!! The correct answer is C.Bakhtapur");break;
 }
 case 18:
 printf("\n\nWhat is the headquater of West Development Region?");
 printf("\n A. Dhankuta\t B. Kathmandu\n C. Dhangadhi\tD. Pokhara\n");
 countq++;
 if(toupper(getch())=='D')
 {
 printf("\n\n Correct!!!");
 countr++;
 break;
 }
 else
 {
 printf("\nWrong!!! The correct answer is D. Pokhara\n");
 break;
 }
 case 19:
 printf("\n\nWhich place is called'The Cherrapunji of Nepal'?");
 printf("\n A. Dharan\t B. Kathmandu\n C. Butwal\tD. Pokhara\n");
 countq++;
 if(toupper(getch())=='D')
 {
 printf("\n\n Correct!!!");
 countr++;
 break;
 }
 else
 {
 printf("\nWrong!!! The correct answer is D. Pokhara\n");
 break;
 }
 case 20:
 printf("\n\nWhich is known at'The City of seven hills'?");
 printf("\n A. Rome city\t B. Vactican city\n C. Madrid\tD. Berlin city\n");
 countq++;
 if(toupper(getch())=='A')
 {
 printf("\n\n Correct!!!");
 count++;
 break;
 }
 else
 {
 printf("\nWrong!!! The correct answer is A. Rome city\n");
 break;
 }
 case 21:
 printf("\n\nWho was the F1 racing champion of 2006?");
 printf("\n A. Lois Hamilton \t B. Felipe Massa\n C. Fernando Alonso\tD. Michel Schumaker\n");
 countq++;
 if(toupper(getch())=='C')
 {
 printf("\n\n Correct!!!");
 count++;
 break;
 }
 else
 {
 printf("\nWrong!!! The correct answer is C. Fernando Alonso\n");
 break;
 }
 case 22:
 printf("\n\nWho won the women Australian Open in 2007?");
 printf("\n A. Martina Hingis \t B. Maria Sarapova\n C. Kis Clijister\tD. Serena Williams\n");
 countq++;
 if(toupper(getch())=='D')
 {
 printf("\n\n Correct!!!");
 count++;
 break;
 }
 else
 {
 printf("\nWrong!!! The correct answer is D. Serena Williams\n");
 break;
 }
 case 23:
 printf("\n\nName the country where there is no mosquito?");
 printf("\n A. Germany\t B. Spain\n C. Japan\tD. France\n");
 countq++;
 if(toupper(getch())=='D')
 {
 printf("\n\n Correct!!!");
 count++;
 break;
 }
 else
 {
 printf("\nWrong!!! The correct answer is D. France\n\n");
 break;
 }

 }
i++;
if(i<=5) goto start;
finaltime =time(NULL);
score=(float)countr/countq*100-difftime(finaltime,initialtime)/3;
if(score<0)score=0;
printf("\nYour score: %.2f\n",score);
if(score==100)
printf("\n\nExcellent!!! KEEP IT UP\n");
else if(score>=80 && score<100)
printf("\n Very good\n");
else if(score>=60 && score<80)
printf("\n Good\n");
else if(score>=40 && score<60)
printf("\n Satifactory result!! But this much is very sufficient\n");
else
{
	printf("\nYou are very poor in G.K, You need too Hard Work\n");
}

puts("\n Nextplay?(Y/N)\n");
if(toupper(getch())=='Y')
goto home;
else
{
	writescore(score,playername);
	goto mainhome;
}

puts("\n Nextplay?(Y/N)");
if(toupper(getch())=='N')
goto mainhome;
   else
{
	printf("\n\n\t\t Enter the right key\n\n\t\t");
	Sleep(700);
	goto mainhome;
}



return 0;

	}
