#ifndef PLUG_SIMPLE
#define PLUG_SIMPLE

#define GENERIC_LENGTH  32
#define NAME_LENGTH     GENERIC_LENGTH
#define PASSWORD_LENGTH GENERIC_LENGTH

struct user_record {
    char name[NAME_LENGTH];
    char password[PASSWORD_LENGTH];
};


int plug_simple_routine(int argc, char ** argv);
// int plug_simple_create_credentials(const char * name,
//                                    const char * password);
// int plug_simple_change_credentials(const char * password);
// int plug_simple_release_credentials(const struct user_record * creds);

#endif