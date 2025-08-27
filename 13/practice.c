#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// void append_log(const char *filename)
// {
//   FILE *fp;
//   char entry[512];
//   time_t now = time(NULL);
//   struct tm *t;

//   t = localtime(&now);

// // #if defined(_MSC_VER)
// //   localtime_s(&t, &now);
// // #else
// //   localtime_s(&now, &t);
// // #endif

//   printf("Enter log entry: ");
//   if (fgets(entry, sizeof(entry), stdin) == NULL)
//   {
//     perror("Error reading input");
//     return;
//   }
//   entry[strcspn(entry, "\n")] = 0; // strip newline

//   fp = fopen(filename, "a");
//   if (!fp)
//   {
//     perror("Error opening log file");
//     return;
//   }

//   fprintf(fp, "[%04d-%02d-%02d %02d:%02d:%02d] %s\n",
//           t->tm_year + 1900, t->tm_mon + 1, t->tm_mday,
//           t->tm_hour, t->tm_min, t->tm_sec,
//           entry);

//   fclose(fp);
// }

// void read_log(const char *filename)
// {
//   FILE *fp;
//   char line[512];

//   fp = fopen(filename, "r");
//   if (!fp)
//   {
//     perror("Error opening log file");
//     return;
//   }

//   printf("\n--- Log File Contents ---\n");
//   while (fgets(line, sizeof(line), fp))
//   {
//     printf("%s", line);
//   }
//   printf("\n--- End of Log ---\n");

//   fclose(fp);
// }

#define FILENAME "data.txt"

void write_file() {
    FILE *fp;
    char text[512];

    fp = fopen(FILENAME, "a"); // open in append mode
    if (!fp) {
        perror("Error opening file for writing");
        return;
    }

    printf("Enter text to write: ");
    getchar(); // consume leftover newline from menu
    if (fgets(text, sizeof(text), stdin) == NULL) {
        perror("Error reading input");
        fclose(fp);
        return;
    }

    text[strcspn(text, "\n")] = 0; // remove newline
    fprintf(fp, "%s\n", text);

    fclose(fp);
    printf("Data written successfully.\n");
}

void read_file() {
    FILE *fp;
    char line[512];

    fp = fopen(FILENAME, "r"); // open in read mode
    if (!fp) {
        perror("Error opening file for reading");
        return;
    }

    printf("\n--- File Contents ---\n");
    while (fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }
    printf("\n--- End of File ---\n");

    fclose(fp);
}

int main()
{
  // write a program that asks the user for a filename, attempts to open it, and reports whether the operation was successful or not.
  // FILE *text;
  // char name[50];
  // char texts[100];

  // printf("Enter a name text file: ");
  // fgets( name, sizeof(name), stdin );
  // name[strcspn(name, "\n")] = 0;

  // text = fopen(name,"w");
  // if (text == NULL){
  //   printf("error file not created");
  //   return 1;
  // }else{
  //   printf("file created successfully");
  // }

  // printf("Enter a text to enter the file: ");
  // fgets(texts, sizeof(texts), stdin);

  // fprintf(text, "%s", texts);
  // fclose(text);
  // text = NULL;

  // create a program that reads integers from a file and calculates their sum.
  // FILE *calculate = fopen("mahmood.text", "r");
  // int num, sum = 0;
  // if (!calculate)
  // {
  //   printf("not found");
  //   return 1;
  // }

  // printf("Done\n");
  // while(fscanf(calculate, "%d", &num) == 1){
  //   sum+=num;
  // }

  // fclose(calculate);
  // calculate = NULL;

  // printf("sum of integer is : %d", sum);

  // write a program that copies one text file's contents to another, stopping when it reaches EOF of the source file.
  // FILE *src, *dest;
  // int ch;

  // src = fopen("source.txt", "r");
  // if (!src)
  // {
  //   perror("Error opening source file");
  //   return 1;
  // }

  // dest = fopen("dest.txt", "w");
  // if (!dest)
  // {
  //   perror("Error opening destination file");
  //   fclose(src);
  //   return 1;
  // }

  // fprintf(src, "hi my name is sayed mahmood \n and i am from afghanistan \n");

  // copy character by character until EOF
  // while ((ch = fgetc(src)) != EOF) {
  //     fputc(ch, dest);
  // }
  // do
  // {
  //   if (ch)
  //   {
  //     fputc(ch, dest);
  //   }
  // } while ((ch = fgetc(src)) != EOF);

  // fclose(src);
  // fclose(dest);

  // printf("File copied successfully.\n");

  // FILE *name1 = fopen("strings1.text", "r");
  // if (!name1)
  // {
  //   printf("could not open strings1.text\n");
  //   return 1;
  // }
  // else
  // {
  //   printf("opened strings1.text successfully\n");
  // }

  // FILE *name2 = fopen("strings2.text", "a");
  // if (!name2)
  // {
  //   printf("could not open strings2.text\n");
  //   fclose(name1);
  //   return 1;
  // }
  // else
  // {
  //   printf("opened/created strings2.text successfully\n");
  // }

  // char buffer[256];
  // while (fgets(buffer, sizeof(buffer), name1))
  // {
  //   // fputs(buffer, name2);
  //   // if (buffer[strlen(buffer) -1] != '\n') {
  //   //   fputc('\n', name2);
  //   // }
  //   fprintf(name2, "%s\n", buffer); // copy line into name2
  // }

  // fclose(name1);
  // fclose(name2);

  // printf("Copied contents from strings1.text to strings2.text\n");

  // write a program that takes user input and writes it to a file, ensuring each entry is on new line.

  // FILE *emails = fopen("email.txt", "a");
  // if (emails == NULL){
  //   printf("email file not created");
  //   return 1;
  // }
  // char email[50], password[50];
  // printf("Enter your email: ");
  // fgets(email, sizeof(email), stdin);
  // email[strcspn(email,"\n")] = 0;
  // printf("Enter your password: ");
  // fgets(password, sizeof(password), stdin);
  // fprintf(emails, "%s, %s", email, password);
  // printf("email and password saved successfully");

  // develop a program that appends user input to the end of a log file each time it's run.
  // FILE *fp;
  // char entry[512];
  // time_t now;
  // struct tm *t;

  // // Open log file in append mode
  // fp = fopen("app.log", "a+");
  // if (fp == NULL)
  // {
  //   perror("Error opening log file");
  //   return 1;
  // }

  // // Get user input
  // printf("Enter log entry: ");
  // if (fgets(entry, sizeof(entry), stdin) == NULL)
  // {
  //   perror("Error reading input");
  //   fclose(fp);
  //   return 1;
  // }

  // // Get timestamp
  // now = time(NULL);
  // t = localtime(&now);

  // // Append entry with timestamp
  // fprintf(fp, "[%04d-%02d-%02d %02d:%02d:%02d] %s",
  //         t->tm_year + 1900, t->tm_mon + 1, t->tm_mday,
  //         t->tm_hour, t->tm_min, t->tm_sec,
  //         entry);

  // fclose(fp);

  // int choice;
  // const char *filename = "app.log";

  // printf("1. Append new log entry\n");
  // printf("2. Read log file\n");
  // printf("Choose option: ");
  // scanf("%d", &choice);
  // getchar(); // consume newline left in buffer

  // if (choice == 1)
  //   append_log(filename);
  // else if (choice == 2)
  //   read_log(filename);
  // else
  //   printf("Invalid choice\n");

  // create a program that performs both reading and writing operations on a file called data.txt.
  int choice;

    printf("1. Write to file\n");
    printf("2. Read from file\n");
    printf("Choose option: ");
    scanf("%d", &choice);

    if (choice == 1) {
        write_file();
    } else if (choice == 2) {
        read_file();
    } else {
        printf("Invalid choice.\n");
    }

  return 0;
}