static const char *colorname[] = {
	/* 8 normal colors */
	"white",
	// "white",
	"#dd0033",
	"#117700",
	"#dd7700",
	"#0022dd",
	"#dd00dd",
	"#0077dd",
	// "gray90",
	// "black",
	"black",

	/* 8 bright colors */
	// "gray50",
	"grey60",
	// "red",
	// "green",
	// "yellow",
	// "#5c5cff",
	// "magenta",
	// "cyan",
	"#ff3355",
	"#449933",
	"#ff9933",
	"#3355ff",
	"#ff33ff",
	"#3399ff",
	"black",
	// "grey20",

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#cccccc",
	"#555555",
};


/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 7;
unsigned int defaultbg = 0;
static unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;

