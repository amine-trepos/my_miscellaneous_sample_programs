/* ascii.c - print ascii table
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

int main(void)
{
	int b5,b4,b3,b2,b1;
	char* p[] = {
		"NUL","SOH","STX","ETX","EOT","ENQ","ACK","BEL",
		"BS","HT","LF","VT","FF","CR","SO","SI",
		"DLE","DC1","DC2","DC3","DC4","NAK","SYN","ETB",
		"CAN","EM","SUB","ESC","FS","GS","RS","US"
	};
	char* p127 = "DEL";

	printf("10進 2進(1byte内) 16進 文字\t");
	printf("10進 2進(1byte内) 16進 文字\t");
	printf("10進 2進(1byte内) 16進 文字\t");
	printf("10進 2進(1byte内) 16進 文字\n");
	for (b5=0;b5<2;b5++) {
		for (b4=0;b4<2;b4++) {
			for (b3=0;b3<2;b3++) {
				for (b2=0;b2<2;b2++) {
					for (b1=0;b1<2;b1++) {
						int i = b5*16+b4*8+b3*4+b2*2+b1*1;
						printf("%3d  000%d%d%d%d%d     %2X   %s\t",i,b5,b4,b3,b2,b1,i,p[i]);
						printf("%3d  001%d%d%d%d%d     %2X   %c\t",i+32,b5,b4,b3,b2,b1,i+32,i+32);
						printf("%3d  010%d%d%d%d%d     %2X   %c\t",i+64,b5,b4,b3,b2,b1,i+64,i+64);
						if ((b5==0)||(b4==0)||(b3==0)||(b2==0)||(b1==0)) {
							printf("%3d  011%d%d%d%d%d     %2X   %c\n",i+96,b5,b4,b3,b2,b1,i+96,i+96);
						} else {
							printf("%3d  011%d%d%d%d%d     %2X   %s\n",i+96,b5,b4,b3,b2,b1,i+96,p127);
						}
					}
				}
			}
		}
	}
	return 0;
}
