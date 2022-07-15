#include<stdio.h>
struct task
 {

    int id;
    char TaskName[50];
    float TaskBT,TaskET;
    FILE*fp;
};

int main()
 {{{
    printf("Welcome to project CSE115 \n\n");
     FILE *fp;
     fp=fopen("D:project.txt","w");
   if(fp==NULL){
            printf("Error Opening file");
   exit(1); }
   int i;
    struct task pr[3];
    for ( i = 0; i < 3; i++)
    {

        printf("\n\nEnter Task %d ID: ",i+1);
       scanf("%d", &pr[i].id);
        fflush(stdin);
         printf("\nEnter Task %d name: ",i+1);
       gets(pr[i].TaskName);
       printf("\nEnter Task %d beganing time: ",i+1);
        scanf("%f", &pr[i].TaskBT);
        printf("\nEnter Task %d Ending time: ",i+1);
        scanf("%f",&pr[i].TaskET);
fprintf(fp,"Task Id:%d \n Task name:%s \n Task beganing time:%.2f \nTask Ending time:%.2f\n",pr[i].id,pr[i].TaskName,pr[i].TaskBT,pr[i].TaskET);
   }



   fclose(fp);
 }





 FILE *fp;
   fp=fopen("D:project.txt","a");

 if(fp==NULL){
        printf("Error Opening file");
  exit(1); }
    struct task pr[3];
    for ( i = 0; i < 3; i++)
   {
           printf("\n\nEnter Task %d ID: ",i+1);
          scanf("%d", &pr[i].id);
        fflush(stdin);
    gets(pr[i].TaskName);
       scanf("%f", &pr[i].TaskBT);
        printf("\nEnter Task %d Ending time: ",i+1);
        scanf("%f",&pr[i].TaskET);
fprintf(fp,"Task Id:%d \n Task name:%s \n Task beganing time:%.2f \nTask Ending time:%.2f\n",pr[i].id,pr[i].TaskName,pr[i].TaskBT,pr[i].TaskET);
   }

   fclose(fp);

 }
   FILE *fp;
   fp=fopen("D:project.txt","r");
   char tn[100];
   int ax[4],bt,et,i;
   for(i=0;i<=3;i++)
   {
fscanf(fp,"%s\n",&tn);
  printf("%s\n",tn);
  fscanf(fp,"%s\n",&tn);
  printf("%s\n",tn);
  fscanf(fp,"%s\n",&tn);
  printf("%s\n",tn);
  fscanf(fp,"%s\n",&tn);
  printf("%s\n",tn);
  fscanf(fp,"%s\n",&tn);
  printf("%s\n",tn);fscanf(fp,"%s\n",&tn);
  printf("%s\n",tn);
  fscanf(fp,"%s\n",&tn);
  printf("%s\n",tn);
  fscanf(fp,"%s\n",&tn);
  printf("%s\n",tn);
  fscanf(fp,"%s\n",&tn);
  printf("%s\n",tn);
  fscanf(fp,"%s\n",&tn);
  printf("%s\n",tn);

  fscanf(fp,"%s\n",&tn);
  printf("%s\n",tn);
  fscanf(fp,"%s\n",&tn);
  printf("%s\n",tn);
  fscanf(fp,"%s\n",&tn);
  printf("%s\n",tn);
  fscanf(fp,"%s\n",&tn);
  printf("%s\n",tn);
  fscanf(fp,"%s\n",&tn);
  printf("%s\n",tn);




   }
fclose(fp);
return 0;
}
