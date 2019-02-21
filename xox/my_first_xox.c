#include <stdio.h>

int main(){
    int move;

char player;
printf("X or O: ");
scanf("%c",&player);

puts("Moves are numbered using this table:");
puts("  7|8|9");
puts("  -+-+-");
puts("  4|5|6");
puts("  -+-+-");
puts("  1|2|3");

if(player=='X'){
puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 0:
puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 5:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 7:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 7:
puts("   |   |");
        puts(" X | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 7:
puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 2:
puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 5:
puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 5:
puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 8:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("draw!");
break;
}break;
}break;
case 8:
puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 3:
puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 2:
puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 5:
puts("   |   |");
        puts(" O | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 5:
puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 8:
puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 5:
puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 5:
puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 7:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 7:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 8:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
}break;
case 7:
puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 6:
puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 2:
puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 7:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 7:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 8:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
}break;
case 7:
puts("   |   |");
        puts(" X | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 7:
puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 8:
puts("   |   |");
        puts(" X | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 8:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 8:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 7:
puts("   |   |");
        puts(" X | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 7:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
}break;
case 1:
puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 0:
puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 5:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 7:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 7:
puts("   |   |");
        puts(" X | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 7:
puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 2:
puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 7:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 6:
puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts("   | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
}break;
case 3:
puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 2:
puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 5:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 5:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 7:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
}break;
case 5:
puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 2:
puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 7:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
}break;
case 6:
puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 2:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 2:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 3:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 5:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 5:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
}break;
}break;
case 7:
puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 2:
puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 2:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
}break;
case 8:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 2:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 7:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 6:
puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts("   | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 3:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 5:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 5:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 7:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 5:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 7:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 6:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 2:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 3:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 5:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 5:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
}break;
case 7:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 2:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
}break;
}break;
case 2:
puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 0:
puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 5:
puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 5:
puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 8:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("draw!");
break;
}break;
}break;
case 8:
puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 1:
puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 7:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 6:
puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts("   | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
}break;
case 3:
puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 7:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 6:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 7:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("draw!");
break;
}break;
}break;
}break;
case 5:
puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 0:
puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts("   | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("draw!");
break;
}break;
}break;
case 1:
puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 6:
puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 7:
puts("   |   |");
        puts(" X | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
}break;
case 7:
puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts("   | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts("   | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 6:
puts("   |   |");
        puts(" X | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
}break;
case 8:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 0:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 1:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 7:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 6:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 7:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("draw!");
break;
}break;
}break;
case 6:
puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts("   | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
}break;
case 3:
puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 0:
puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 2:
puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 5:
puts("   |   |");
        puts(" O | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 5:
puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 8:
puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 5:
puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 1:
puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 2:
puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 5:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 5:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 7:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
}break;
case 2:
puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 7:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 6:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 7:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("draw!");
break;
}break;
}break;
}break;
case 5:
puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 2:
puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts("   | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
}break;
case 6:
puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 2:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 5:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 2:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
}break;
case 7:
puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 2:
puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 2:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 5:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
}break;
case 8:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 5:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 5:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 7:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 2:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 7:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 6:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 7:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("draw!");
break;
}break;
}break;
case 5:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts("   | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 6:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 5:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 2:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 7:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 2:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 5:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
}break;
}break;
case 4:
puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 2:
puts("   |   |");
        puts(" O | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" O | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 3:
puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 2:
puts("   |   |");
        puts(" O | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 8:
puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 6:
puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 8:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 8:
puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 6:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
}break;
case 5:
puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 2:
puts("   |   |");
        puts(" O | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 8:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 8:
puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 6:
puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 8:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 5:
puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 8:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 8:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 5:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
}break;
case 8:
puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 6:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 5:
puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 6:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 6:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 5:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
}break;
}break;
case 2:
puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 8:
puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 7:
puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 8:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 8:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 7:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
puts("draw!");
break;
}break;
}break;
case 5:
puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 3:
puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 2:
puts("   |   |");
        puts(" O | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 8:
puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 6:
puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 8:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 8:
puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 6:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
}break;
case 2:
puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 8:
puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 7:
puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 8:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 8:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 7:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
puts("draw!");
break;
}break;
}break;
case 6:
puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts(" X | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 7:
puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 2:
puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 8:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 6:
puts("   |   |");
        puts(" X | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts("   | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 8:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 6:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 6:
puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts("   | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
}break;
case 5:
puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 2:
puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 8:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 7:
puts("   |   |");
        puts(" X | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 7:
puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 6:
puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 8:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 5:
puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 8:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 8:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 5:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
}break;
case 3:
puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts(" X | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 7:
puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 2:
puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 8:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 5:
puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 3:
puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts("   | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 8:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 6:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 5:
puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 6:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 6:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 5:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
}break;
case 3:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts("   | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
}break;
case 5:
puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 0:
puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 7:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 7:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 8:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
}break;
case 7:
puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 1:
puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 2:
puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 7:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
}break;
case 2:
puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 0:
puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts("   | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("draw!");
break;
}break;
}break;
case 1:
puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 3:
puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 2:
puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts("   | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
}break;
case 6:
puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 2:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 3:
puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts(" X | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
}break;
case 7:
puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 2:
puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts("   | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts("   | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
}break;
case 8:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 0:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 1:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 0:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 1:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 3:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 7:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
}break;
case 6:
puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 0:
puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 2:
puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 7:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 7:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 8:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
}break;
case 7:
puts("   |   |");
        puts(" X | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 1:
puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 2:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 2:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 3:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 5:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 5:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
}break;
}break;
case 2:
puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 7:
puts("   |   |");
        puts(" X | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
}break;
case 3:
puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 2:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 5:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 2:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
}break;
case 5:
puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 2:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 3:
puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts(" X | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
}break;
case 7:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 0:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 2:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
}break;
case 1:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 2:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 8:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 0:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 1:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 2:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 3:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 5:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 5:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
}break;
case 2:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
}break;
case 7:
puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 0:
puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 8:
puts("   |   |");
        puts(" X | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 8:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 1:
puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 2:
puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 2:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
}break;
case 2:
puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts("   | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts("   | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 6:
puts("   |   |");
        puts(" X | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
}break;
case 3:
puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 2:
puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 2:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 5:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
}break;
case 5:
puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 2:
puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts("   | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts("   | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
}break;
case 6:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 0:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 2:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
}break;
case 1:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 2:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 8:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 0:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 1:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 2:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 0:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 1:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("draw!");
break;
}break;
}break;
case 3:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
}break;
case 8:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 0:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 7:
puts("   |   |");
        puts(" X | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 7:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 1:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 2:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 7:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 6:
puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts("   | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 3:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 5:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 5:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 7:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 5:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 7:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 6:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 2:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 3:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 5:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 5:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
}break;
case 7:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 2:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
}break;
case 2:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 0:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 1:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 7:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 6:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 7:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("draw!");
break;
}break;
}break;
case 6:
puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts("   | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 3:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 5:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 5:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 7:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 2:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 7:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 6:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 7:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("draw!");
break;
}break;
}break;
case 5:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts("   | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 6:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 5:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 2:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 7:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 2:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 5:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
}break;
case 5:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 0:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 1:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 0:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 1:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 3:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 7:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 6:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 0:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 1:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 2:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 3:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 5:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 5:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
}break;
case 2:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 7:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 0:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 1:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 2:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 0:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 1:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("draw!");
break;
}break;
}break;
case 3:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
}break;
}} else {
puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 0:
puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
puts("draw!");
break;
case 7:
puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 7:
puts("   |   |");
        puts(" O | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts(" O |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 7:
puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 1:
puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 2:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("draw!");
break;
case 5:
puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 7:
puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
}break;
case 2:
puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
puts("draw!");
break;
case 7:
puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 6:
puts("   |   |");
        puts(" O |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts("   | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
}break;
case 3:
puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 2:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" O |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts("   | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
}break;
case 5:
puts("   |   |");
        puts("   |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 2:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts("   |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" O |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts("   | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
}break;
case 6:
puts("   |   |");
        puts(" O |   |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 2:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" O |   | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("draw!");
break;
case 5:
puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 2:
puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
}break;
case 7:
puts("   |   |");
        puts("   | O |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 2:
puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts("   | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" O | O | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 8:
puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 2:
puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
}break;
case 8:
puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("draw!");
break;
case 5:
puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 7:
puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 2:
puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
puts("draw!");
break;
case 7:
puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("draw!");
break;
}break;
case 6:
puts("   |   |");
        puts(" O |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts("   | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 3:
puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" O |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts("   | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 5:
puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts("   |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 6:
puts("   |   |");
        puts(" O |   | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 7:
puts("   |   |");
        puts("   | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 6:
puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 3:
puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X | X");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("draw!");
break;
case 5:
puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("draw!");
break;
}break;
case 2:
puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" O | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X |  ");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
case 7:
puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   |  ");
        puts("   |   |");

printf("Your move: ");
scanf("%d",&move);
--move;
switch(move){
case 1:
puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | O | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 2:
puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | O");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 3:
puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" O | X |  ");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
case 5:
puts("   |   |");
        puts(" X | O | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts("   | X | O");
        puts("   |   |");
        puts("-----------");
        puts("   |   |");
        puts(" X |   | X");
        puts("   |   |");
puts("betterlucknexttime");
break;
}break;
}break;
}}}