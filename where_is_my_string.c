/* where_is_my_string.c - print memory state for string literal 
 *
 * Written in 2022 by amine
 *
 * To the extent possible under law,
 * the author(s) have dedicated 
 * all copyright and related and neighboring rights to this software
 * to the public domain worldwide.
 * This software is distributed without any warranty.
 *
 * You should have received 
 * a copy of the CC0 Public Domain Dedication 
 * along with this software.
 * If not, see <http://creativecommons.org/publicdomain/zero/1.0/>.
 */

# include <stdio.h>
# include <string.h>

void print_binary_ascii(char c);

int main (void)
{
	char* pmessage = "Polar bear is strong";/* 調べたい文字列を入力(ASCII) */
	char* p;
	char* pcontrol_char[] = {
		"NUL","SOH","STX","ETX","EOT","ENQ","ACK","BEL",
		"BS","HT","LF","VT","FF","CR","SO","SI",
		"DLE","DC1","DC2","DC3","DC4","NAK","SYN","ETB",
		"CAN","EM","SUB","ESC","FS","GS","RS","US"
	};
	char* pcontrol_char127 = "DEL";

	printf("\n変数pmessageに入っている数値: %p\n", pmessage);
	printf("-----------------------------------------\n");
	printf("メモリ内の様子\n");
	printf("アドレス    内容\n");
	for(p=pmessage;p<=pmessage+strlen(pmessage);p++) {
		printf("%p ",p);
		print_binary_ascii(*p);
		if ((' '<=*p)&&(*p<='~')) {
			printf(" (文字%cのコード%d)\n",*p,*p);
		} else if (*p<' ') {
			printf(" (文字%sのコード%d)\n",pcontrol_char[(int)*p],*p);
		} else {
			printf(" (文字%sのコード%d)\n",pcontrol_char127,*p);
		}
	}
	printf("\n");

	return 0;
}

void print_binary_ascii(char c)
{
	int b7,b6,b5,b4,b3,b2,b1;
	int d = (int)c;
	
	b7 = d/64;
	b6 = (d-b7*64)/32;
	b5 = (d-b7*64-b6*32)/16;
	b4 = (d-b7*64-b6*32-b5*16)/8;
	b3 = (d-b7*64-b6*32-b5*16-b4*8)/4;
	b2 = (d-b7*64-b6*32-b5*16-b4*8-b3*4)/2;
	b1 = (d-b7*64-b6*32-b5*16-b4*8-b3*4-b2*2)/1;

	printf("0%d%d%d%d%d%d%d", b7,b6,b5,b4,b3,b2,b1);
}
