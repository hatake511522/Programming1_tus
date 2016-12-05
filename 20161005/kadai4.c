#include<stdio.h>
int main(void){
    char male,adult;
    printf("あなたは男性ですか？\n YまたはNで答えてください\n (小文字も可)");
    scanf(" %c",&male);
    printf("あなたは成人ですか？\n YまたはNで答えてください\n (小文字も可)");
    scanf(" %c",&adult);
    
    
    if(male == 'Y' || male == 'y'){
	if(adult == 'Y' || adult == 'y'){
	    printf("あなたは成人の男性です。\n");
	}
	else if(adult == 'N' || adult == 'n'){
	    printf("あなたは未成年の男性です。\n");
	}
	else{
	    printf("YまたはNで答えてください\n(小文字も可)");
    }
    }
     else if(male == 'N' || male == 'n'){
	 if(adult == 'Y' || adult == 'y'){
	    printf("あなたは成人の女性です。\n");
	}
	else if(adult == 'N' || adult == 'n'){
	    printf("あなたは未成年の女性です。\n");
	}
	else{
	    printf("YまたはNで答えてください\n(小文字も可)");
	}
     }
     else{
	 printf("YまたはNで答えてください\n(小文字も可)");
     }
	   

    return 0;
}
