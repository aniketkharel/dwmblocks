//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"Cpu:", "~/dot.org/.config/i3/scripts/cpu_usage",	5,		0},
	{"Mem:", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	30,		0},
	{"BAT:", "~/dot.org/.config/i3/scripts/battery1", 30, 0 },
	{"", "~/dot.org/.config/i3/scripts/temperature", 30, 0 },
	{"", "date '+%b %d (%a) %I:%M%p'",					5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
