#include "qplc_api.h"
#include "dispatcher/dispatcher.hpp"
namespace qpl::core_sw::dispatcher
{
aggregates_table_t avx512_aggregates_table = {
	avx512_qplc_bit_aggregates_8u,
	avx512_qplc_aggregates_8u,
	avx512_qplc_aggregates_16u,
	avx512_qplc_aggregates_32u};
}
