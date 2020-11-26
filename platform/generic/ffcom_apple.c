#include <platform_override.h>
#include <sbi_utils/fdt/fdt_helper.h>
#include <sbi_utils/fdt/fdt_fixup.h>

static u64 ffcom_apple_tlbr_flush_limit(const struct fdt_match *match)
{
	return 0;
}

static int ffcom_apple_fdt_fixup(void *fdt, const struct fdt_match *match)
{
	return 0;
}

static const struct fdt_match ffcom_apple_match[] = {
	{ .compatible = "ffcome-apple" },
	{ },
};

const struct platform_override ffcom_apple = {
	.match_table = ffcom_apple_match,
	.tlbr_flush_limit = ffcom_apple_tlbr_flush_limit,
	.fdt_fixup = ffcom_apple_fdt_fixup,
};
