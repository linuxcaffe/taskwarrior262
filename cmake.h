/* cmake.h.in. Creates cmake.h during a cmake run */

/* Product identification */
#define PRODUCT_TASKWARRIOR 1

/* Package information */
#define PACKAGE           "task"
#define VERSION           "2.6.2"
#define PACKAGE_BUGREPORT "support@gothenburgbitfactory.org"
#define PACKAGE_NAME      "task"
#define PACKAGE_TARNAME   "task"
#define PACKAGE_VERSION   "2.6.2"
#define PACKAGE_STRING    "task 2.6.2"

#define CMAKE_BUILD_TYPE  "release"

/* Installation details */
#define TASK_RCDIR "/usr/local/share/doc/task/rc"

/* git information */
/* #undef HAVE_COMMIT */

/* cmake information */
#define HAVE_CMAKE
#define CMAKE_VERSION "3.22.1"

/* Compiling platform */
#define LINUX
/* #undef DARWIN */
/* #undef CYGWIN */
/* #undef FREEBSD */
/* #undef OPENBSD */
/* #undef NETBSD */
/* #undef DRAGONFLY */
/* #undef HAIKU */
/* #undef SOLARIS */
/* #undef KFREEBSD */
/* #undef GNUHURD */
/* #undef UNKNOWN */

/* Found the GnuTLS library */
#define HAVE_LIBGNUTLS

/* Found tm_gmtoff */
#define HAVE_TM_GMTOFF

/* Found timegm */
#define HAVE_TIMEGM

/* Found st.st_birthtime struct member */
/* #undef HAVE_ST_BIRTHTIME */

/* Found get_current_dir_name */
#define HAVE_GET_CURRENT_DIR_NAME

/* Found uuid_unparse_lower in the uuid library */
#define HAVE_UUID_UNPARSE_LOWER

/* Found wordexp.h */
#define HAVE_WORDEXP

/* Undefine this to eliminate the execute command */
#define HAVE_EXECUTE 1

