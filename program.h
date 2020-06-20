#define TRUE 1
#define FALSE !TRUE
#define LIMIT 256 // max number of tokens for a command
#define MAXLINE 1024 // max number of characters from user input
#define GRN   "\x1B[32m" 

static char* currentDirectory;
extern char** environ;

void sig_chld(int);
int launch(char **args, int background);
void inputRD(char *args[],char* inputFile);
void outputRD(char *args[],char* inputFile);
int cd(char **args);
int help(char **args);
int quit(char **args);

