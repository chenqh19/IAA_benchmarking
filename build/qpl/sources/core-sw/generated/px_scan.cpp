#include "qplc_api.h"
#include "dispatcher/dispatcher.hpp"
namespace qpl::core_sw::dispatcher
{
scan_table_t px_scan_table = {
	px_qplc_scan_eq_8u,
	px_qplc_scan_eq_16u8u,
	px_qplc_scan_eq_32u8u,
	px_qplc_scan_ne_8u,
	px_qplc_scan_ne_16u8u,
	px_qplc_scan_ne_32u8u,
	px_qplc_scan_lt_8u,
	px_qplc_scan_lt_16u8u,
	px_qplc_scan_lt_32u8u,
	px_qplc_scan_le_8u,
	px_qplc_scan_le_16u8u,
	px_qplc_scan_le_32u8u,
	px_qplc_scan_gt_8u,
	px_qplc_scan_gt_16u8u,
	px_qplc_scan_gt_32u8u,
	px_qplc_scan_ge_8u,
	px_qplc_scan_ge_16u8u,
	px_qplc_scan_ge_32u8u,
	px_qplc_scan_range_8u,
	px_qplc_scan_range_16u8u,
	px_qplc_scan_range_32u8u,
	px_qplc_scan_not_range_8u,
	px_qplc_scan_not_range_16u8u,
	px_qplc_scan_not_range_32u8u};
}
