#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <getopt.h>

#include "plug-simple/plug-simple.h"
#include "helper/helper.h"

int main(int argc, char ** argv) {
    int ret = 0;
    ret = plug_simple_routine(argc, argv);

    return ret;
}