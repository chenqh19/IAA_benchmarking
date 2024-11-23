#include "qplc_api.h"
#include "dispatcher/dispatcher.hpp"
namespace qpl::core_sw::dispatcher
{
crc64_table_t px_crc64_table = {
	px_qplc_crc64};
}
