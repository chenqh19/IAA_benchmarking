#include "qplc_api.h"
#include "dispatcher/dispatcher.hpp"
namespace qpl::core_sw::dispatcher
{
xor_checksum_table_t px_xor_checksum_table = {
	px_qplc_xor_checksum_8u};
}
