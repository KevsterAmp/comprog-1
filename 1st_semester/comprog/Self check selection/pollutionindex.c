/* A certain city classifies a POLLUTION INDEX of less than 35 as “PLEASANT”. If index is from 35 to 60 it is “UNPLEASANT” and index
 above 60 is “HAZARDOUS”. The city pollution officer wants a program that will accept POLLUTION INDEX and will display appropriate
  classification. 

  Algorithm:
  ALGORITHM POLLUTION_INDEX
  i -> 0
  INPUT "Input pollution index:", i
  IF i < 35 THEN
    OUTPUT "The pollution index is PLEASANT"
  ELSE IF i >= 35 AND i <= 60 THEN
    OUTPUT "The pollution index is UNPLEASANT"
  ELSE
    OUTPUT "The pollution index is HAZARDOUS"
  ENDIF
  ENDIF
  END POLLUTION_INDEX
   */

#include <stdio.h>

int main(void)
{
    int i;
    printf("Input pollution index: ");
    scanf("%d", &i);

    if (i < 35)
      printf("The pollution index is PLEASANT\n");
    else if (i >= 35 && i <= 60)
      printf("The pollution index is UNPLEASANT\n");
    else       
      printf("The pollution index is HAZARDOUS\n");   
}