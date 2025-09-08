#define KONSOLE_VERSION "25.11.70"

/* Defined if on DragonFly BSD */
#define HAVE_OS_DRAGONFLYBSD 0

#define WITH_X11 1

#define HAVE_DBUS 1

/* If defined, remove public access to dbus sendInput/runCommand */
#define REMOVE_SENDTEXT_RUNCOMMAND_DBUS_METHODS 0

/* If defined, can checksum rectangular areas of the screen */
#define ENABLE_DECRQCRA 0

#define HAVE_GETPWUID 1

/* Defined if system has the malloc_trim function, which is a GNU extension */
#define HAVE_MALLOC_TRIM 1
