#include "deflate_slow.h"
#include "dispatcher/dispatcher.hpp"
namespace qpl::core_sw::dispatcher
{
deflate_fix_table_t px_deflate_fix_table = {
	 reinterpret_cast<void *>(&px_slow_deflate_body)};
}
