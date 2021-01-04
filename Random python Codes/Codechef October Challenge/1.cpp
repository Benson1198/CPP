#include<stdlib.h>
#include<iostream>

using namespace std;
#define NO_OF_CHARS 256

int *get_count(char *str)
{
	int *count = (int *)calloc(sizeof(int), NO_OF_CHARS);
	int i;
	for (i = 0; *(str+i); i++)
		count[*(str+i)]++;
	return count;
}

int first_char(char *str)
{
	int *count = get_count(str);
    
    

	int index = -1, i;

	for (i = 0; *(str+i); i++)
	{
		if (count[*(str+i)] == 1)
		{
			index = i;
			break;
		}
	}

	free(count);
	return index;
}

int main()
{
	char str[NO_OF_CHARS];
	cin >> str;
	int index = first_char(str);
	if (index == -1){
        cout << "Exceptional String" << endl;
    }
		
    
	else
		cout << str[index] << endl;
	return 0;
}



#include <stdio.h> 
#include <stdlib.h> 
#define NO_OF_CHARS 256 


int* getCharCountArray(char* str) 
{ 
	int* count = (int*)calloc( 
		sizeof(int), NO_OF_CHARS); 
	int i; 
	for (i = 0; *(str + i); i++) 
		count[*(str + i)]++; 
	return count; 
} 

int firstNonRepeating(char* str) 
{ 
	int* count = getCharCountArray(str); 
	int index = -1, i; 

    if(count >20){
        return -2;
    }

	for (i = 0; *(str + i); i++) { 
		if (count[*(str + i)] == 1) { 
			index = i; 
			break; 
		} 
	} 


	free(count); 
	return index; 
} 


int main() 
{ 
	char str[]; 
	int index = firstNonRepeating(str); 
	if (index == -1) 
		printf("Execptional String"); 
    
    else if(index == -2){
        printf("Wrong Input");
    }

	else
		printf(str[index]); 
	getchar(); 
	return 0; 
} 
