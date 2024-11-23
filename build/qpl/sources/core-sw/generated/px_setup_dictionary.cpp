#include "deflate_slow_utils.h"
#include "dispatcher/dispatcher.hpp"
namespace qpl::core_sw::dispatcher
{
setup_dictionary_table_t px_setup_dictionary_table = {
	 reinterpret_cast<void *>(&px_setup_dictionary)};
}
