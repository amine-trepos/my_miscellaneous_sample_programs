/* read_string.c - sample of how to save and call a string
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

#include <stdio.h>

int main (void)
{
	char* pmessage = "Hello, world!";

	printf("%s\n", pmessage);

	return 0;
}
