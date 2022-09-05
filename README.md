# myls script

Just prints content of given directory 

## Example

```bash
$ myls /dev/fd

.
..
0
1
2
```

## Compiling

```bash
$ clang -I lib/includes/listingsLib.h -o myls listing_1.1/main.c lib/src/err.c
```
