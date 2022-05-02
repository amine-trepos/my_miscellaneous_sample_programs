.\" pdp.ms - figure of a PDP history
.\"
.\" Written in 2022 by amine
.\"
.\" To the extent possible under law, 
.\" the author(s) have dedicated all copyright and related and
.\" neighboring rights to this software to the public domain worldwide.
.\" This software is distributed without any warranty.
.\"
.\" You should have received a copy of the CC0 Public Domain Dedication 
.\" along with this software. 
.\" If not, see <http://creativecommons.org/publicdomain/zero/1.0/>.
.PS
box "PDP-6(1963)" "1st mainframe of DEC" wid 4.5 ht 0.5 dashed;
move to last box .s;
down;
A: box wid 4.5 ht 2 dashed;
move to A .n;
down; move;
left; move;
B: box "Official OS(1964)" "(called monitor)";
move to B .s; 
down;
line;
C: box "WAITS(1967)" "Stanford University" "(west coast)";
move to last box .s;
down;
line; line invis; line invis; line 0.2;
move to C .e;
right;
move; move; move;
box "ITS(1967)" "MIT" "(east coast)"
move to last box .s;
down;
line; line invis; line invis; line 0.2;
move to A .ne;
right;
move; move; move; move;
down; move;
box "PDP-7(1965)" "minicomputer bon marche" wid 3 ht 0.5 dashed;
move to last box .s;
down;
box "UNIX(1969)" "Bell Labs" "The Origin of Modern OS" wid 3 ht 1 dashed;
move to A .s;
down;
move 0.3;
box "PDP-10(1966)" "The good old TSS mainframe" "where every hacker once lived" wid 4.5 ht 0.7 dashed;
move to last box .s;
down;
D: box wid 4.5 ht 1.5 dashed;
move to D .n;
down; move; move 0.2;
left; move;
E: box "WAITS" "/Official TOPS-10(1970)" "Stanford University" "SAIL, origin of" "very important" "developments";
move to E .e;
right;
move; move; move;
box "ITS (golden age)" "MIT" "origin of" "hacker culture" "and" "FOSS"
.PE