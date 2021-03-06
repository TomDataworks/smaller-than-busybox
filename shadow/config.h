/* config.h.  Generated automatically by configure.  */
/* config.h.in.  Generated automatically from configure.in by autoheader.  */

/* Define if using alloca.c.  */
/* #undef C_ALLOCA */

/* Define to empty if the keyword does not work.  */
/* #undef const */

/* Define to one of _getb67, GETB67, getb67 for Cray-2 and Cray-YMP systems.
   This function is required for alloca.c support on those systems.  */
/* #undef CRAY_STACKSEG_END */

/* Define to the type of elements in the array set by `getgroups'.
   Usually this is either `int' or `gid_t'.  */
#define GETGROUPS_T gid_t

/* Define to `int' if <sys/types.h> doesn't define.  */
/* #undef gid_t */

/* Define if you have alloca, as a function or macro.  */
#define HAVE_ALLOCA 1

/* Define if you have <alloca.h> and it should be used (not on Ultrix).  */
#define HAVE_ALLOCA_H 1

/* Define if you have a working `mmap' system call.  */
#define HAVE_MMAP 1

/* Define if your struct stat has st_rdev.  */
#define HAVE_ST_RDEV 1

/* Define if you have the strftime function.  */
#define HAVE_STRFTIME 1

/* Define if you have <sys/wait.h> that is POSIX.1 compatible.  */
#define HAVE_SYS_WAIT_H 1

/* Define if utime(file, NULL) sets file's timestamp to the present.  */
#define HAVE_UTIME_NULL 1

/* Define as __inline if that's what the C compiler calls it.  */
/* #undef inline */

/* Define to `int' if <sys/types.h> doesn't define.  */
/* #undef mode_t */

/* Define to `long' if <sys/types.h> doesn't define.  */
/* #undef off_t */

/* Define to `int' if <sys/types.h> doesn't define.  */
/* #undef pid_t */

/* Define if you need to in order for stat and other things to work.  */
/* #undef _POSIX_SOURCE */

/* Define as the return type of signal handlers (int or void).  */
#define RETSIGTYPE void

/* Define if the `setpgrp' function takes no argument.  */
#define SETPGRP_VOID 1

/* Define to `unsigned' if <sys/types.h> doesn't define.  */
/* #undef size_t */

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at run-time.
 STACK_DIRECTION > 0 => grows toward higher addresses
 STACK_DIRECTION < 0 => grows toward lower addresses
 STACK_DIRECTION = 0 => direction of growth unknown
 */
/* #undef STACK_DIRECTION */

/* Define if the `S_IS*' macros in <sys/stat.h> do not work properly.  */
/* #undef STAT_MACROS_BROKEN */

/* Define if you have the ANSI C header files.  */
#define STDC_HEADERS 1

/* Define if you can safely include both <sys/time.h> and <time.h>.  */
#define TIME_WITH_SYS_TIME 1

/* Define if your <sys/time.h> declares struct tm.  */
/* #undef TM_IN_SYS_TIME */

/* Define to `int' if <sys/types.h> doesn't define.  */
/* #undef uid_t */

/* Define if you do not have <strings.h>, index, bzero, etc..  */
#define USG 1

/* Define to enable password aging.  */
#define AGING 1

/* Define if struct passwd has pw_age.  */
/* #undef ATT_AGE */

/* Define if struct passwd has pw_comment.  */
/* #undef ATT_COMMENT */

/* Define if struct passwd has pw_quota.  */
/* #undef BSD_QUOTA */

/* Define if you have secure RPC.  */
/* #undef DES_RPC */

/* Define to 1 if NLS is requested.  */
#define ENABLE_NLS 1

/* Path for faillog file.  */
#define FAILLOG_FILE "/var/log/faillog"

/* Define to libshadow_getpass to use our own version of getpass().  */
#define getpass libshadow_getpass

/* Define as 1 if you have catgets and don't want to use GNU gettext.  */
/* #undef HAVE_CATGETS */

/* Define as 1 if you have gettext and don't want to use GNU gettext.  */
#define HAVE_GETTEXT 1

/* Define if your locale.h file contains LC_MESSAGES.  */
#define HAVE_LC_MESSAGES 1

/* Defined if you have libcrack.  */
/* #undef HAVE_LIBCRACK */

/* Defined if you have the ts&szs cracklib.  */
/* #undef HAVE_LIBCRACK_HIST */

/* Defined if it includes *Pw functions.  */
/* #undef HAVE_LIBCRACK_PW */

/* Defined if you have libcrypt.  */
/* #undef HAVE_LIBCRYPT */

/* Define if struct lastlog has ll_host */
#define HAVE_LL_HOST 1

/* Working shadow group support in libc?  */
/* #undef HAVE_SHADOWGRP */

/* Define to 1 if you have the stpcpy function.  */
/* #undef HAVE_STPCPY */

/* Define to support TCFS. */
/* #undef HAVE_TCFS */

/* Path for lastlog file.  */
#define LASTLOG_FILE "/var/log/lastlog"

/* Define to support /etc/login.access login access control.  */
#define LOGIN_ACCESS 1

/* Location of system mail spool directory.  */
#define MAIL_SPOOL_DIR "/var/spool/mail"

/* Name of user's mail spool file if stored in user's home directory.  */
/* #undef MAIL_SPOOL_FILE */

/* Define to support the MD5-based password hashing algorithm.  */
/* #undef MD5_CRYPT */

/* Define to support OPIE one-time password logins.  */
/* #undef OPIE */

/* Define if pam_strerror() needs two arguments (Linux-PAM 0.59+).  */
/* #undef PAM_STRERROR_NEEDS_TWO_ARGS */

/* Path to passwd program.  */
#define PASSWD_PROGRAM "/usr/bin/passwd"

/* Define if login should support the -r flag for rlogind.  */
#define RLOGIN 1

/* Define to the ruserok() "success" return value (0 or 1).  */
#define RUSEROK 0

/* Define to support the shadow group file.  */
#define SHADOWGRP 1

/* Define to support the shadow password file.  */
#define SHADOWPWD 1

/* Define to support S/Key logins.  */
/* #undef SKEY */

/* Define to support /etc/suauth su access control.  */
#define SU_ACCESS 1

/* Define if you want gdbm for TCFS. */
/* #undef TCFS_GDBM_SUPPORT */

/* Define to support Pluggable Authentication Modules.  */
/* #undef USE_PAM */

/* Define to use syslog().  */
#define USE_SYSLOG 1

/* Define if you have ut_host in struct utmp.  */
#define UT_HOST 1

/* Path for utmp file.  */
#define _UTMP_FILE "/var/run/utmp"

/* Define to ut_name if struct utmp has ut_name (not ut_user).  */
/* #undef ut_user */

/* Path for wtmp file.  */
#define _WTMP_FILE "/var/log/wtmp"

/* Define if you have the __argz_count function.  */
/* #undef HAVE___ARGZ_COUNT */

/* Define if you have the __argz_next function.  */
/* #undef HAVE___ARGZ_NEXT */

/* Define if you have the __argz_stringify function.  */
/* #undef HAVE___ARGZ_STRINGIFY */

/* Define if you have the a64l function.  */
/* #undef HAVE_A64L */

/* Define if you have the dcgettext function.  */
#define HAVE_DCGETTEXT 1

/* Define if you have the fchmod function.  */
#define HAVE_FCHMOD 1

/* Define if you have the fchown function.  */
#define HAVE_FCHOWN 1

/* Define if you have the fsync function.  */
#define HAVE_FSYNC 1

/* Define if you have the getcwd function.  */
#define HAVE_GETCWD 1

/* Define if you have the getgroups function.  */
#define HAVE_GETGROUPS 1

/* Define if you have the gethostname function.  */
#define HAVE_GETHOSTNAME 1

/* Define if you have the getpagesize function.  */
#define HAVE_GETPAGESIZE 1

/* Define if you have the getspnam function.  */
#define HAVE_GETSPNAM 1

/* Define if you have the gettimeofday function.  */
#define HAVE_GETTIMEOFDAY 1

/* Define if you have the getusershell function.  */
#define HAVE_GETUSERSHELL 1

/* Define if you have the getutent function.  */
#define HAVE_GETUTENT 1

/* Define if you have the initgroups function.  */
#define HAVE_INITGROUPS 1

/* Define if you have the lckpwdf function.  */
/* #undef HAVE_LCKPWDF */

/* Define if you have the memcpy function.  */
#define HAVE_MEMCPY 1

/* Define if you have the memset function.  */
#define HAVE_MEMSET 1

/* Define if you have the mkdir function.  */
#define HAVE_MKDIR 1

/* Define if you have the munmap function.  */
#define HAVE_MUNMAP 1

/* Define if you have the putenv function.  */
#define HAVE_PUTENV 1

/* Define if you have the putgrent function.  */
/* #undef HAVE_PUTGRENT */

/* Define if you have the putpwent function.  */
#define HAVE_PUTPWENT 1

/* Define if you have the putspent function.  */
/* #undef HAVE_PUTSPENT */

/* Define if you have the rename function.  */
#define HAVE_RENAME 1

/* Define if you have the rmdir function.  */
#define HAVE_RMDIR 1

/* Define if you have the setenv function.  */
#define HAVE_SETENV 1

/* Define if you have the setgroups function.  */
#define HAVE_SETGROUPS 1

/* Define if you have the setlocale function.  */
#define HAVE_SETLOCALE 1

/* Define if you have the sgetgrent function.  */
/* #undef HAVE_SGETGRENT */

/* Define if you have the sgetpwent function.  */
/* #undef HAVE_SGETPWENT */

/* Define if you have the sgetspent function.  */
/* #undef HAVE_SGETSPENT */

/* Define if you have the sigaction function.  */
#define HAVE_SIGACTION 1

/* Define if you have the snprintf function.  */
#define HAVE_SNPRINTF 1

/* Define if you have the stpcpy function.  */
/* #undef HAVE_STPCPY */

/* Define if you have the strcasecmp function.  */
#define HAVE_STRCASECMP 1

/* Define if you have the strchr function.  */
#define HAVE_STRCHR 1

/* Define if you have the strdup function.  */
#define HAVE_STRDUP 1

/* Define if you have the strerror function.  */
#define HAVE_STRERROR 1

/* Define if you have the strstr function.  */
#define HAVE_STRSTR 1

/* Define if you have the updwtmp function.  */
#define HAVE_UPDWTMP 1

/* Define if you have the updwtmpx function.  */
/* #undef HAVE_UPDWTMPX */

/* Define if you have the <argz.h> header file.  */
#define HAVE_ARGZ_H 1

/* Define if you have the <dirent.h> header file.  */
#define HAVE_DIRENT_H 1

/* Define if you have the <fcntl.h> header file.  */
#define HAVE_FCNTL_H 1

/* Define if you have the <gshadow.h> header file.  */
#define HAVE_GSHADOW_H 1

/* Define if you have the <lastlog.h> header file.  */
#define HAVE_LASTLOG_H 1

/* Define if you have the <limits.h> header file.  */
#define HAVE_LIMITS_H 1

/* Define if you have the <locale.h> header file.  */
#define HAVE_LOCALE_H 1

/* Define if you have the <malloc.h> header file.  */
#define HAVE_MALLOC_H 1

/* Define if you have the <ndir.h> header file.  */
/* #undef HAVE_NDIR_H */

/* Define if you have the <nl_types.h> header file.  */
#define HAVE_NL_TYPES_H 1

/* Define if you have the <paths.h> header file.  */
#define HAVE_PATHS_H 1

/* Define if you have the <rpc/key_prot.h> header file.  */
#define HAVE_RPC_KEY_PROT_H 1

/* Define if you have the <sgtty.h> header file.  */
#define HAVE_SGTTY_H 1

/* Define if you have the <shadow.h> header file.  */
#define HAVE_SHADOW_H 1

/* Define if you have the <string.h> header file.  */
#define HAVE_STRING_H 1

/* Define if you have the <sys/dir.h> header file.  */
/* #undef HAVE_SYS_DIR_H */

/* Define if you have the <sys/ioctl.h> header file.  */
#define HAVE_SYS_IOCTL_H 1

/* Define if you have the <sys/ndir.h> header file.  */
/* #undef HAVE_SYS_NDIR_H */

/* Define if you have the <sys/param.h> header file.  */
#define HAVE_SYS_PARAM_H 1

/* Define if you have the <sys/resource.h> header file.  */
#define HAVE_SYS_RESOURCE_H 1

/* Define if you have the <sys/time.h> header file.  */
#define HAVE_SYS_TIME_H 1

/* Define if you have the <syslog.h> header file.  */
#define HAVE_SYSLOG_H 1

/* Define if you have the <termio.h> header file.  */
#define HAVE_TERMIO_H 1

/* Define if you have the <termios.h> header file.  */
#define HAVE_TERMIOS_H 1

/* Define if you have the <ulimit.h> header file.  */
#define HAVE_ULIMIT_H 1

/* Define if you have the <unistd.h> header file.  */
#define HAVE_UNISTD_H 1

/* Define if you have the <usersec.h> header file.  */
/* #undef HAVE_USERSEC_H */

/* Define if you have the <utime.h> header file.  */
#define HAVE_UTIME_H 1

/* Define if you have the <utmp.h> header file.  */
#define HAVE_UTMP_H 1

/* Define if you have the <utmpx.h> header file.  */
#define HAVE_UTMPX_H 1

/* Define if you have the i library (-li).  */
/* #undef HAVE_LIBI */

/* Define if you have the inet library (-linet).  */
/* #undef HAVE_LIBINET */

/* Define if you have the nsl library (-lnsl).  */
/* #undef HAVE_LIBNSL */

/* Define if you have the socket library (-lsocket).  */
/* #undef HAVE_LIBSOCKET */

/* Name of package */
#define PACKAGE "shadow"

/* Version number of package */
#define VERSION "19990827"

/* Define if compiler has function prototypes */
#define PROTOTYPES 1

