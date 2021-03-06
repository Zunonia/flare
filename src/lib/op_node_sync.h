/**
 *	op_node_sync.h
 *
 *	@author	Masaki Fujimoto <fujimoto@php.net>
 *
 *	$Id$
 */
#ifndef	OP_NODE_SYNC_H
#define	OP_NODE_SYNC_H

#include "op.h"
#include "cluster.h"

using namespace std;
using namespace boost;

namespace gree {
namespace flare {

/**
 *	opcode class (node_sync)
 */
class op_node_sync : public op {
protected:
	cluster*	_cluster;

public:
	op_node_sync(shared_connection c, cluster* cl);
	virtual ~op_node_sync();

	virtual int run_client(vector<cluster::node>& v);

protected:
	virtual int _parse_text_server_parameters();
	virtual int _run_server();
	virtual int _run_client(vector<cluster::node>& v);
	virtual int _parse_text_client_parameters();
};

}	// namespace flare
}	// namespace gree

#endif	// OP_NODE_SYNC_H
// vim: foldmethod=marker tabstop=2 shiftwidth=2 autoindent
