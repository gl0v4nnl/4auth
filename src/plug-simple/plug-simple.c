#include <stdlib.h>
#include <errno.h>
#include "plug-simple.h"

#define COUPLES 1

int check_validity(const char * str_to_check);
int apply_creds(const char * str_to_apply);
int check_existing(const struct user_record * creds);
int release_creds(const struct user_record * creds);


int plug_simple_routine(int argc, char ** argv) {
    int ret = 0;

    ret = plug_simple_create_credentials(argv[1], argv[2]);
    
    if (ret)
        printf("ERROR(%d)\n", ret);

    return ret;
}

int plug_simple_create_credentials(const char * name,
                                   const char * password) {
    int ret = 0;

    ret = check_validity(name);
    if (ret)
        return ret;

    ret = check_validity(password);
    if (ret)
        return ret;

    // ret = apply_creds(password);

    return ret;
}

int plug_simple_change_credentials(const char * password) {
    int ret = 0;

    ret = check_validity(password);
    if (ret)
        return ret;
    
    ret = apply_creds(password);

    return ret;
}

int plug_simple_release_credentials(const struct user_record * creds) {
    return release_creds(creds);
}


int check_validity(const char * str_to_check) {
    char * p = (char *)str_to_check;
    int ret = 0;

    if (str_to_check == NULL)
        return EIO;
    
    int couples = 0;
    while (p && *p) {
        if (p != (char *)str_to_check) {
            if (*p == *(p-1)) 
                couples++;
            else
                couples = 0;
        }

        if (couples > COUPLES) {
            ret = EINVAL;
            break;
        }

        p++;
    }

    if (ret)
        return ret;
}

int apply_creds(const char * str_to_apply) {

}

int release_creds(const struct user_record * creds) {
    
}