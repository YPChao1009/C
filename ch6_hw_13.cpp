/*
 * ch6_hw_13.cpp
 * Author:Yun Pei Chao 
 */
#define _CRT_SECURE_NO_DEPRECATE
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

enum FSM{start,build_num,build_id,identifier,number,stop};
FSM transition(int current_state, char transition_char);
int
main()
{
	int current_state;
	char transition_char;

	printf("Enter the text\n(Please enter a space after the word and enter a period to stop this program)=>");

	current_state = start;
	do {
		if (identifier == current_state) {
			printf(" - Identifier\n");
			current_state = start;
		}
		else if (number == current_state) {
			printf(" - Number\n");
			current_state = start;
		}
		scanf("%c", &transition_char);
		if (transition_char != ' ')
			printf("%c", transition_char);
		current_state = transition(current_state, transition_char);
	} while (current_state != stop);
	system("pause");
	return(0);

}
FSM transition( int current_state, char transition_char)
{
	while (start == current_state)
	{
		if (isdigit(transition_char))

			return(build_num);

		else if (isalpha(transition_char))
			return(build_id);
		else if (transition_char == '.')
			return(stop);
		else if (transition_char == ' ')
			return(start);
		else if (transition_char == ' - ')
			return(build_num);

	}
	while (build_num == current_state)
	{
		if (isdigit(transition_char))
			return(build_num);
		else if (transition_char == ' ')
			return(number);
		else if (transition_char == '.')
			return(build_num);
		
	}
	while (build_id == current_state)
	{
		if (isdigit(transition_char) || isalpha(transition_char) || (transition_char == '_'))
			return(build_id);
		else if (transition_char == ' ')
			return(identifier);
	}


	}




















