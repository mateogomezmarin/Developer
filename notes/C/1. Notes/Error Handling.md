There is no direct support: usage of errno global variable from errno.h variable.

**Checking for errors:

| Characteristic     | C                                                                                                                                                                                                                           | Java                      |
| ------------------ | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------- |
| **Error handling** | There is no direct support: usage of `errno` global variable from `errno.h` library                                                                                                                                         | Exceptions                |
| **Exit status**    | - Use `exit(EXIT_SUCCESS)` when finishing your program with no errors.- Use `exit(EXIT_FAILURE)` when finishing your program with errors.- Beware that `return` returns from a function, while `exit` finishes the program. | `System.exit(int status)` |

```
```
