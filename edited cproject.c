
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct{
		char l[1000];
		int ln;
}s2;
typedef struct {
    char line[1000];
    char l[1000];
    int length;
    int ln;
} LineInfo;
void readFile(const char *filename, LineInfo lines[], int *lineCount);
void chk( const LineInfo lines[],int*intf,int *curve, int*prntf ,int*scnf,int*fpts,int*fgts ,int*ffloat, int*fscnf, int*curly, int*straight,int*flot, int*nt, int*chr, int*pts,int*gts, int* vod );

main(){
s2 file[1000];
LineInfo lines[1000];
int lc=0;
int lineCount = 0;
char d[901];
readFile("G:/New folder/fallskk/RAJESH C.c", lines, &lineCount);//in total lines..code is counting extra used lines too...
int i=0,k=0,j=1,m,intf=0,prntf=0,scnf=0,fpts=0,fgts=0,ffloat=0,fscnf=0,curly=0,curve=0,straight=0,flot=0,nt=0,chr=0,pts=0,gts=0,vod=0;
//printf("%d",file[1].ln);

 chk(lines,&intf,&curve, &prntf ,&scnf,&fpts,&fgts ,&ffloat, &fscnf, &curly, &straight,&flot, &nt, &chr, &pts,&gts, & vod );
printf("\n\n\nBASIC INFORMATION ABOUT THE ABOVE CODE\n=========================================");
printf("\n\tTotal num of lines-->\t\t        %d",lineCount);
printf("\n\tTotal built in functions used-->\t%d",(prntf+scnf+fscnf+fgts+fpts));
printf("\n\tTotal num of variables used-->\t\t%d",(chr+flot+nt-intf-ffloat));
printf("\n\nINFORMATION ABOUT FUNCTIONS USED IN THE ABOVE CODE\n=====================================================");
if(vod>0)printf("\n\tTotal number of \"void\" fuctions-->         %d",vod);

if(intf>0)printf("\n\tTotal number of \"integer\" fuctions-->      %d",intf);

if(ffloat>0)printf("\n\tTotal number of \"float\" fuctions-->     %d",ffloat);

if(prntf>0)printf("\n\tTotal number of \"printf\" function-->       %d",prntf);

if(scnf>0)printf("\n\tTotal number of \"scanf\" function-->        %d",scnf);

if(fscnf>0)printf("\n\tTotal number of \"fscanf\" function-->       %d",fscnf);

if(fgts>0)printf("\n\tTotal number of \"fgets\" function-->        %d",fgts);

if(fpts>0)printf("\n\tTotal number of \"fputs\" function--->       %d",fpts);

if(pts>0)printf("\n\tTotal number of \"puts\" function-->         %d",pts);

if(gts>0)printf("\n\tTotal number of \"gets\" function-->         %d",gts);

printf("\n\nINFORMATION ABOUT THE BRACKETS USED IN ABOVE CODE\n====================================================");
if(curly>0)printf("\n\t%d clossing curly bracket is missing ",curly);//if count = -n that means there are } extra brackets.
else if(curly<0)printf("\n\t%d openning curly bracket is missing",-curly);
else printf("\n\tcurly brackets are perfectly closed");

if(curve>0)printf("\n\t%d clossing curve bracket is missing ",curve);//if count = -n that means there are } extra brackets.
else if(curve<0)printf("\n\t%d openning curve bracket is missing",-curve);
else printf("\n\tcurve brackets are perfectly closed");

if(straight>0)printf("\n\t%d clossing long bracket is missing ",straight);//if count = -n that means there are } extra brackets.
else if(straight<0)printf("\n\t%d openning long bracket is missing",-straight);
else printf("\n\tlong brackets are perfectly closed");

printf("\n\nINFORMATION ABOUT THE VARIABLES USED\n========================================");
if(flot>0)printf("\n\tthe num of floats variables used are ---> %d",flot-ffloat);
else printf("\n\tno float variables used");

if(nt-intf>0)printf("\n\tthe num of int variables used are --> %d",nt-intf);
else printf("\n\tno int variables used");

if(chr>0)printf("\n\tthe num of char variables used are -->%d",chr);
else printf("\n\tno char variables used");
}
void readFile(const char *filename, LineInfo lines[], int *lineCount) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    int i = 0;
    while (fgets(lines[i].line, sizeof(lines[i].line), file)) {
        lines[i].length = strlen(lines[i].line);
        (*lineCount) = (*lineCount) + 1;
        i = i + 1;
    }

    fclose(file);
}

//printf("%d- }",i+1);

void chk(const LineInfo lines[],int*intf,int *curve, int*prntf ,int*scnf,int*fpts,int*fgts ,int*ffloat, int*fscnf, int*curly, int*straight,int*flot, int*nt, int*chr, int*pts,int*gts, int* vod ){
	int l,i,k,m;
	for(i=0;i<500;i++){
		for(k=0;k<lines[i].ln;k++){
/*scanf*/if (lines[i].l[k] == 's' && lines[i].l[k + 1] == 'c' && lines[i].l[k + 2] == 'a' && lines[i].l[k + 3] == 'n' && lines[i].l[k + 4] == 'f' && lines[i].l[k + 5] == '(') { *scnf += 1; }
/*printf*/ if (lines[i].l[k] == 'p' && lines[i].l[k + 1] == 'r' && lines[i].l[k + 2] == 'i' && lines[i].l[k + 3] == 'n' && lines[i].l[k + 4] == 't' && lines[i].l[k + 5] == 'f' && lines[i].l[k + 6] == '(') { *prntf += 1; }
/*fscanf*/ if (lines[i].l[k] == 'f' && lines[i].l[k + 1] == 's' && lines[i].l[k + 2] == 'c' && lines[i].l[k + 3] == 'a' && lines[i].l[k + 4] == 'n' && lines[i].l[k + 5] == 'f' && lines[i].l[k + 6] == '(') { *fscnf += 1; }
/*fgets*/ if (lines[i].l[k] == 'f' && lines[i].l[k + 1] == 'g' && lines[i].l[k + 2] == 'e' && lines[i].l[k + 3] == 't' && lines[i].l[k + 4] == 's' && lines[i].l[k + 5] == '(') { *fgts += 1; }
/*fputs*/ if (lines[i].l[k] == 'f' && lines[i].l[k + 1] == 'p' && lines[i].l[k + 2] == 'u' && lines[i].l[k + 3] == 't' && lines[i].l[k + 4] == 's' && lines[i].l[k + 5] == '(') { *fpts += 1; }
/*gets*/ if (lines[i].l[k] == 'g' && lines[i].l[k + 1] == 'e' && lines[i].l[k + 2] == 't' && lines[i].l[k + 3] == 's' && lines[i].l[k + 4] == '(') { *gts += 1; }
/*puts*/ if (lines[i].l[k] == 'p' && lines[i].l[k + 1] == 'u' && lines[i].l[k + 2] == 't' && lines[i].l[k + 3] == 's' && lines[i].l[k + 4] == '(') { *pts += 1; }

if (lines[i].l[k] == 'v' && lines[i].l[k + 1] == 'o' && lines[i].l[k + 2] == 'i' && lines[i].l[k + 3] == 'd' && lines[i].l[k + 4] == ' ') {
    for (m = 0; m < lines[i].ln; m++) {
        if (lines[i].l[m] == '(') {
            *vod += 1;
            break;
        }
    }
}

if (lines[i].l[k] == 'f' && lines[i].l[k + 1] == 'l' && lines[i].l[k + 2] == 'o' && lines[i].l[k + 3] == 'a' && lines[i].l[k + 4] == 't' && lines[i].l[k + 5] == ' ') {
    for (m = 0; m < lines[i].ln; m++) {
        if (lines[i].l[m] == '(') {
            *ffloat += 1;
            break;
        }
    }
}
if (lines[i].l[k] == '{') { *curly++; }
if (lines[i].l[k] == '}') { *curly--; }
if (lines[i].l[k] == '(') { *curve++; }
if (lines[i].l[k] == ')') { *curve--; }
if (lines[i].l[k] == '[') { *straight++; }
if (lines[i].l[k] == ']') { *straight--; }
if (lines[i].l[k] == 'f' && lines[i].l[k + 1] == 'l' && lines[i].l[k + 2] == 'o' && lines[i].l[k + 3] == 'a' && lines[i].l[k + 4] == 't' && lines[i].l[k + 5] == ' ') {
    *flot += 1;
    for (k = k + 6; k <= lines[i].ln; k++) {
        if (lines[i].l[k] == ',') *flot += 1;
        if (lines[i].l[k] == ';') break;
        else continue;
    }
}
if (lines[i].l[k] == 'i' && lines[i].l[k + 1] == 'n' && lines[i].l[k + 2] == 't' && lines[i].l[k + 3] == ' ') {
    *nt += 1;
    for (k = k + 4; k <= lines[i].ln; k++) {
        if (lines[i].l[k] == ',') *nt += 1;
        if (lines[i].l[k] == ';') break;
        else continue;
    }
}
if (lines[i].l[k] == 'c' && lines[i].l[k + 1] == 'h' && lines[i].l[k + 2] == 'a' && lines[i].l[k + 3] == 'r' && lines[i].l[k + 4] == ' ') {
    *chr += 1;
    for (k = k + 5; k <= lines[i].ln; k++) {
        if (lines[i].l[k] == ',') *chr += 1;
        if (lines[i].l[k] == ';') break;
        else continue;
    }
}
}
}
for (i = 0; i < 500; i++) {
for (k = 0; k < lines[i].ln; k++) {
if (lines[i].l[k] == 'i' && lines[i].l[k + 1] == 'n' && lines[i].l[k + 2] == 't' && lines[i].l[k + 3] == ' ') {
    for (k = k + 4; k <= lines[i].ln; k++) {
        if (lines[i].l[k] == '(') {
            *intf += 1;
            break;
        }
    }
}
}
}
}
