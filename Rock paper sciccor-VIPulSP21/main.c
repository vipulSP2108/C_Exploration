#include <stdio.h>

int main(void){
  printf("WELCOME \nStone Paper Siccor \n Enter Choice by typeing (rock, siccor, paper) or end to end the game\n");
  int i, point1, point2, draw = 0;
  for(int i = 0; i >= 0; i += 1){
    
    char user1, user2;
    printf("User1\n");
    scanf("%c",&user1);
    printf("User2\n");
    scanf("%c",&user2);
      
    if (user1 == 'e'){
      printf("Thank You\n");
      break;
    }
    
    else if (user1 == 'r'){
      if (user2 == 'r'){
        printf("Draw");
        draw += 1;
      }
      else if (user2 == 'p'){
        printf("user2 wins this round");
        point2 += 1;
        
      }
      else if (user2 == 's'){
        printf("user1 wins this round");
        point1 += 1;
      }
    }

    else if (user1 == 'p'){
      if (user2 == 'r'){
        printf("user1 wins this round");
        point1 += 1;
      }
      else if (user2 == 'p'){
        printf("Draw");
        draw += 1;
      }
      else if (user2 == 's'){
        printf("user2 wins this round");
        point2 += 1;
      }
    }

    else if (user1 == 's'){
      if (user2 == 'r'){
        printf("user2 wins this round");
        point2 += 1;
      }
      else if (user2 == 'p'){
        printf("user1 wins this round");
        point1 += 1;
      }
      else if (user2 == 's'){
        printf("Draw");
        draw += 1;
      }
    }
  }
  printf("RESULTS\npoints of user1 = %d \npoints of user2 = %d\nWINNER IS\n");
  point1 > point2 ? printf("USER1") : printf("USER2");
  return 0;
}
