# AOEUI dependencies

It seems that the following header files are not used, on linux:

- termios.h
- unistd.h
- sys/ioctl.h
- sys/time.h

## dirent.h

tab.c : DIR, opendir, readdir, closedir

## regex.h

search.c : regex_t, ...

## sys/mman.h

mmap, munpam, msync, MAP_SHARED, MAP_FAILED, PROT_READ, PROT_WRITE, MS_SYNC

## sys/wait.h

waitpid

## pty

tcgetattr, tcsetattr, TCSANOW
