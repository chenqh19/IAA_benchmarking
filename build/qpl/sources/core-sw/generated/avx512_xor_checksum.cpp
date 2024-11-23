#include "qplc_api.h"
#include "dispatcher/dispatcher.hpp"
namespace qpl::core_sw::dispatcher
{
xor_checksum_table_t avx512_xor_checksum_table = {
	avx512_qplc_xor_checksum_8u};
}
