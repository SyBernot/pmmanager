#define FILENAME "processlog"
#define MENU "w-write all process to file\nd-dump all processes\nn-list new processes not in file\nc-clear file\nl-list launched processes(loop until ctrl-C)\nf-set filter for launched processes command (defualt is kworker)\nq-quit\nr-remove log file"
#define HELP "options:\n pmmanager watchdog <not include processes with this in their name> - lists all the processes that were started as the program was ran\n pmmanager interactive - interactive mode\n pmmanager <id> - detailed information about a process\n pmmanager - same as ps -ea"
