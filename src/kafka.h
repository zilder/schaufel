#ifndef _SCHAUFEL_KAFKA_H_
#define _SCHAUFEL_KAFKA_H_

#include <consumer.h>
#include <librdkafka/rdkafka.h>
#include <utils/logger.h>
#include <producer.h>
#include <queue.h>
#include <stdlib.h>

typedef struct Producer *Producer;

Producer kafka_producer_init(char *broker, char *topic);

void kafka_producer_free(Producer *p);

void kafka_producer_produce(Producer p, Message msg);

typedef struct Consumer *Consumer;

Consumer kafka_consumer_init(char *broker, char *topic, char *groupid);

void kafka_consumer_free(Consumer *c);

int kafka_consumer_consume(Consumer c, Message msg);

#endif
