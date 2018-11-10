#ifndef INLINE_H
#define INLINE_H

#ifndef INLINE
# ifdef __GNUC__
#  define INLINE static __inline__
# else
#  define INLINE static
# endif
#endif

#endif // INLINE_H
