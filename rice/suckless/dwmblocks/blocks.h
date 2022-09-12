//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"", "sh $HOME/.scripts/notereader.sh",					0,		11},
	{" ", "nmcli -t -f NAME connection show --active",			60,		0},
	{"", "bash $HOME/.scripts/battery-percentage.sh",			120,		0},
	{"", "bash $HOME/.scripts/power-mode.sh",			120,		9},
	{" ", "free -h | awk '/^Mem/ { print $3\"/\"$2 }' | sed s/i//g",	5,		0},
	{" ", "sensors | awk '/CPU/ {print $2}'| sed 's/+//' ",		5,		0},
	// for pulseaudio	{" ", "pamixer --get-volume",						0,		10},
	{" ", "$HOME/.scripts/shvol.sh",						0,		10},
	{" ", "date '+%b %d [%a]  %I:%M%p'",					30,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " " ;
static unsigned int delimLen = 5;
