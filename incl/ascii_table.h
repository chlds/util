/* **** ASCII table

ASCII stands for American Standard Code for Information Interchange.

Remarks:
ANSI code pages can be different on different computers.
Refer Code Page Identifiers on site:docs.microsoft.com.
*/







/* in 7-bit ASCII */

enum {
NUL, SOH, STX, ETX, EOT, ENQ, ACK, BEL,\
BS,  HT,  LF,  VT,  FF,  CR,  SO,  SI, \
DLE, DC1, DC2, DC3, DC4, NAK, SYN, ETB,\
CAN, EM,  SUB, ESC, FS,  GS,  RS,  US, \
SP
};

signed const(DEL) = (0x7F);

signed char(*(ascii[])) = {

(signed char(*)) ("NUL"),
(signed char(*)) ("SOH"),
(signed char(*)) ("STX"),
(signed char(*)) ("ETX"),

(signed char(*)) ("EOT"),
(signed char(*)) ("ENQ"),
(signed char(*)) ("ACK"),
(signed char(*)) ("BEL"),

/*
null
start of heading
start of text
end of text

end of transmission
enquiry
acknowledge
bell
*/

(signed char(*)) ("BS"),
(signed char(*)) ("HT"),
(signed char(*)) ("LF"),
(signed char(*)) ("VT"),

(signed char(*)) ("FF"),
(signed char(*)) ("CR"),
(signed char(*)) ("SO"),
(signed char(*)) ("SI"),

/*
backspace
horizontal tab
line feed
vertical tab

form feed
carriage return
shift out
shift in
*/

(signed char(*)) ("DLE"),
(signed char(*)) ("DC1"),
(signed char(*)) ("DC2"),
(signed char(*)) ("DC3"),

(signed char(*)) ("DC4"),
(signed char(*)) ("NAK"),
(signed char(*)) ("SYN"),
(signed char(*)) ("ETB"),

/*
data link escape
device control 1
device control 2
device control 3

device control 4
negative acknowledge
synchronous idle
end of trans. block
*/

(signed char(*)) ("CAN"),
(signed char(*)) ("EM"),
(signed char(*)) ("SUB"),
(signed char(*)) ("ESC"),

(signed char(*)) ("FS"),
(signed char(*)) ("GS"),
(signed char(*)) ("RS"),
(signed char(*)) ("US"),

/*
cancel
end of medium
substitute
escape

file separator
group separator
record separator
unit separator
*/

(signed char(*)) (" "),
(signed char(*)) ("!"),
(signed char(*)) ("\""),
(signed char(*)) ("#"),
(signed char(*)) ("$"),
(signed char(*)) ("%"),
(signed char(*)) ("&"),
(signed char(*)) ("'"),

(signed char(*)) ("("),
(signed char(*)) (")"),
(signed char(*)) ("*"),
(signed char(*)) ("+"),
(signed char(*)) (","),
(signed char(*)) ("-"),
(signed char(*)) ("."),
(signed char(*)) ("/"),

/*
space !     "     #     $     %     &     '
(     )     *     +     ,     -     .     /
*/

(signed char(*)) ("0"),
(signed char(*)) ("1"),
(signed char(*)) ("2"),
(signed char(*)) ("3"),
(signed char(*)) ("4"),
(signed char(*)) ("5"),
(signed char(*)) ("6"),
(signed char(*)) ("7"),

(signed char(*)) ("8"),
(signed char(*)) ("9"),
(signed char(*)) (":"),
(signed char(*)) (";"),
(signed char(*)) ("<"),
(signed char(*)) ("="),
(signed char(*)) (">"),
(signed char(*)) ("?"),

/*
0     1     2     3     4     5     6     7
8     9     :     ;     <     =     >     ?
*/

(signed char(*)) ("@"),
(signed char(*)) ("A"),
(signed char(*)) ("B"),
(signed char(*)) ("C"),
(signed char(*)) ("D"),
(signed char(*)) ("E"),
(signed char(*)) ("F"),
(signed char(*)) ("G"),

(signed char(*)) ("H"),
(signed char(*)) ("I"),
(signed char(*)) ("J"),
(signed char(*)) ("K"),
(signed char(*)) ("L"),
(signed char(*)) ("M"),
(signed char(*)) ("N"),
(signed char(*)) ("O"),

(signed char(*)) ("P"),
(signed char(*)) ("Q"),
(signed char(*)) ("R"),
(signed char(*)) ("S"),
(signed char(*)) ("T"),
(signed char(*)) ("U"),
(signed char(*)) ("V"),
(signed char(*)) ("W"),

(signed char(*)) ("X"),
(signed char(*)) ("Y"),
(signed char(*)) ("Z"),
(signed char(*)) ("["),
(signed char(*)) ("\\"),
(signed char(*)) ("]"),
(signed char(*)) ("^"),
(signed char(*)) ("_"),

/*
@ A B C   D E F G   H I J K   L M N O   P Q R S   T U V W   X Y Z [   \ ] ^ _
*/

(signed char(*)) ("`"),
(signed char(*)) ("a"),
(signed char(*)) ("b"),
(signed char(*)) ("c"),
(signed char(*)) ("d"),
(signed char(*)) ("e"),
(signed char(*)) ("f"),
(signed char(*)) ("g"),

(signed char(*)) ("h"),
(signed char(*)) ("i"),
(signed char(*)) ("j"),
(signed char(*)) ("k"),
(signed char(*)) ("l"),
(signed char(*)) ("m"),
(signed char(*)) ("n"),
(signed char(*)) ("o"),

(signed char(*)) ("p"),
(signed char(*)) ("q"),
(signed char(*)) ("r"),
(signed char(*)) ("s"),
(signed char(*)) ("t"),
(signed char(*)) ("u"),
(signed char(*)) ("v"),
(signed char(*)) ("w"),

(signed char(*)) ("x"),
(signed char(*)) ("y"),
(signed char(*)) ("z"),
(signed char(*)) ("{"),
(signed char(*)) ("|"),
(signed char(*)) ("}"),
(signed char(*)) ("~"),
(signed char(*)) ("DEL"),

/*
` a b c   d e f g   h i j k   l m n o   p q r s   t u v w   x y z {   | } ~ DEL
*/

(signed char(*)) (0x00)
};
