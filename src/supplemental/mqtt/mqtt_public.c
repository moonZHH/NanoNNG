#include "mqtt_msg.h"
#include <string.h>
#include "mqtt_qos_db.h"

int
nng_mqtt_msg_proto_data_alloc(nng_msg *msg)
{
	return nni_mqtt_msg_proto_data_alloc(msg);
}

void
nng_mqtt_msg_proto_data_free(nng_msg *msg)
{
	nni_mqtt_msg_proto_data_free(msg);
}

int
nng_mqtt_msg_alloc(nng_msg **msg, size_t sz)
{
	return nni_mqtt_msg_alloc(msg, sz);
}

int
nng_mqtt_msg_encode(nng_msg *msg)
{
	return nni_mqtt_msg_encode(msg);
}

int
nng_mqtt_msg_decode(nng_msg *msg)
{
	return nni_mqtt_msg_decode(msg);
}

int
nng_mqttv5_msg_encode(nng_msg *msg)
{
	return nni_mqttv5_msg_encode(msg);
}

int
nng_mqttv5_msg_decode(nng_msg *msg)
{
	return nni_mqttv5_msg_decode(msg);
}

int
nng_mqtt_msg_validate(nng_msg *msg, uint8_t proto_ver)
{
	return nni_mqtt_msg_validate(msg, proto_ver);
}

void
nng_mqtt_msg_set_packet_type(nng_msg *msg, nng_mqtt_packet_type packet_type)
{
	nni_mqtt_msg_set_packet_type(msg, (nni_mqtt_packet_type) packet_type);
}

nng_mqtt_packet_type
nng_mqtt_msg_get_packet_type(nng_msg *msg)
{
	return (nng_mqtt_packet_type) nni_mqtt_msg_get_packet_type(msg);
}

void
nng_mqtt_msg_set_connect_clean_session(nng_msg *msg, bool clean_session)
{
	nni_mqtt_msg_set_connect_clean_session(msg, clean_session);
}

void
nng_mqtt_msg_set_connect_will_retain(nng_msg *msg, bool will_retain)
{
	nni_mqtt_msg_set_connect_will_retain(msg, will_retain);
}

void
nng_mqtt_msg_set_connect_will_qos(nng_msg *msg, uint8_t will_qos)
{
	nni_mqtt_msg_set_connect_will_qos(msg, will_qos);
}

bool
nng_mqtt_msg_get_connect_clean_session(nng_msg *msg)
{
	return nni_mqtt_msg_get_connect_clean_session(msg);
}

bool
nng_mqtt_msg_get_connect_will_retain(nng_msg *msg)
{
	return nni_mqtt_msg_get_connect_will_retain(msg);
}

uint8_t
nng_mqtt_msg_get_connect_will_qos(nng_msg *msg)
{
	return nni_mqtt_msg_get_connect_will_qos(msg);
}

void
nng_mqtt_msg_set_connect_proto_version(nng_msg *msg, uint8_t proto_version)
{
	nni_mqtt_msg_set_connect_proto_version(msg, proto_version);
}

void
nng_mqtt_msg_set_connect_keep_alive(nng_msg *msg, uint16_t keep_alive)
{
	nni_mqtt_msg_set_connect_keep_alive(msg, keep_alive);
}

void
nng_mqtt_msg_set_connect_client_id(nng_msg *msg, const char *client_id)
{
	nni_mqtt_msg_set_connect_client_id(msg, client_id);
}

void
nng_mqtt_msg_set_connect_will_topic(nng_msg *msg, const char *will_topic)
{
	nni_mqtt_msg_set_connect_will_topic(msg, will_topic);
}

void
nng_mqtt_msg_set_connect_will_msg(
    nng_msg *msg, uint8_t *will_msg, uint32_t len)
{
	nni_mqtt_msg_set_connect_will_msg(msg, will_msg, len);
}

void
nng_mqtt_msg_set_connect_user_name(nng_msg *msg, const char *user_name)
{
	nni_mqtt_msg_set_connect_user_name(msg, user_name);
}

void
nng_mqtt_msg_set_connect_password(nng_msg *msg, const char *password)
{
	nni_mqtt_msg_set_connect_password(msg, password);
}

void
nng_mqtt_msg_set_connect_property(nng_msg *msg, property *p)
{
	nni_mqtt_msg_set_connect_property(msg, p);
}

uint8_t
nng_mqtt_msg_get_connect_proto_version(nng_msg *msg)
{
	return nni_mqtt_msg_get_connect_proto_version(msg);
}

uint16_t
nng_mqtt_msg_get_connect_keep_alive(nng_msg *msg)
{
	return nni_mqtt_msg_get_connect_keep_alive(msg);
}

const char *
nng_mqtt_msg_get_connect_client_id(nng_msg *msg)
{
	return nni_mqtt_msg_get_connect_client_id(msg);
}

const char *
nng_mqtt_msg_get_connect_will_topic(nng_msg *msg)
{
	return nni_mqtt_msg_get_connect_will_topic(msg);
}

uint8_t *
nng_mqtt_msg_get_connect_will_msg(nng_msg *msg, uint32_t *len)
{
	return nni_mqtt_msg_get_connect_will_msg(msg, len);
}

const char *
nng_mqtt_msg_get_connect_user_name(nng_msg *msg)
{
	return nni_mqtt_msg_get_connect_user_name(msg);
}

const char *
nng_mqtt_msg_get_connect_password(nng_msg *msg)
{
	return nni_mqtt_msg_get_connect_password(msg);
}

property *
nng_mqtt_msg_get_connect_property(nng_msg *msg)
{
	return nni_mqtt_msg_get_connect_property(msg);
}

void
nng_mqtt_msg_set_connack_return_code(nng_msg *msg, uint8_t return_code)
{
	nni_mqtt_msg_set_connack_return_code(msg, return_code);
}

void
nng_mqtt_msg_set_connack_flags(nng_msg *msg, uint8_t flags)
{
	nni_mqtt_msg_set_connack_flags(msg, flags);
}

void
nng_mqtt_msg_set_connack_property(nng_msg *msg, property *prop)
{
	nni_mqtt_msg_set_connack_property(msg, prop);
}

uint8_t
nng_mqtt_msg_get_connack_return_code(nng_msg *msg)
{
	return nni_mqtt_msg_get_connack_return_code(msg);
}

uint8_t
nng_mqtt_msg_get_connack_flags(nng_msg *msg)
{
	return nni_mqtt_msg_get_connack_flags(msg);
}

property *
nng_mqtt_msg_get_connack_property(nng_msg *msg)
{
	return nni_mqtt_msg_get_connack_property(msg);
}

void
nng_mqtt_msg_set_disconnect_reason_code(nng_msg *msg, uint8_t reason_code)
{
	nni_mqtt_msg_set_disconnect_reason_code(msg, reason_code);
}

property *
nng_mqtt_msg_get_disconnect_property(nng_msg *msg)
{
	return nni_mqtt_msg_get_disconnect_property(msg);
}

void
nng_mqtt_msg_set_disconnect_property(nng_msg *msg, property *p)
{
	nni_mqtt_msg_set_disconnect_property(msg, p);
}

void
nng_mqtt_msg_set_publish_qos(nng_msg *msg, uint8_t qos)
{
	nni_mqtt_msg_set_publish_qos(msg, qos);
}

property *
nng_mqtt_msg_get_publish_property(nng_msg *msg)
{
	return nni_mqtt_msg_get_publish_property(msg);
}

void
nng_mqtt_msg_set_publish_property(nng_msg *msg, property *p)
{
	nni_mqtt_msg_set_publish_property(msg, p);
}

uint8_t
nng_mqtt_msg_get_publish_qos(nng_msg *msg)
{
	return nni_mqtt_msg_get_publish_qos(msg);
}

void
nng_mqtt_msg_set_publish_retain(nng_msg *msg, bool retain)
{
	nni_mqtt_msg_set_publish_retain(msg, retain);
}

bool
nng_mqtt_msg_get_publish_retain(nng_msg *msg)
{
	return nni_mqtt_msg_get_publish_retain(msg);
}

void
nng_mqtt_msg_set_publish_dup(nng_msg *msg, bool dup)
{
	nni_mqtt_msg_set_publish_dup(msg, dup);
}

bool
nng_mqtt_msg_get_publish_dup(nng_msg *msg)
{
	return nni_mqtt_msg_get_publish_dup(msg);
}

/**
 * @brief set publishing topic for this msg
 * 		return 0 if scussed -1 invalid.
 * @param msg 
 * @param topic 
 * @return int 
 */
int
nng_mqtt_msg_set_publish_topic(nng_msg *msg, const char *topic)
{
	if (strchr(topic, '#') != NULL || strchr(topic, '+') != NULL) {
		return -1;
	}
	return nni_mqtt_msg_set_publish_topic(msg, topic);
}

const char *
nng_mqtt_msg_get_publish_topic(nng_msg *msg, uint32_t *topic_len)
{
	return nni_mqtt_msg_get_publish_topic(msg, topic_len);
}

void
nng_mqtt_msg_set_publish_packet_id(nng_msg *msg, uint16_t packet_id)
{
	nni_mqtt_msg_set_publish_packet_id(msg, packet_id);
}

uint16_t
nng_mqtt_msg_get_publish_packet_id(nng_msg *msg)
{
	return nni_mqtt_msg_get_publish_packet_id(msg);
}

void
nng_mqtt_msg_set_publish_payload(nng_msg *msg, uint8_t *payload, uint32_t len)
{
	nni_mqtt_msg_set_publish_payload(msg, payload, len);
}

uint8_t *
nng_mqtt_msg_get_publish_payload(nng_msg *msg, uint32_t *len)
{
	return nni_mqtt_msg_get_publish_payload(msg, len);
}

uint16_t
nng_mqtt_msg_get_puback_packet_id(nng_msg *msg)
{
	return nni_mqtt_msg_get_puback_packet_id(msg);
}

void
nng_mqtt_msg_set_puback_packet_id(nng_msg *msg, uint16_t packet_id)
{
	nni_mqtt_msg_set_puback_packet_id(msg, packet_id);
}

property *
nng_mqtt_msg_get_puback_property(nng_msg *msg)
{
	return nni_mqtt_msg_get_puback_property(msg);
}

void
nng_mqtt_msg_set_puback_property(nng_msg *msg, property *prop)
{
	nni_mqtt_msg_set_puback_property(msg, prop);
}

property *
nng_mqtt_msg_get_pubrec_property(nng_msg *msg)
{
	return nni_mqtt_msg_get_pubrec_property(msg);
}

void
nng_mqtt_msg_set_pubrec_property(nng_msg *msg, property *prop)
{
	nni_mqtt_msg_set_pubrec_property(msg, prop);
}

property *
nng_mqtt_msg_get_pubrel_property(nng_msg *msg)
{
	return nni_mqtt_msg_get_pubrel_property(msg);
}

void
nng_mqtt_msg_set_pubrel_property(nng_msg *msg, property *prop)
{
	nni_mqtt_msg_set_pubrel_property(msg, prop);
}

property *
nng_mqtt_msg_get_pubcomp_property(nng_msg *msg)
{
	return nni_mqtt_msg_get_pubcomp_property(msg);
}

void
nng_mqtt_msg_set_pubcomp_property(nng_msg *msg, property *prop)
{
	nni_mqtt_msg_set_pubcomp_property(msg, prop);
}

uint16_t
nng_mqtt_msg_get_pubrec_packet_id(nng_msg *msg)
{
	return nni_mqtt_msg_get_pubrec_packet_id(msg);
}

void
nng_mqtt_msg_set_pubrec_packet_id(nng_msg *msg, uint16_t packet_id)
{
	nni_mqtt_msg_set_pubrec_packet_id(msg, packet_id);
}

uint16_t
nng_mqtt_msg_get_pubrel_packet_id(nng_msg *msg)
{
	return nni_mqtt_msg_get_pubrel_packet_id(msg);
}

void
nng_mqtt_msg_set_pubrel_packet_id(nng_msg *msg, uint16_t packet_id)
{
	nni_mqtt_msg_set_pubrel_packet_id(msg, packet_id);
}

uint16_t
nng_mqtt_msg_get_pubcomp_packet_id(nng_msg *msg)
{
	return nni_mqtt_msg_get_pubcomp_packet_id(msg);
}

void
nng_mqtt_msg_set_pubcomp_packet_id(nng_msg *msg, uint16_t packet_id)
{
	nni_mqtt_msg_set_pubcomp_packet_id(msg, packet_id);
}

uint16_t
nng_mqtt_msg_get_subscribe_packet_id(nng_msg *msg)
{
	return nni_mqtt_msg_get_subscribe_packet_id(msg);
}

void
nng_mqtt_msg_set_subscribe_packet_id(nng_msg *msg, uint16_t packet_id)
{
	nni_mqtt_msg_set_subscribe_packet_id(msg, packet_id);
}

void
nng_mqtt_msg_set_subscribe_topics(
    nng_msg *msg, nng_mqtt_topic_qos *topics, uint32_t topics_count)
{
	nni_mqtt_msg_set_subscribe_topics(
	    msg, (nni_mqtt_topic_qos *) topics, topics_count);
}

nng_mqtt_topic_qos *
nng_mqtt_msg_get_subscribe_topics(nng_msg *msg, uint32_t *topics_count)
{
	return nni_mqtt_msg_get_subscribe_topics(msg, topics_count);
}

property *
nng_mqtt_msg_get_subscribe_property(nng_msg *msg)
{
	return nni_mqtt_msg_get_subscribe_property(msg);
}

void
nng_mqtt_msg_set_subscribe_property(nng_msg *msg, property *prop)
{
	nni_mqtt_msg_set_subscribe_property(msg, prop);
}

uint16_t
nng_mqtt_msg_get_suback_packet_id(nng_msg *msg)
{
	return nni_mqtt_msg_get_suback_packet_id(msg);
}

void
nng_mqtt_msg_set_suback_packet_id(nng_msg *msg, uint16_t packet_id)
{
	nni_mqtt_msg_set_suback_packet_id(msg, packet_id);
}
void
nng_mqtt_msg_set_suback_return_codes(
    nng_msg *msg, uint8_t *return_codes, uint32_t return_codes_count)
{
	nni_mqtt_msg_set_suback_return_codes(
	    msg, return_codes, return_codes_count);
}

uint8_t *
nng_mqtt_msg_get_suback_return_codes(
    nng_msg *msg, uint32_t *return_codes_counts)
{
	return nni_mqtt_msg_get_suback_return_codes(msg, return_codes_counts);
}

property *
nng_mqtt_msg_get_suback_property(nng_msg *msg)
{
	return nni_mqtt_msg_get_suback_property(msg);
}

void
nng_mqtt_msg_set_suback_property(nng_msg *msg, property *prop)
{
	nni_mqtt_msg_set_suback_property(msg, prop);
}

uint16_t
nng_mqtt_msg_get_unsubscribe_packet_id(nng_msg *msg)
{
	return nni_mqtt_msg_get_unsubscribe_packet_id(msg);
}

void
nng_mqtt_msg_set_unsubscribe_packet_id(nng_msg *msg, uint16_t packet_id)
{
	nni_mqtt_msg_set_unsubscribe_packet_id(msg, packet_id);
}

void
nng_mqtt_msg_set_unsubscribe_topics(
    nng_msg *msg, nng_mqtt_topic *topics, uint32_t topics_count)
{
	nni_mqtt_msg_set_unsubscribe_topics(
	    msg, (nni_mqtt_topic *) topics, topics_count);
}

nng_mqtt_topic *
nng_mqtt_msg_get_unsubscribe_topics(nng_msg *msg, uint32_t *topics_count)
{
	return nni_mqtt_msg_get_unsubscribe_topics(msg, topics_count);
}

property *
nng_mqtt_msg_get_unsubscribe_property(nng_msg *msg)
{
	return nni_mqtt_msg_get_unsubscribe_property(msg);
}

void
nng_mqtt_msg_set_unsubscribe_property(nng_msg *msg, property *prop)
{
	nni_mqtt_msg_set_unsubscribe_property(msg, prop);
}

void
nng_mqtt_msg_set_unsuback_packet_id(nng_msg *msg, uint16_t packet_id)
{
	nni_mqtt_msg_set_unsuback_packet_id(msg, packet_id);
}

uint16_t
nng_mqtt_msg_get_unsuback_packet_id(nng_msg *msg)
{
	return nni_mqtt_msg_get_unsuback_packet_id(msg);
}

property *
nng_mqtt_msg_get_unsuback_property(nng_msg *msg)
{
	return nni_mqtt_msg_get_unsuback_property(msg);
}

void
nng_mqtt_msg_set_unsuback_property(nng_msg *msg, property *prop)
{
	nni_mqtt_msg_set_unsuback_property(msg, prop);
}

nng_mqtt_topic *
nng_mqtt_topic_array_create(size_t n)
{
	return nni_mqtt_topic_array_create(n);
}

void
nng_mqtt_topic_array_set(
    nng_mqtt_topic *topic, size_t n, const char *topic_name)
{
	nni_mqtt_topic_array_set(topic, n, topic_name);
}

void
nng_mqtt_topic_array_free(nng_mqtt_topic *topic, size_t n)
{
	nni_mqtt_topic_array_free(topic, n);
}

nng_mqtt_topic_qos *
nng_mqtt_topic_qos_array_create(size_t n)
{
	return nni_mqtt_topic_qos_array_create(n);
}

void
nng_mqtt_topic_qos_array_set(nng_mqtt_topic_qos *topic_qos, size_t index,
    const char *topic_name, uint8_t qos)
{
	nni_mqtt_topic_qos_array_set(topic_qos, index, topic_name, qos);
}

void
nng_mqtt_topic_qos_array_free(nng_mqtt_topic_qos *topic_qos, size_t n)
{
	nni_mqtt_topic_qos_array_free(topic_qos, n);
}

int
nng_mqtt_set_connect_cb(nng_socket sock, nng_pipe_cb cb, void *arg)
{
	return nng_pipe_notify(sock, NNG_PIPE_EV_ADD_POST, cb, arg);
}

int
nng_mqtt_set_disconnect_cb(nng_socket sock, nng_pipe_cb cb, void *arg)
{
	return nng_pipe_notify(sock, NNG_PIPE_EV_REM_POST, cb, arg);
}

void
nng_mqtt_msg_dump(
    nng_msg *msg, uint8_t *buffer, uint32_t len, bool print_bytes)
{
	nni_mqtt_msg_dump(msg, buffer, len, print_bytes);
}

uint32_t
get_mqtt_properties_len(property *prop)
{
	return get_properties_len(prop);
}

int
mqtt_property_free(property *prop)
{
	return property_free(prop);
}

void
mqtt_property_foreach(property *prop, void (*cb)(property *))
{
	return property_foreach(prop, cb);
}

int
mqtt_property_dup(property **dup, const property *src)
{
	return property_dup(dup, src);
}

property *
mqtt_property_pub_by_will(property *will_prop)
{
	return property_pub_by_will(will_prop);
}

int
mqtt_property_value_copy(property *dst, const property *src)
{
	return property_value_copy(dst, src);
}

property *
mqtt_property_alloc(void)
{
	return property_alloc();
}

property *
mqtt_property_set_value_u8(uint8_t prop_id, uint8_t value)
{
	return property_set_value_u8(prop_id, value);
}

property *
mqtt_property_set_value_u16(uint8_t prop_id, uint16_t value)
{
	return property_set_value_u16(prop_id, value);
}

property *
mqtt_property_set_value_u32(uint8_t prop_id, uint32_t value)
{
	return property_set_value_u32(prop_id, value);
}

property *
mqtt_property_set_value_varint(uint8_t prop_id, uint32_t value)
{
	return property_set_value_varint(prop_id, value);
}

property *
mqtt_property_set_value_binary(uint8_t prop_id, uint8_t *value, uint32_t len, bool copy_value)
{
	return property_set_value_binary(prop_id, value, len, copy_value);
}

property *
mqtt_property_set_value_str( uint8_t prop_id, const char *value, uint32_t len, bool copy_value)
{
	return property_set_value_str(prop_id, value, len, copy_value);
}

property *
mqtt_property_set_value_strpair(uint8_t prop_id, const char *key, uint32_t key_len, const char *value, uint32_t value_len, bool copy_value)
{
	return property_set_value_strpair(prop_id, key, key_len, value, value_len, copy_value);
}

property_type_enum
mqtt_property_get_value_type(uint8_t prop_id)
{
	return property_get_value_type(prop_id);
}

property_data *
mqtt_property_get_value(property *prop, uint8_t prop_id)
{
	return property_get_value(prop, prop_id);
}

void
mqtt_property_append(property *prop_list, property *last)
{
	return property_append(prop_list, last);
}


static void
mqtt_sub_aio_cancel(nni_aio *aio, void *arg, int rv)
{
	NNI_ARG_UNUSED(arg);
	// nng_mqtt_client *client = arg;

	if (!nni_aio_list_active(aio)) {
		return;
	}
	// If receive in progress, then cancel the pending transfer.
	// The callback on the rxaio will cause the user aio to
	// be canceled too.
	// if (nni_list_first(&p->recvq) == aio) {
	// 	nni_aio_abort(p->rxaio, rv);
	// 	nni_mtx_unlock(&p->mtx);
	// 	return;
	// }
	nni_aio_list_remove(aio);
	nni_aio_finish_error(aio, rv);
}

nng_mqtt_client *
nng_mqtt_client_alloc(nng_socket sock, nng_mqtt_sub_cb cb, bool is_async)
{
	nng_mqtt_client *client = NNI_ALLOC_STRUCT(client);
	client->sock            = sock;
	if (is_async) {
		nng_aio_alloc(&client->send_aio, cb, client);
		nng_lmq_alloc(&client->msgq, NNG_MAX_SEND_LMQ);
	}
	return client;
}

/**
 * @brief an AIO cannot kill itself in its own callback!!
 * 
 * @param client
 * @param is_async
 */
void nng_mqtt_client_free(nng_mqtt_client *client, bool is_async)
{
	nni_aio_close(client->send_aio);
	if (client) {
		if (is_async) {
			nng_aio_free(client->send_aio);
		}
		NNI_FREE_STRUCT(client);
	}
	return;
}

int
nng_mqtt_subscribe(nng_socket sock, nng_mqtt_topic_qos *sbs, size_t count, property *pl)
{
	int rv = 0;
	// create a SUBSCRIBE message
	nng_msg *submsg;
	nng_mqtt_msg_alloc(&submsg, 0);
	nng_mqtt_msg_set_packet_type(submsg, NNG_MQTT_SUBSCRIBE);
	nng_mqtt_msg_set_subscribe_topics(submsg, sbs, count);

	if (pl) {
		nng_mqtt_msg_set_subscribe_property(submsg, pl);
	}

	if ((rv = nng_sendmsg(sock, submsg, NNG_FLAG_ALLOC)) != 0) {
		nng_msg_free(submsg);
	}

	return rv;
}

int 
nng_mqtt_subscribe_async(nng_mqtt_client *client, nng_mqtt_topic_qos *sbs, size_t count, property *pl)
{
	// create a SUBSCRIBE message
	nng_msg *submsg;
	nng_mqtt_msg_alloc(&submsg, 0);
	nng_mqtt_msg_set_packet_type(submsg, NNG_MQTT_SUBSCRIBE);
	nng_mqtt_msg_set_subscribe_topics(submsg, sbs, count);

	if (pl) {
		nng_mqtt_msg_set_subscribe_property(submsg, pl);
	}
	if (nng_aio_busy(client->send_aio)) {
		if (nng_lmq_put(client->msgq, submsg) != 0) {
			log_error("bridging subscribe failed!");
		}
		return 1;
	}
	nng_aio_set_msg(client->send_aio, submsg);
	nng_send_aio(client->sock, client->send_aio);

	return 0;
}

conn_param*
nng_get_conn_param_from_msg(nng_msg *msg)
{
	return nni_get_conn_param_from_msg(msg);
}

#if defined(NNG_SUPP_SQLITE)

void
nng_mqtt_sqlite_db_init(nng_mqtt_sqlite_option *opt, const char *db_name)
{
	nni_mqtt_sqlite_db_init(opt, db_name);
}

void
nng_mqtt_sqlite_db_fini(nng_mqtt_sqlite_option *opt)
{
	nni_mqtt_sqlite_db_fini(opt);
}

int
nng_mqtt_alloc_sqlite_opt(nng_mqtt_sqlite_option **opt)
{
	int                     rv     = 0;
	nng_mqtt_sqlite_option *option = NULL;
	if ((option = nni_zalloc(sizeof(nng_mqtt_sqlite_option))) == NULL) {
		return (NNG_ENOMEM);
	}

	*opt = option;
	return (rv);
}

int
nng_mqtt_free_sqlite_opt(nng_mqtt_sqlite_option *opt)
{
	if (opt) {
		nni_free(opt, sizeof(nng_mqtt_sqlite_option));
	}
	return 0;
}

void
nng_mqtt_set_sqlite_conf(nng_mqtt_sqlite_option *opt, void *config)
{
	opt->bridge = config;
}

int
nng_mqtt_qos_db_set_retain(
    void *db, const char *topic, nng_msg *msg, uint8_t proto_ver)
{
	return nni_mqtt_qos_db_set_retain(
	    (sqlite3 *) db, topic, msg, proto_ver);
}

nng_msg *
nng_mqtt_qos_db_get_retain(void *db, const char *topic)
{
	return nni_mqtt_qos_db_get_retain((sqlite3 *) db, topic);
}

int
nng_mqtt_qos_db_remove_retain(void *db, const char *topic)
{
	return nni_mqtt_qos_db_remove_retain((sqlite3 *) db, topic);
}

nng_msg **
nng_mqtt_qos_db_find_retain(void *db, const char *topic_pattern)
{
	return nni_mqtt_qos_db_find_retain((sqlite3 *) db, topic_pattern);
}

#endif