/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 0;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Iosevka Sparkle:size=11"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *dynamic     = NULL;      /* -dy option; dynamic command to run on input change */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#333", "#fff" },
	[SchemeSel] = { "#000", "#eee" },
	[SchemeSelHighlight] = { "#d9002b", "#eee" },
	[SchemeNormHighlight] = { "#d9002b", "#fff7ba" },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 60;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
