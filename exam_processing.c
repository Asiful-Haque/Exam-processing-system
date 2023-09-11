
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
FILE *fp;
//FILE *cc;
void pattern1(){
   int i, space, k = 0;
   for (i = 1; i <= 10; ++i, k = 0) {
   for (space = 1; space <= 10 - i; ++space) {
         printf("  ");
      }
      while (k != 2 * i - 1) {
         printf("* ");
         ++k;
      }
      printf("\n");
   }
}
void pattern2(){
   int i, j, space;
   for (i = 10; i >= 1; --i) {
      for (space = 0; space < 10 - i; ++space)
         printf("  ");
      for (j = i; j <= 2 * i - 1; ++j)
         printf("* ");
      for (j = 0; j < i - 1; ++j)
         printf("* ");
      printf("\n");
   }
}

double CGPA (int sum1){
    double cgpa1;
       if(sum1>=80){
         cgpa1=4.00;
         printf("Your CGPA for this course is %.2lf\n",cgpa1);
         printf("PASSED\n");
       }
       else if(sum1>=75 && sum1<=79){
        cgpa1=3.75;
         printf("Your CGPA for this course is %.2lf\n",cgpa1);
         printf("PASSED\n");
       }
       else if(sum1>=70 && sum1<74){
          cgpa1=3.50;
         printf("Your CGPA for this course is %.2lf\n",cgpa1);
         printf("PASSED\n");
       }
       else if(sum1>=65 && sum1<69){
        cgpa1=3.25;
         printf("Your CGPA for this course is %.2lf\n",cgpa1);
         printf("PASSED\n");
       }
       else if(sum1>=60 && sum1<64){
         cgpa1=3.00;
         printf("Your CGPA for this course is %.2lf\n",cgpa1);
         printf("PASSED\n");
       }
       else if(sum1>=55 && sum1<59){
          cgpa1=2.75;
         printf("Your CGPA for this course is %.2lf\n",cgpa1);
         printf("PASSED\n");
       }
       else if(sum1>=50 && sum1<54){
          cgpa1=2.50;
         printf("Your CGPA for this course is %.2lf\n",cgpa1);
         printf("PASSED\n");
       }
       else if(sum1>=45 && sum1<49){
          cgpa1=2.25;
         printf("Your CGPA for this course is %.2lf\n",cgpa1);
         printf("PASSED\n");
       }
       else if(sum1>=40 && sum1<44){
          cgpa1=2.00;
         printf("Your CGPA for this course is %.2lf\n",cgpa1);
         printf("PASSED\n");
       }
       else{
          cgpa1=0.00;
         printf("Your CGPA for this course is %.2lf\n",cgpa1);
         printf("FAIL\n");
       }
       return cgpa1;
}
double cg1(double a,double b,double c,double d,double e){
int ac=3;
int bc=3;
int cc=3;
int dc=3;
int ec=1;
return ((a*ac)+(b*bc)+(c*cc)+(d*dc)+(e*ec))/13;
}

struct info{
char name[40];
char password[20];
char que[15];
}u;
struct clearance{
int serial;
char name[40];
char id[20];
}s[100];
struct course1{
char id[40];
int nofmid;
int nofapa;
int nofquiz;
int noffinal;
};
struct course2{
char id[40];
int nofmid;
int nofapa;
int nofquiz;
int noffinal;
};
struct course3{
char id[40];
int nofmid;
int nofapa;
int nofquiz;
int noffinal;
};
struct course4{
char id[40];
int nofmid;
int nofapa;
int nofquiz;
int noffinal;
};
struct course5{
char id[40];
int nofmid;
int nofapa;
int nofquiz;
int noffinal;
};
struct course1 st1[100];
struct course2 st2[100];
struct course3 st3[100];
struct course4 st4[100];
struct course5 st5[100];

void clearance(){
    system("cls");
    printf("Welcome to clearance section\n");
    int n;
    printf("HOw many students : ");
    scanf("%d",&n);
     FILE *fptr = fopen("clear.txt", "wb+");
     int i;
    if (fptr == NULL)
    {
        printf("Could not open file");
        return 0;
    }
    else{
    for (i = 0; i < n; i++)
    {
        printf("Serial: ");
        scanf("%d",&s[i].serial);
        getchar();
        printf("Enter a name : ");
        gets(s[i].name);
        printf("enter id : ");
        gets(s[i].id);
        fwrite(&s[i],sizeof(struct clearance),1,fptr);
    }

    fclose(fptr);
    }

    sleep(1);
}
void seatplan(){
    system("cls");
    printf("Welcome to seatplan section\n");
    int roomnumber;
    printf("Give number of room : ");
    scanf("%d",&roomnumber);
    fflush(stdin);
    int students;
    printf("Give number of students : ");
    scanf("%d",&students);
    fflush(stdin);
    int d=students/roomnumber;
    FILE *fptr;
   fptr = fopen("clear.txt","rb+");

   if(fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }

    else{
            int j=1;
           while(fread(&s,sizeof(struct clearance),1,fptr)){
          puts(s->id);
          if(j==d){
            printf("....................Next room....................\n");
            j=0;
          }
          j++;
     }

     if(students<roomnumber){
            printf("Has enough space in room\n");
          }
     int choise;
     printf("Print 1 to go back : ");
     scanf("%d",&choise);
     if(choise==1){
        sleep(0);
     }
fclose(fptr);
    }

     int num;
    FILE *fpt;

   fpt = fopen("de.txt","wb+");

   if(fpt == NULL)
   {
      printf("Error!");
      exit(1);
   }
   num=d;
   fprintf(fpt,"%d",num);
   fclose(fpt);

}
void seatplanstu(){
    system("cls");
    int v;
    int num;
   FILE *fpt;

   if ((fpt = fopen("de.txt","rb+")) == NULL){
       printf("Error! opening file");
       exit(1);
   }

   fscanf(fpt,"%d", &num);
    v=num;
   fclose(fpt);
    printf("-----------------------------------------------\n");
    printf("----------Welcome to seatplan section----------\n");
    printf("-----------------------------------------------\n");

    char id[20];
    printf("Give id: ");
    fflush(stdin);
    gets(id);

    FILE *fptr =fopen("clear.txt","rb+");
       if (fptr == NULL)
    {
        printf("Could not open file");
        return 0;
    }
    else{
            int j=1;
           while(fread(&s,sizeof(struct clearance),1,fptr)){
                if(strcmp(id,s->id)==0){
                    puts(s->id);
                    printf("Hey!!!!!!You are here.....In this room...\n");
                }
                else{
                    puts(s->id);
                }
          if(j==v){
            printf("....................Next room....................\n");
            j=0;
          }
          j++;
     }

     int choise;
     printf("Print 1 to go back : ");
     scanf("%d",&choise);
     if(choise==1){
        sleep(0);
     }
    fclose(fptr);
    }
}
void questionanswer(){
    system("cls");
    printf("Welcome to questionanswer section\n");
    FILE *fptr =fopen("clear.txt","rb+");
       if (fptr == NULL)
    {
        printf("Could not open file");
        return 0;
    }
    else{
            int j=1,count=1;
           while(fread(&s,sizeof(struct clearance),1,fptr)){
               int v;
                int num;
               FILE *fpt;

               if ((fpt = fopen("de.txt","rb+")) == NULL){
                   printf("Error! opening file");
                   exit(1);
               }

               fscanf(fpt,"%d", &num);
                v=num;
               fclose(fpt);
                    puts(s->id);

          if(j==v){
            printf("Number of questions : %d\n",j);
            printf("Number of Answer shits : %d\n",j);
            printf("....................Next room....................\n");
            j=0;
          }
          j++;
          count++;

     }
     int choise;
     printf("Print 1 to go back : ");
     scanf("%d",&choise);
     if(choise==1){
        sleep(0);
     }
    fclose(fptr);
    }

}
void marks(){
        system("cls");
        printf("Welcome to marks section\n");
        printf("Course 1\n");
        FILE *fptr=fopen("clear.txt","rb+");
        if (fptr == NULL)
        {
        printf("Could not open file");
        return 0;
        }
        else{
        FILE *cc = fopen("c1.txt","wb+");
        int i=0;
        while(fread(&s,sizeof(struct clearance),1,fptr)){
                 fflush(stdin);
        printf("Marks for : ");
        puts(s->id);
        if (cc == NULL){
        printf("Could not open file");
        return 0;
        }
        else{
        //struct course1 st1[100];
        printf("Confirm ID : ");

        gets(st1[i].id);
        printf("marks of mid term in course 1: ");
        scanf("%d",&st1[i].nofmid);
        printf("marks of Assignment,Presentation,attendence in course 1: ");
        scanf("%d",&st1[i].nofapa);
        printf("Average marks of quiz in course 1: ");
        scanf("%d",&st1[i].nofquiz);
        printf("Marks of final in course 1: ");
        scanf("%d",&st1[i].noffinal);
        fwrite(&st1[i],sizeof(struct course1),1,cc);
        }
        i++;
        }
        fclose(cc);
        }
        fclose(fptr);
        system("cls");
        printf("Completed taking marks in course 1: \n");
        printf("Get ready for course 2\n");
        sleep(4);
//////////////////////////////////////////////////////////////
        system("cls");
        printf("Course 2\n");
        fptr=fopen("clear.txt","rb+");
        if (fptr == NULL)
        {
        printf("Could not open file");
        return 0;
        }
        else{
        FILE *cd = fopen("c2.txt","wb+");
        int i=0;
        while(fread(&s,sizeof(struct clearance),1,fptr)){
                 fflush(stdin);
        printf("Marks for : ");
        puts(s->id);
        if (cd == NULL){
        printf("Could not open file");
        return 0;
        }
        else{

        printf("Confirm ID : ");

        gets(st2[i].id);
        printf("marks of mid term in course 2: ");
        scanf("%d",&st2[i].nofmid);
        printf("marks of Assignment,Presentation,attendence in course 2: ");
        scanf("%d",&st2[i].nofapa);
        printf("Average marks of quiz in course 2: ");
        scanf("%d",&st2[i].nofquiz);
        printf("Marks of final in course 2: ");
        scanf("%d",&st2[i].noffinal);
        fwrite(&st2[i],sizeof(struct course2),1,cd);
        }
        i++;
        }
        fclose(cd);
        }
        fclose(fptr);
        system("cls");
        printf("Completed taking marks in course 2: \n");
        printf("Get ready for course 3\n");
        sleep(4);
////////////////////////////////////////////////////////////////////////////////////////////
        system("cls");
        printf("Course 3\n");
        fptr=fopen("clear.txt","rb+");
        if (fptr == NULL)
        {
        printf("Could not open file");
        return 0;
        }
        else{
        FILE *ce = fopen("c3.txt","wb+");
        int i=0;
        while(fread(&s,sizeof(struct clearance),1,fptr)){
                 fflush(stdin);
        printf("Marks for : ");
        puts(s->id);
        if (ce == NULL){
        printf("Could not open file");
        return 0;
        }
        else{

        printf("Confirm ID : ");

        gets(st3[i].id);
        printf("marks of mid term in course 3: ");
        scanf("%d",&st3[i].nofmid);
        printf("marks of Assignment,Presentation,attendence in course 3: ");
        scanf("%d",&st3[i].nofapa);
        printf("Average marks of quiz in course 3: ");
        scanf("%d",&st3[i].nofquiz);
        printf("Marks of final in course 3: ");
        scanf("%d",&st3[i].noffinal);
        fwrite(&st3[i],sizeof(struct course3),1,ce);
        }
        i++;
        }
        fclose(ce);
        }
        fclose(fptr);
        system("cls");
        printf("Completed taking marks in course 3: \n");
        printf("Get ready for course 4\n");
        sleep(4);
////////////////////////////////////////////////////////////////////////////////////////////
        system("cls");
        printf("Course 4\n");
        fptr=fopen("clear.txt","rb+");
        if (fptr == NULL)
        {
        printf("Could not open file");
        return 0;
        }
        else{
        FILE *cf = fopen("c4.txt","wb+");
        int i=0;
        while(fread(&s,sizeof(struct clearance),1,fptr)){
                 fflush(stdin);
        printf("Marks for : ");
        puts(s->id);
        if (cf == NULL){
        printf("Could not open file");
        return 0;
        }
        else{

        printf("Confirm ID : ");

        gets(st4[i].id);
        printf("marks of mid term in course 4: ");
        scanf("%d",&st4[i].nofmid);
        printf("marks of Assignment,Presentation,attendence in course 4: ");
        scanf("%d",&st4[i].nofapa);
        printf("Average marks of quiz in course 4: ");
        scanf("%d",&st4[i].nofquiz);
        printf("Marks of final in course 4: ");
        scanf("%d",&st4[i].noffinal);
        fwrite(&st4[i],sizeof(struct course4),1,cf);
        }
        i++;
        }
        fclose(cf);
        }
        fclose(fptr);
        system("cls");
        printf("Completed taking marks in course 4: \n");
        printf("Get ready for course 5\n");
        sleep(4);
////////////////////////////////////////////////////////////////////////////////////////////
        system("cls");
        printf("Course 5\n");
        fptr=fopen("clear.txt","rb+");
        if (fptr == NULL)
        {
        printf("Could not open file");
        return 0;
        }
        else{
        FILE *cg = fopen("c5.txt","wb+");
        int i=0;
        while(fread(&s,sizeof(struct clearance),1,fptr)){
                 fflush(stdin);
        printf("Marks for : ");
        puts(s->id);
        if (cg == NULL){
        printf("Could not open file");
        return 0;
        }
        else{

        printf("Confirm ID : ");
        //fflush(stdin);
        gets(st5[i].id);
        printf("marks of mid term in course 5: ");
        scanf("%d",&st5[i].nofmid);
        printf("marks of Assignment,Presentation,attendence in course 5: ");
        scanf("%d",&st5[i].nofapa);
        printf("Average marks of quiz in course 5: ");
        scanf("%d",&st5[i].nofquiz);
        printf("Marks of final in course 5: ");
        scanf("%d",&st5[i].noffinal);
        fwrite(&st5[i],sizeof(struct course5),1,cg);
        }
        i++;
        }
        fclose(cg);
        }
        fclose(fptr);
        system("cls");
        printf("Completed taking marks in course 5: \n");
        printf("\n");
        printf(".......................FINISHED....................\n");
        int choise;
        printf("Print 1 to go back : ");
        scanf("%d",&choise);
        if(choise==1){
            sleep(0);
         }
}

int logout(){
     system("cls");
     printf("Are you sure?\n");
     int x;
     scanf("%d",&x);
     if(x){
        return 1;
     }
     else{
        return 0;
     }
}

void result(){
system("cls");
printf("----------------------------------------------------------\n");
printf("--------------------welcome to result---------------------\n");
printf("----------------------------------------------------------\n");
    int sum1=0;
    int sum2=0;
    int sum3=0;
    int sum4=0;
    int sum5=0;
    double calc1,calc2,calc3,calc4,calc5;
    char rollid[20];
    printf("Give id: ");
    fflush(stdin);
    gets(rollid);
    system("cls");
    printf("                     Result for : ");
    puts(rollid);



FILE *cc =fopen("c1.txt","rb+");
if (cc == NULL)
    {
        printf("Could not open file");
        return 0;
    }
else{
       while(fread(&st1,sizeof(struct course1),1,cc)){
           if(strcmp(rollid,st1->id)==0){
            printf("            :::::::::::::::::::::::::::::::::::::::::::        \n");
            printf("            ::::::::::::      Course 1      :::::::::::        \n");
            printf("            :::::::::::::::::::::::::::::::::::::::::::        \n");

           printf("Marks for Midterm exam : %d\n",st1->nofmid);
           printf("Marks for Assignments,Presentation,Attendence : %d\n",st1->nofapa);
           printf("Marks for Quiz exam average : %d\n",st1->nofquiz);
           printf("Marks for Final exam : %d\n",st1->noffinal);

           sum1+=st1->nofmid;
           sum1+=st1->nofapa;
           sum1+=st1->nofquiz;
           sum1+=st1->noffinal;
       }
       }
       printf("total marks of %s is : ",rollid);
       printf("%d\n",sum1);
       calc1=CGPA(sum1);
}
fclose(cc);


FILE *cd =fopen("c2.txt","rb+");
if (cd == NULL)
    {
        printf("Could not open file");
        return 0;
    }
else{
       while(fread(&st2,sizeof(struct course2),1,cd)){
           if(strcmp(rollid,st2->id)==0){

           printf("            :::::::::::::::::::::::::::::::::::::::::::        \n");
           printf("            ::::::::::::      Course 2      :::::::::::        \n");
           printf("            :::::::::::::::::::::::::::::::::::::::::::        \n");

           printf("Marks for Midterm exam : %d\n",st2->nofmid);
           printf("Marks for Assignments,Presentation,Attendence : %d\n",st2->nofapa);
           printf("Marks for Quiz exam average : %d\n",st2->nofquiz);
           printf("Marks for Final exam : %d\n",st2->noffinal);

           sum2+=st2->nofmid;
           sum2+=st2->nofapa;
           sum2+=st2->nofquiz;
           sum2+=st2->noffinal;
       }
       }
       printf("total marks of %s is : ",rollid);
       printf("%d\n",sum2);
       calc2=CGPA(sum2);

}
fclose(cd);


FILE *ce =fopen("c3.txt","rb+");
if (ce == NULL)
    {
        printf("Could not open file");
        return 0;
    }
else{
       while(fread(&st3,sizeof(struct course3),1,ce)){
           if(strcmp(rollid,st3->id)==0){

           printf("            :::::::::::::::::::::::::::::::::::::::::::        \n");
           printf("            ::::::::::::      Course 3      :::::::::::        \n");
           printf("            :::::::::::::::::::::::::::::::::::::::::::        \n");

           printf("Marks for Midterm exam : %d\n",st3->nofmid);
           printf("Marks for Assignments,Presentation,Attendence : %d\n",st3->nofapa);
           printf("Marks for Quiz exam average : %d\n",st3->nofquiz);
           printf("Marks for Final exam : %d\n",st3->noffinal);

           sum3+=st3->nofmid;
           sum3+=st3->nofapa;
           sum3+=st3->nofquiz;
           sum3+=st3->noffinal;
       }
       }
       printf("total marks of %s is : ",rollid);
       printf("%d\n",sum3);
       calc3=CGPA(sum3);

}
fclose(ce);


FILE *cf =fopen("c4.txt","rb+");
if (cf == NULL)
    {
        printf("Could not open file");
        return 0;
    }
else{
       while(fread(&st4,sizeof(struct course4),1,cf)){
           if(strcmp(rollid,st4->id)==0){

           printf("            :::::::::::::::::::::::::::::::::::::::::::        \n");
           printf("            ::::::::::::      Course 4      :::::::::::        \n");
           printf("            :::::::::::::::::::::::::::::::::::::::::::        \n");

           printf("Marks for Midterm exam : %d\n",st4->nofmid);
           printf("Marks for Assignments,Presentation,Attendence : %d\n",st4->nofapa);
           printf("Marks for Quiz exam average : %d\n",st4->nofquiz);
           printf("Marks for Final exam : %d\n",st4->noffinal);

           sum4+=st4->nofmid;
           sum4+=st4->nofapa;
           sum4+=st4->nofquiz;
           sum4+=st4->noffinal;
       }
       }
       printf("total marks of %s is : ",rollid);
       printf("%d\n",sum4);
       calc4=CGPA(sum4);

}
fclose(cf);


FILE *cg =fopen("c5.txt","rb+");
if (cg == NULL)
    {
        printf("Could not open file");
        return 0;
    }
else{
       while(fread(&st5,sizeof(struct course5),1,cg)){
           if(strcmp(rollid,st5->id)==0){

           printf("            :::::::::::::::::::::::::::::::::::::::::::        \n");
           printf("            ::::::::::::      Course 5      :::::::::::        \n");
           printf("            :::::::::::::::::::::::::::::::::::::::::::        \n");

           printf("Marks for Midterm exam : %d\n",st5->nofmid);
           printf("Marks for Assignments,Presentation,Attendence : %d\n",st5->nofapa);
           printf("Marks for Quiz exam average : %d\n",st5->nofquiz);
           printf("Marks for Final exam : %d\n",st5->noffinal);

           sum5+=st5->nofmid;
           sum5+=st5->nofapa;
           sum5+=st5->nofquiz;
           sum5+=st5->noffinal;
       }
       }
       printf("total marks of %s is : ",rollid);
       printf("%d\n",sum5);
       calc5=CGPA(sum5);


}
fclose(cg);
int c;

printf("click 1 to see total cgpa : ");
scanf("%d",&c);
if(c==1){
double ans=cg1(calc1,calc2,calc3,calc4,calc5);
printf("**********************************************\n");
printf("**********************************************\n");
printf(":::::::::YOUR TOTAL CGPA IS %.2lf:::::::::::::::\n",ans);
printf("***********************************************\n");
printf("***********************************************\n");
}

int choise;
        printf("Print 1 to go back : ");
        scanf("%d",&choise);
        if(choise==1){
            sleep(0);
         }
}
void registration(){
        printf("         ID - 201-35-2961                   \n");
        pattern1();
        printf("   DIU Final Exam Management System\n");
        pattern2();
   chk:
        printf("If you are new then Register\n");
        printf("\n");
        printf("If already member , go to Log in\n");
        printf("\n");
        printf("      1.Register\n");
        printf("\n");
        printf("      2.Log in\n");
        printf("\n");
        printf("      3.Forgot Password\n");
        printf("\n");
        int x;
        scanf("%d",&x);
        if(x==1){
            fflush(stdin);
            system("cls");
              fp=fopen("logininfo.txt","wb+");
            printf("Enter your name : ");
            gets(u.name);
            printf("Password : ");
            gets(u.password);
            printf("Recovery Question will help you when you will forget password\n");
            printf("Enter your birthdate : ");
            gets(u.que);

        if(fp==NULL){
            printf("No Information Stored\n");
            exit(1);
                    }
        else{
             printf("Registration Successful\n");
             printf("\n");
             printf("You are now a member.\n");
             sleep(2);
            fwrite(&u,sizeof(struct info),1,fp);
            fclose(fp);
            }
         system("cls");
         goto chk;
    }
    else if(x==3){
            system("cls");
        char nameforrecover[40];
        char queforrecover[15];
        fflush(stdin);
        printf("Give your name : ");
        gets(nameforrecover);
        printf("Answer of your recovery question : ");
        gets(queforrecover);

        fp=fopen("logininfo.txt","rb+");
    if(fp==NULL){
            printf("No data for recover\n");
            exit(1);
                  }
        fread(&u,sizeof (struct info),1,fp);
    if(strcmp(queforrecover,u.que)==0 && strcmp(nameforrecover,u.name)==0){
            printf("Successful..Give your new password through Register\n");
            sleep(2);
            fclose(fp);
            system("cls");
            goto chk;
        }
    }
        else if(x==2){

            system("cls");
             }
        else{
            exit(1);
        }


    }


int main(){


   login:
        registration();
        system("cls");
        printf("                 CONFIRM YOUR IDENTITY\n");
        printf("\n");

        printf("                     1.Admin\n");
        printf("\n");

        printf("                     2.Student\n");
        printf("\n");

        printf("For Quit enter any number except 1 and 2 ......Thank you.\n");
        printf("\n");

        printf("1 , 2  or Quit\n");
        int identity;
        scanf("%d",&identity);
    if(identity==1){

        system("cls");
        char name[40];
        char passforadmin[20];

        while(1){
        printf("Give your User Name\n");
        fflush(stdin);
        gets(name);
        printf("Give your password\n");
        fflush(stdin);
        gets(passforadmin);
        fp=fopen("logininfo.txt","rb+");
    if(fp==NULL){
            printf("Please get registered\n");
            exit(1);
                  }
        fread(&u,sizeof (struct info),1,fp);
    if(strcmp(passforadmin,u.password)==0 && strcmp(name,u.name)==0){
            printf("successful\n");
            sleep(1);
            break;
        }
        else{
            system("cls");
            printf("Wrong Name or password.Try again!!!\n");
             }
            fclose(fp);
        }

        goto Homeforadmin;

        Homeforadmin:
            system("cls");
            printf("----------------------------------------------------------\n");
            printf("----------------------Welcome-----------------------------\n");
            printf("----------------------------------------------------------\n");
            printf("\n");
            printf("          DIU Final Exam Management System\n");
            printf("\n");
            sleep(1);
            printf("What you want to do : \n");
            printf("\n");

            printf("         1 : Insert clearance of students.\n");
            printf("\n");

            printf("         2 : Want to know about seat plan.\n");
            printf("\n");

            printf("         3 : How many Questions and answer script is required.\n");
            printf("\n");

            printf("         4 : Insert marks in RESULT portal\n");
            printf("\n");

            printf("         5 : Log out.\n");
            printf("\n");

            int choice;
            printf("Enter your choice : ");
            scanf("%d",&choice);

            if(choice==1){
                clearance();
                goto Homeforadmin;
            }

            else if(choice==2){
                seatplan();
                goto Homeforadmin;
            }
            else if(choice==3){
                questionanswer();
                goto Homeforadmin;
            }
            else if(choice==4){
                marks();
                goto Homeforadmin;
            }
            else if(choice==5){
                int x=logout();
                if(x==1){
                system("cls");
                goto login;
                }
                else{
                    goto Homeforadmin;
                }
            }


    }
     if(identity==2){
        system("cls");
         char name[40];
        char passforstudent[20];

        while(1){
        printf("Give your User Name\n");
        fflush(stdin);
        gets(name);
        printf("Give your password\n");
        fflush(stdin);
        gets(passforstudent);
        fp=fopen("logininfo.txt","rb+");
    if(fp==NULL){
            printf("Please get registered\n");
            exit(1);
                  }
        fread(&u,sizeof (struct info),1,fp);
    if(strcmp(passforstudent,u.password)==0 && strcmp(name,u.name)==0){
            printf("successful\n");
            sleep(1);
            break;
        }
        else{
            system("cls");
            printf("Wrong Name or password.Try again!!!\n");
             }
             fclose(fp);
        }
        goto Homeforstudent;
        Homeforstudent:
            system("cls");
            printf("----------------------Welcome----------------------------\n");
            printf("\n");
            printf("        DIU Final Exam Management System\n");
            printf("\n");

            printf("What you want to do : \n");
            printf("\n");
            printf("        1 : Check Exam seat plan.\n");
            printf("\n");
            printf("        2 : My Result.\n");
            printf("\n");
            printf("        3 : Log Out\n");
            printf("\n");
            int choice;
            printf("Enter your choice: ");
            scanf("%d",&choice);
            if(choice==1){
                seatplanstu();
                goto Homeforstudent;
            }
            else if(choice==2){
                result();
                goto Homeforstudent;
            }
            else if(choice==3){
                int x=logout();
                if(x==1){
                system("cls");
                goto login;
                }
                else{
                    goto Homeforadmin;
                }
            }
    }


     else{
            system("cls");
     printf("Good Bye.........................");
    return 0;
     }
}
