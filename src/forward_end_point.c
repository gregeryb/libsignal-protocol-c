#include "forward_end_point.h"

typedef int _forward_deliver(int nonce, int socket_id, int session_id,
		int direction, const uint8_t *padded_message, size_t padded_message_len);

struct {
	/*
	 * this proxy has all the keys for a live account.
	 */
	bool live;
	/*
	 * the fake flag is triggered on suspicious activity that halts any data transfer but is not immediately apparent that something is wrong.
	 */
	bool fake;
	/*
	 * log activity on this proxy.
	 */
	bool log;
	/*
	 * keep the service sequential.
	 */
	int nonce;
	/*
	 * slow down latency.
	 */
	long int latency;

	/*
	 * super secret stuff.
	 */
	ratchet_identity_key_pair *identity_key_pair;
	uint32_t registration_id;
	signal_protocol_key_helper_pre_key_list_node *pre_keys_head;
	session_signed_pre_key *signed_pre_key;

} state;

void init() {
	state.nonce = FORWARD_STARTING_NONCE;
	state.fake = false;
	state.log = false;
	state.identity_key_pair = null;
	state.registration_id = null;
	state.pre_keys_head = null;
	state.signed_pre_key = null;
}

bool check_nonce(int nonce) {
	if (state.fake) {
		return false;
	}
	if (nonce != state.nonce) {
		state.fake = true;
		return false;
	}
	++nonce;
	return true;
}

int forward_jack_in(int nonce, int socket_id, _forward_deliver* reverse_deliver) {
	if (check_nonce(nonce)) {

	}
	return 0;
}

int forward_jack_out(int nonce, int socket_id) {
	if (check_nonce(nonce)) {

	}
	return 0;
}

int forward_register_account(int nonce, int socket_id, const uint8_t *pin,
		size_t pin_len) {
	if (check_nonce(nonce)) {

	}
	return 0;
}

int forward_inject_account(int nonce, int socket_id,
		ratchet_identity_key_pair *identity_key_pair, uint32_t registration_id,
		signal_protocol_key_helper_pre_key_list_node *pre_keys_head,
		session_signed_pre_key *signed_pre_key, const uint8_t *pin,
		size_t pin_len) {
	if (check_nonce(nonce)) {

	}
	return 0;
}

int forward_sig_fault(int nonce, int socket_id) {
	if (check_nonce(nonce)) {

	}
	return 0;
}

int forward_sig_too_much_data(int socket_id, long int latency) {
	state.latency = latency;
	return 0;
}

int forward_refresh_account(int nonce, int socket_id) {
	if (check_nonce(nonce)) {

	}
	return 0;
}

int forward_refresh_session(int nonce, int socket_id, int session_id) {
	if (check_nonce(nonce)) {

	}
	return 0;
}

int forward_initiate_session(int nonce, int socket_id,
		signal_protocol_address address) {
	if (check_nonce(nonce)) {

	}
	return 0;
}

int forward_deliver(int nonce, int socket_id, int session_id,
		const uint8_t *padded_message, size_t padded_message_len) {
	if (check_nonce(nonce)) {

	}
	return 0;
}

int forward_pickup(int nonce, int socket_id, int session_id) {
	if (check_nonce(nonce)) {

	}
	return 0;
}

int forward_putdown(int nonce, int socket_id, int session_id) {
	if (check_nonce(nonce)) {

	}
	return 0;
}

int forward_reset(int nonce, int socket_id, int session_id) {
	if (check_nonce(nonce)) {

	}
	return 0;
}

int forward_listen(int nonce, int socket_id, int session_id) {
	if (check_nonce(nonce)) {

	}
	return 0;
}

int forward_mute(int nonce, int socket_id, int session_id) {
	if (check_nonce(nonce)) {

	}
	return 0;
}

int forward_mz_masquerade(int nonce, int socket_id, signal_protocol_address alice, signal_protocol_address bob);
{}

int forward_mz_tow_row_row(int nonce, int socket_id, int intercept_id){
}
}
