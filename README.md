## How to use the library?

The library includes **ft_printf** and **libft**.

Which means you must use `#include "ft_printf.h"` or `#include "libft.h"`

You have to tell the file where your library resides and which library it is using:
```
gcc example.c -I libftprintf/inc libftprintf.a
```

By using `-I`, you can provide the path to the directory containing the necessary header files, and the compiler will look for headers in that directory during the compilation process.
