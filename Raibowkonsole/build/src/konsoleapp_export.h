
#ifndef KONSOLEAPP_EXPORT_H
#define KONSOLEAPP_EXPORT_H

#ifdef KONSOLEAPP_STATIC_DEFINE
#  define KONSOLEAPP_EXPORT
#  define KONSOLEAPP_NO_EXPORT
#else
#  ifndef KONSOLEAPP_EXPORT
#    ifdef konsoleapp_EXPORTS
        /* We are building this library */
#      define KONSOLEAPP_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define KONSOLEAPP_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef KONSOLEAPP_NO_EXPORT
#    define KONSOLEAPP_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef KONSOLEAPP_DEPRECATED
#  define KONSOLEAPP_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef KONSOLEAPP_DEPRECATED_EXPORT
#  define KONSOLEAPP_DEPRECATED_EXPORT KONSOLEAPP_EXPORT KONSOLEAPP_DEPRECATED
#endif

#ifndef KONSOLEAPP_DEPRECATED_NO_EXPORT
#  define KONSOLEAPP_DEPRECATED_NO_EXPORT KONSOLEAPP_NO_EXPORT KONSOLEAPP_DEPRECATED
#endif

/* NOLINTNEXTLINE(readability-avoid-unconditional-preprocessor-if) */
#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef KONSOLEAPP_NO_DEPRECATED
#    define KONSOLEAPP_NO_DEPRECATED
#  endif
#endif

#endif /* KONSOLEAPP_EXPORT_H */
