//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

	{"🕗 ", "date '+%b %d (%a) %I:%M%p' ",		5,		0},
	{"📦 ", "~/.local/bin/pacupdate", 360, 9},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
