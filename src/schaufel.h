#ifndef _SCHAUFEL_H_
#define _SCHAUFEL_H_

typedef struct Options {
    char  input;
    char *in_host;
    char *in_broker;
    int   in_port;
    char *in_file;
    char *in_groupid;
    char *in_topic;
    char  output;
    char *out_host;
    char *out_broker;
    int   out_port;
    char *out_file;
    char *out_groupid;
    char *out_topic;

} Options;

#endif