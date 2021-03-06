#include <consumer.h>

Consumer
consumer_init(char kind, void *opt)
{
    Consumer c;
    switch (kind)
    {
        case 'd':
            c = dummy_consumer_init();
            break;
        case 'f':
            c = file_consumer_init(((Options *)opt)->in_file);
            break;
        case 'r':
            c = redis_consumer_init(((Options *)opt)->in_host, ((Options *)opt)->in_topic, ((Options *)opt)->in_pipeline);
            break;
        case 'k':
            c = kafka_consumer_init(((Options *)opt)->in_broker, ((Options *)opt)->in_topic, ((Options *)opt)->in_groupid);
            break;
        default:
            return NULL;
    }
    return c;
}

void
consumer_free(Consumer *c)
{
    if ((*c) == NULL)
        return;
    (*c)->consumer_free(c);
}

int
consumer_consume(Consumer c, Message msg)
{
    if (c == NULL)
        return -1;
    return c->consume(c, msg);
}
