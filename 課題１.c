/**文字を表記するためのプログラム**/

#include <stdio.h>

int main()
{
    /**名前を付けて数字を保存しとくよ**/
   /**printfは""の間に表記したい文字を書くよ**/
    int MONSTERHUNTER = 998;
       printf("モンスターハンターのランクが%dになりました",MONSTERHUNTER);
       MONSTERHUNTER = MONSTERHUNTER/2;
       printf("\nあ、ごめん！%d回力尽きました",MONSTERHUNTER);
    /**RETURN　0;はプログラム終了**/
    /**\nは行を変える**/
    return 0;
}