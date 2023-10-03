/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
static int colorprompt = 1;                /* -p  option; if 1, prompt uses SchemeSel, otherwise SchemeNorm */
static int centered = 1;                    /* -c option; centers dmenu on screen */
static int min_width = 500;                    /* minimum width when centered */
static int fuzzy = 1;                      /* -F  option; if 0, dmenu doesn't use fuzzy matching     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"CaskaydiaCove Nerd Font Mono:size=9"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char dmenufont[]       = "CaskaydiaCove Nerd Font Mono:size=9:antialias=true:autohint=false";
static const char col_gray1[]       = "#d3d7cf";
static const char col_gray2[]       = "#d3d7cf";
static const char col_gray3[]       = "#000000";
static const char col_gray4[]       = "#ffffff";
static const char col_cyan[]        = "#0000aa";
static const char col_evergreen[]   = "#2B573D";
static const char col_dawn_white[]  = "#F2E9E1";
static const char col_dawn_dusk[]   = "#286983";
static const char col_dawn_pink[]   = "#EBBCBA";
static const char col_yellow[]      = "#F5C700";

static const char *colors[SchemeLast][2] = {
	              /*     fg         bg       */
	[SchemeNorm] = { col_gray3, col_dawn_white },
	[SchemeSel] = { col_dawn_white, col_evergreen },
	[SchemeSelHighlight] = { "#ffc978", "#005577" },
	[SchemeNormHighlight] = { "#ffc978", "#222222" },
	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 10;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 2;
