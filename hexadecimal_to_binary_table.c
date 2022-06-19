/* hexadecimal_to_binary_table.c 
 * - print table of correspondence between 2-digit hexadecimal and 8-bit array of physical units of information
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

int main (void)
{
	int b5,b4,b3,b2,b1;
	printf("\t\tod の結果で出てくる2桁の16進法の数はどのような物理的情報単位の並び(1バイト)の略記か\n");
	printf("\033[33m黄=ASCIIでも使われる範囲(文字と解釈されるデータかもしれない)\033[m\t");
	printf("白=ASCIIでは使われない範囲(文字とは解釈できない何らかのデータ)\n");
	for (b5=0;b5<2;b5++) {
		for (b4=0;b4<2;b4++) {
			for (b3=0;b3<2;b3++) {
				for (b2=0;b2<2;b2++) {
					for (b1=0;b1<2;b1++) {
						int i = b5*16+b4*8+b3*4+b2*2+b1*1;
						printf("\033[33m%02x  000%d%d%d%d%d\033[m\t",i,b5,b4,b3,b2,b1);
						printf("\033[33m%02x  001%d%d%d%d%d\033[m\t",i+32,b5,b4,b3,b2,b1);
						printf("\033[33m%02x  010%d%d%d%d%d\033[m\t",i+64,b5,b4,b3,b2,b1);
						printf("\033[33m%02x  011%d%d%d%d%d\033[m\t",i+96,b5,b4,b3,b2,b1);
						printf("%02x  100%d%d%d%d%d\t",i+128,b5,b4,b3,b2,b1);
						printf("%02x  101%d%d%d%d%d\t",i+160,b5,b4,b3,b2,b1);
						printf("%02x  110%d%d%d%d%d\t",i+192,b5,b4,b3,b2,b1);
						printf("%02x  111%d%d%d%d%d\n",i+224,b5,b4,b3,b2,b1);
					}
				}
			}
		}
	}
	
	return 0;
}
