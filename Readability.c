#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <string.h>

int main(void)
{

//getting input

    string text = get_string("Text: ");

//makin variable to store value
// wordcount is 1 because we are counting spaces so if space = n then words = n+1

    int lettercount = 0;
    int wordcount = 1;
    int sentencecount = 0;

//running the loop with each letter

    for (int i = 0; i < strlen(text); i++)
    {
        if ((text[i] >= 'a' && text[i] <= 'z') || (text[i] >= 'A' && text[i] <= 'Z'))
        {
            lettercount++;
        }
        else if (text[i] == ' ')
        {
            wordcount++;
        }
        else if (text[i] == '.' || text[i] == '!' || text[i] == '?')
        {
            sentencecount++;
        }
    }

//making final variable to store the answer

    float grade = 0.0588 * (100 * (float) lettercount / (float) wordcount) - 0.296 * (100 * (float) sentencecount /
                  (float) wordcount) - 15.8;

// if else chain to get the number

    if (grade < 16 && grade >= 0)
    {
        printf("Grade %d\n", (int) round(grade));
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Before Grade 1\n");
    }
}
