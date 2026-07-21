#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[100];
    cin.getline(str, 100);
    char longest[50];
    char word[50];
    int maxLen = 0;
    int j = 0;
    for(int i=0;;i++)
    {
        if(str[i]!= ' ' && str[i]!='\0')
        {
         word[j]=str[i];
         j++;
        }
        else
        {
            word[j] = '\0';
            if (j > maxLen)
            {
                maxLen = j;
                strcpy(longest, word);
            }
            j=0;
            if (str[i] == '\0')
                break;
        }
    }
    cout << "Longest word: " << longest << endl;
    cout << "Length: " << maxLen << endl;

}

