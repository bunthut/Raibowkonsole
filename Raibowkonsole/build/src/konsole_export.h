
#ifndef KONSOLE_EXPORT_H
#define KONSOLE_EXPORT_H

#ifdef KONSOLE_STATIC_DEFINE
#  define KONSOLE_EXPORT
#  define KONSOLE_NO_EXPORT
#else
#  ifndef KONSOLE_EXPORT
#    ifdef konsolepart_EXPORTS
        /* We are building this library */
#      define KONSOLE_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define KONSOLE_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef KONSOLE_NO_EXPORT
#    define KONSOLE_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef KONSOLE_DEPRECATED
#  define KONSOLE_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef KONSOLE_DEPRECATED_EXPORT
#  define KONSOLE_DEPRECATED_EXPORT KONSOLE_EXPORT KONSOLE_DEPRECATED
#endif

#ifndef KONSOLE_DEPRECATED_NO_EXPORT
#  define KONSOLE_DEPRECATED_NO_EXPORT KONSOLE_NO_EXPORT KONSOLE_DEPRECATED
#endif

/* NOLINTNEXTLINE(readability-avoid-unconditional-preprocessor-if) */
#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef KONSOLE_NO_DEPRECATED
#    define KONSOLE_NO_DEPRECATED
#  endif
#endif

#endif /* KONSOLE_EXPORT_H */
