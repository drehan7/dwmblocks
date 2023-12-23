//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{" 🔊 ",        "pamixer --get-volume-human",	                0,		      10},

	{" 💻 ",        "/opt/scripts/memory",	         30,		               0},

	{" ",           "/opt/scripts/battery",	         30,		               0},

	{" 🕑 ",        "/opt/scripts/clock",            10,		               0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " | ";
static unsigned int delimLen = 5;
