#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <net/if_ether.h>
#include <ctype.h>

struct ether_addr *ether_aton_r (const char *asc, struct ether_addr * addr);
