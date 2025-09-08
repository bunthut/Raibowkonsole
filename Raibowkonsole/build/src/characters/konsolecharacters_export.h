
#ifndef KONSOLECHARACTERS_EXPORT_H
#define KONSOLECHARACTERS_EXPORT_H

#ifdef KONSOLECHARACTERS_STATIC_DEFINE
#  define KONSOLECHARACTERS_EXPORT
#  define KONSOLECHARACTERS_NO_EXPORT
#else
#  ifndef KONSOLECHARACTERS_EXPORT
#    ifdef konsolecharacters_EXPORTS
        /* We are building this library */
#      define KONSOLECHARACTERS_EXPORT __attribute__((visibility("default")))
#    else
        /* We are using this library */
#      define KONSOLECHARACTERS_EXPORT __attribute__((visibility("default")))
#    endif
#  endif

#  ifndef KONSOLECHARACTERS_NO_EXPORT
#    define KONSOLECHARACTERS_NO_EXPORT __attribute__((visibility("hidden")))
#  endif
#endif

#ifndef KONSOLECHARACTERS_DEPRECATED
#  define KONSOLECHARACTERS_DEPRECATED __attribute__ ((__deprecated__))
#endif

#ifndef KONSOLECHARACTERS_DEPRECATED_EXPORT
#  define KONSOLECHARACTERS_DEPRECATED_EXPORT KONSOLECHARACTERS_EXPORT KONSOLECHARACTERS_DEPRECATED
#endif

#ifndef KONSOLECHARACTERS_DEPRECATED_NO_EXPORT
#  define KONSOLECHARACTERS_DEPRECATED_NO_EXPORT KONSOLECHARACTERS_NO_EXPORT KONSOLECHARACTERS_DEPRECATED
#endif

/* NOLINTNEXTLINE(readability-avoid-unconditional-preprocessor-if) */
#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef KONSOLECHARACTERS_NO_DEPRECATED
#    define KONSOLECHARACTERS_NO_DEPRECATED
#  endif
#endif

#endif /* KONSOLECHARACTERS_EXPORT_H */
